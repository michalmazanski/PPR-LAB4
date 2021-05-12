#!/sbin/sh
soapcpp2 -c calc.h # pakiet gSOAP
cc -lgsoap -o calcclient calcclient.c soapC.c soapClient.c
cc -lgsoap -o calcserver calcserver.c soapC.c soapServer.c -lm
