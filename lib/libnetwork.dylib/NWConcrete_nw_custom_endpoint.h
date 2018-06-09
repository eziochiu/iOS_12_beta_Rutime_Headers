/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint {
    NSObject<OS_dispatch_data> * data;
    id /* block */  resolver_block;
    unsigned int  type;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription;
- (unsigned long long)getHash;
- (id)initWithType:(unsigned int)arg1 resolver:(id /* block */)arg2 data:(id)arg3;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned int)type;

@end
