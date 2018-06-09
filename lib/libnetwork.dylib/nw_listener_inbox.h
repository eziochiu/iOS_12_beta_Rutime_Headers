/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface nw_listener_inbox : NSObject {
    NSObject<nw_listener_inbox_delegate> * _delegate;
    NSObject<OS_nw_interface> * _interface;
    NSObject<OS_nw_endpoint> * _local_endpoint;
    NSObject<OS_nw_parameters> * _parameters;
}

@property (nonatomic, readonly) NSObject<OS_nw_interface> *interface;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *local_endpoint;

- (void).cxx_destruct;
- (bool)cancel;
- (id)initWithDelegate:(id)arg1;
- (id)interface;
- (id)local_endpoint;

@end
