/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMockXPCProxy : NSProxy {
    bool  _async;
    NSObject<OS_dispatch_queue> * _queue;
    id  _target;
}

@property (nonatomic) id target;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithBlahBlahBlahTarget:(id)arg1 queue:(id)arg2 async:(bool)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
