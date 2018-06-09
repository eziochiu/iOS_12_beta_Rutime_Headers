/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMockXPCStuff : NSObject {
    NSMutableDictionary * _mockListeners;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableDictionary *mockListeners;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)mockListeners;
- (id)queue;
- (void)setMockListeners:(id)arg1;
- (void)setQueue:(id)arg1;

@end
