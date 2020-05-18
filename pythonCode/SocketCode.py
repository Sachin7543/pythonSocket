import serial 
isConnected=False


def reConnect():
    global isConnected
    global ser
    ser = serial.Serial('COM3',9600)
    if(ser.read()):
        isConnected=True
    else:
        isConnected=False

        
reConnect()

while True:
    try:
        if(isConnected):
            read = ser.readline()
            strR=read.decode()
            newStr=strR.rstrip()
            print(newStr)
        else:
            print(isConnected)
            reConnect()
    except serial.SerialException as ex:
        print(" Communication PORT is Not unavailable")
        isConnected=False
