#!/usr/bin/python
import socket,sys
#ip = raw_input("Digite o ip do alvo ")
for porta in range(1,65535):
	s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	if s.connect_ex((sys.argv[1],porta)) == 0:
		print "Porta ", porta, "[ABERTA]"
		s.close()
