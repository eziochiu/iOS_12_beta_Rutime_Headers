/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request> {
    char * buffer;
    id /* block */  buffer_completion;
    NSObject<OS_nw_content_context> * context;
    NSObject<OS_dispatch_data> * data;
    id /* block */  data_completion;
    id /* block */  data_multiple_completion;
    NSObject<OS_nw_error> * error;
    unsigned int  is_complete;
    unsigned long long  max;
    unsigned long long  min;
    NWConcrete_nw_read_request * next;
    unsigned long long  progress;
    NSObject<OS_nw_array> * read_array;
    unsigned int  reported;
    int  variant;
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
