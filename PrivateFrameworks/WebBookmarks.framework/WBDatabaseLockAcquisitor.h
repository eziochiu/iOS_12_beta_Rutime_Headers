/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBDatabaseLockAcquisitor : NSObject {
    <WBDatabaseLockAcquisitorDelegate> * _delegate;
    bool  _lockAcquired;
    long long  _maxRetryCount;
    long long  _retryCount;
    NSTimer * _timer;
    Class  _webBookmarkCollectionClass;
}

@property (nonatomic) <WBDatabaseLockAcquisitorDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_attemptToLockSyncAndNotifyDelegateOnFailure:(bool)arg1;
- (void)_retryTimerFired:(id)arg1;
- (void)_startTimerWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)_stopTimer;
- (void)acquireLockWithTimeout:(double)arg1;
- (void)acquireLockWithTimeout:(double)arg1 retryInterval:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithWebBookmarkCollectionClass:(Class)arg1;
- (void)releaseLock;
- (void)setDelegate:(id)arg1;

@end
