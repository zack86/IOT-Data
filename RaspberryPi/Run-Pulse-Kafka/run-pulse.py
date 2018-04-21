from pulsesensor import Pulsesensor
import time
import datetime
import csv


p = Pulsesensor()
p.startAsyncBPM()

with open('/home/pi/test/20180305/pulse.csv', 'w') as csvfile:
    fieldnames = ['datetime', 'BPM']
    writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
    writer.writeheader()

    try:
        while True:
            bpm = p.BPM		
	    dt = str(datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'))

            if bpm > 0:
                print(dt + "  BPM: %d" % bpm)
            else:
                print(dt + "  No Heartbeat found")
	    
	    writer.writerow({'datetime': dt, 'BPM':bpm}) # for train data
		
            time.sleep(1)
    except:
        p.stopAsyncBPM()
