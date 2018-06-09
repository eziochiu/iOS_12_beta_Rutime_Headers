/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_hostname_endpoint : NWConcrete_nw_endpoint {
    char * hostname;
    unsigned short  port;
    NSObject<OS_xpc_object> * txt_record;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (id)initWithHostname:(const char *)arg1 port:(unsigned short)arg2;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned short)port;
- (unsigned int)type;

@end
