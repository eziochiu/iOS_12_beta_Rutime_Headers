/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAsyncOperation : NSOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSError * _error;
    bool  _isExecuting;
    bool  _isFinished;
}

@property (nonatomic, readonly, copy) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (void)execute;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)init;
- (bool)isAsynchronous;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
