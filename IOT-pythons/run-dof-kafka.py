#!/usr/bin/python

import csv
import sys, getopt
sys.path.append('.')
import RTIMU
import os.path
import time
import datetime
import json
from kafka import KafkaProducer


producer = KafkaProducer(bootstrap_servers='52.199.170.216:9092', value_serializer=lambda v: json.dumps(v).encode('utf-8'))
   
SETTINGS_FILE = "RTIMULib.ini"  
   
s = RTIMU.Settings(SETTINGS_FILE)
imu = RTIMU.RTIMU(s)  
   
if (not imu.IMUInit()):  
  sys.exit(1)  
   
imu.setSlerpPower(0.02)  
imu.setGyroEnable(True)  
imu.setAccelEnable(True)  
imu.setCompassEnable(True)  
   
poll_interval = imu.IMUGetPollInterval()  

prev = time.time() 
data = {}

while True:  
        hack = time.time()  
        dt = str(datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S.%f')[:-4])
        if imu.IMURead():  
            data = imu.getIMUData()  
  
        if hack - prev >= 0.2:
            prev = hack
            print "time",dt
            print "compass:", data['compass']
            print "gyro", data['gyro']
            print "accel", data['accel']
      
            # for kafka
            producer.send('dof', {'datetime': dt, 'user': 'user-1', 
			          'X_gyro': data['gyro'][0],'Y_gyro': data['gyro'][1],'Z_gyro': data['gyro'][2],
				  'X_acc': data['accel'][0],'Y_acc': data['accel'][1],'Z_acc': data['accel'][2],
				  'X_comp': data['compass'][0],'Y_comp': data['compass'][1],'Z_comp': data['compass'][2]}) 
