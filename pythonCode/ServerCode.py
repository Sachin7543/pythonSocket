########Details###########

import serial 
isConnected=False
import socket
import time


def reConnect():
    global isConnected
    global ser
    ser = serial.Serial('COM3',9600)
    if(ser.read()):
        isConnected=True
    else:
        isConnected=False

        
reConnect()
host="localhost"
port = 4000
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.bind((host,port))
s.listen(1)
print("server listening on port :",port)
c,adder = s.accept()
print("connection form",str(adder))

while True:
    try:
        if(isConnected):
            read = ser.readline()
            strR=read.decode()
            newStr=strR.rstrip()
            b1 = bytearray(newStr,'utf-8')
            c.send(b1)
        else:
            #print(isConnected)
            reConnect()
    except serial.SerialException as ex:
        isConnected=False
        error="Communication PORT is Not unavailable"
        c.send(error.encode())
        time.sleep(1)
        
