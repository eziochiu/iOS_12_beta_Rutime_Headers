/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSBonjourAdvertise : NSObject {
    <TSBonjourAdvertiseDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    struct _DNSServiceRef_t { } * _sdRef;
}

@property (nonatomic) <TSBonjourAdvertiseDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)registeredServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 withFlags:(unsigned int)arg4;
- (void)setDelegate:(id)arg1;
- (bool)startAdvertisingWithError:(id*)arg1;
- (bool)stopAdvertising;

@end
