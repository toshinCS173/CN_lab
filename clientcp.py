from socket import*
serverName='DESKTOP-63IDB5L'
serverPort=12101
clientSocket=socket(AF_INET,SOCK_STREAM)
clientSocket.connect((serverName,serverPort))
sentence=input("Enter File Name:")
clientSocket.send(sentence.encode())
filecontents=clientSocket.recv(1024).decode
print('From Server :',filecontents)
clientSocket.close()
