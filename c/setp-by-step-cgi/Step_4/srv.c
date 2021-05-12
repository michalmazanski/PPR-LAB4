#include "PPRSrvSoapBinding.nsmap"		 // XML namespace mapping table (only needed once at the global level)
#include "soapH.h"						 // server stubs, serializers, etc.
#include <string.h>

int main()
{
  struct soap *soap = soap_new1(SOAP_XML_INDENT);
  if (soap_serve(soap) != SOAP_OK)
    soap_print_fault(soap, stderr);
  soap_destroy(soap); // delete managed deserialized C++ instances
  soap_end(soap);     // delete other managed data
  soap_free(soap);    // free the soap struct context data
}

int ns1__simpleService(struct soap *soap, char *_str, char **_simpleServiceReturn)
{
	char *msg = ( char* )soap_malloc( soap, 1024 );
	strcpy( msg, _str );
    
	*_simpleServiceReturn = _str;
	
	return SOAP_OK;
}

