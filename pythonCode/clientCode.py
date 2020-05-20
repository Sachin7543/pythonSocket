import socket

s=socket.socket()
s.connect(("192.168.1.106",4000))
msg=s.recv(1024)

while msg:
    print(msg.decode())
    msg=s.recv(1024)

s.close() 
