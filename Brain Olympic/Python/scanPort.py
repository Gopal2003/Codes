import socket  #importing library 
 
ip = socket.gethostbyname (socket.gethostname())  #getting ip-address of host
 
for port in range(49150):      #check for all available ports
 
    try:
  
        serv = socket.socket(socket.AF_INET,socket.SOCK_STREAM) # create a new socket
 
        serv.bind((ip,port)) # bind socket with address
            
    except:
 
        print('Open Port :',port) #print open port number
 
    serv.close() #close connection