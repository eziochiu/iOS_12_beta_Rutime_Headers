/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request> {
    unsigned int  complete;
    id /* block */  completion;
    unsigned long long  consumed_bytes;
    NSObject<OS_nw_content_context> * context;
    NSObject<OS_dispatch_data> * data;
    unsigned int  idempotent;
    NWConcrete_nw_write_request * next;
    double  relative_priority;
    unsigned int  reported;
    unsigned int  write_close;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
