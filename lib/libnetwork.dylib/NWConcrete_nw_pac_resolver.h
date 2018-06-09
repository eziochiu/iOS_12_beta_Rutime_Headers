/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver> {
    struct __CFData { } * auditToken;
    struct __CFString { } * bundleIdentifier;
    NSObject<OS_nw_context> * context;
    struct __CFURL { } * endpointURL;
    struct __CFString { } * pacScript;
    struct __CFURL { } * pacURL;
    id /* block */  result_block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
