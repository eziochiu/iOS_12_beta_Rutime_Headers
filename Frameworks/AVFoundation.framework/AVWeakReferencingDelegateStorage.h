/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _delegateReadWriteQueue;
    AVWeakReference * _weakReferenceToDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_collectUncollectables;
- (id)_delegate;
- (void)_setDelegateViaWeakReference:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)finalize;
- (void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2;
- (id)init;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
