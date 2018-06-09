/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_bonjour_service_endpoint : NWConcrete_nw_endpoint {
    char * service_composite;
    char * service_domain;
    char * service_name;
    char * service_type;
}

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned int)type;

@end
