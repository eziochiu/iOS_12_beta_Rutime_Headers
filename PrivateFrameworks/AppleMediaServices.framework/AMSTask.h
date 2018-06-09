/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSTask : NSObject {
    NSObject<OS_dispatch_queue> * _performTaskQueue;
    AMSPromise * _promise;
    NSObject<OS_dispatch_queue> * _promiseAccessQueue;
}

@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *performTaskQueue;
@property (nonatomic, retain) AMSPromise *promise;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *promiseAccessQueue;
@property (getter=isRunning, nonatomic, readonly) bool running;

+ (id)taskCache;
+ (id)taskCacheAccessQueue;

- (void).cxx_destruct;
- (id)init;
- (bool)isFinished;
- (bool)isRunning;
- (id)performTaskQueue;
- (id)performTaskWithBlock:(id /* block */)arg1;
- (id)promise;
- (id)promiseAccessQueue;
- (void)setPromise:(id)arg1;
- (void)setPromiseAccessQueue:(id)arg1;

@end