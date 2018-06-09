/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint : NSObject <OS_nw_endpoint> {
    unsigned short  alternate_port;
    struct nw_hash_table { } * associations;
    char * description;
    NSObject<OS_nw_interface> * interface;
    unsigned int  is_local_domain;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    int  original_fd;
    NWConcrete_nw_endpoint * parent_endpoint;
    char * parent_endpoint_domain;
    unsigned int  parent_is_proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const char *domainForPolicy;
@property (nonatomic, readonly) const char *getDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned short port;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription;
- (void)dealloc;
- (id)description;
- (const char *)domainForPolicy;
- (const char *)getDescription;
- (unsigned long long)getHash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned short)port;
- (unsigned int)type;

@end
