#!/bin/bash

cc -o srv.cgi srv.c soapC.c soapServer.c -lgsoap
