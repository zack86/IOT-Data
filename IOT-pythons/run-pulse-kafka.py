from pulsesensor import Pulsesensor
from kafka import KafkaProducer
import time
import datetime
import csv
import json

producer = KafkaProducer(bootstrap_servers='52.199.170.216:9092', value_serializer=lambda v: json.dumps(v).encode('utf-8'))

p = Pulsesensor()
p.startAsyncBPM()

try:
    while True:
        bpm = p.BPM		
        dt = str(datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))

        if bpm > 0:
            print(dt + "  BPM: %d" % bpm)
        else:
            print(dt + "  No Heartbeat found")
   
        producer.send('pulse', {'user':'user-1', 'datetime': dt, 'BPM':bpm}) # for kafka
        time.sleep(1)
except Exception as e:
    p.stopAsyncBPM()
    print(e)
