/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOperation : NSOperation {
    NSError * _error;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    long long  _status;
}

@property (readonly) NSError *error;
@property (readonly) long long status;

+ (void)initialize;
+ (long long)statusOfOperations:(id)arg1 error:(id*)arg2;

- (bool)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4;
- (void)dealloc;
- (void)didEnterTerminalState;
- (id)error;
- (bool)evaluateDependenciesAndMarkAsExecuting;
- (void)finalize;
- (id)init;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (void)markAsCancelled;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)arg1;
- (long long)status;

@end
