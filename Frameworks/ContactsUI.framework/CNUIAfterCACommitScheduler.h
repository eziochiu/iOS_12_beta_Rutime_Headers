/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIAfterCACommitScheduler : NSObject <CNScheduler> {
    struct __CFRunLoopObserver { } * _runLoopObserver;
    CNSuspendableSchedulerDecorator * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFRunLoopObserver { }*runLoopObserver;
@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *scheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (struct __CFRunLoopObserver { }*)runLoopObserver;
- (id)scheduler;
- (double)timestamp;

@end
