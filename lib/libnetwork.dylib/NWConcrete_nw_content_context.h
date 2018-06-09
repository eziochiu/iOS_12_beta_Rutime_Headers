/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_content_context : NSObject <OS_nw_content_context> {
    unsigned int  __pad_bits;
    NWConcrete_nw_content_context * antecedent;
    unsigned int  completed_send;
    unsigned long long  enqueue_time;
    NSObject<OS_nw_error> * error;
    unsigned int  expiration_checked;
    unsigned long long  expiration_milliseconds;
    BOOL  identifier;
    unsigned int  is_final;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSObject<OS_nw_array> * protocol_metadatas;
    double  relative_priority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(const char *)arg1;

@end
