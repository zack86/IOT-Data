from kafka import KafkaConsumer
import os
import time
import datetime
import csv
import json


music_on = False

while True:
	consumer = KafkaConsumer(bootstrap_servers=['52.199.170.216:9092'])
	consumer.subscribe(['result'])

	list = [0] * 25
	thresh_start = 5
	thresh_end = 3
	for message in consumer:
		record = message.value
		result = json.loads(record)
		output = result['output']
		list.append(output)
		list.pop(0)
		count = list.count(1)
	
		if output == 0:
			print('untired')
		else:
			print('tired')
		
		print(list)

		if count < thresh_start:
			if music_on is True and count < thresh_end:
				print('closing music...')
				os.system('killall mplayer')
				music_on = False
		else:	
			if music_on is False: 
				os.system('mplayer /home/pi/test/Run-Music/GunsNRoses.mp3 &')
				#os.system('bash -c "exec -a my-music /home/pi/test/Run-Music/music_script.sh &"')
				music_on = True

		
consumer.close()
