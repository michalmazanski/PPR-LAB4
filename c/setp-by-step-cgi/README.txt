1. Tworzymy plik nagłówkowy na podstawie WSDL:
	wsdl2h -c -o srv.h file://srv.wsdl

2. Generujemy kod serwera:
	soapcpp2 -S -L srv.h

3. Tworzymy plik srv.c - uwaga: pamiętamy o dodaniu wygenerowanego pliku *nsmap (na samej górze pliku)

4. Kompilujemy:
	cc -o srv.cgi srv.c soapC.c soapServer.c -lgsoap

5. Umieszczamy plik wynikowy na serwerze (tutaj: mv hello.cgi /var/www/html/SOAP/C).

6. Przykłady: https://www.genivia.com/doc/guide/html/index.html 
