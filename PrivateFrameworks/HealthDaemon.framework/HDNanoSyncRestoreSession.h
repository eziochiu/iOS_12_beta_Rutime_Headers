/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncRestoreSession : NSObject {
    NSCalendar * _calendar;
    NSMutableArray * _completionHandlers;
    bool  _finished;
    HDNanoSyncStore * _nanoSyncStore;
    long long  _sequenceNumber;
    NSUUID * _sessionUUID;
    NSDate * _startDate;
    _HKExpiringCompletionTimer * _timer;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) _HKExpiringCompletionTimer *timer;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)addCompletionHandler:(id /* block */)arg1;
- (id)calendar;
- (id)completionHandlers;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)initWithSyncStore:(id)arg1 sessionUUID:(id)arg2;
- (bool)isFinished;
- (id)nanoSyncStore;
- (void)scheduleTimeoutWithInterval:(double)arg1 handler:(id /* block */)arg2;
- (long long)sequenceNumber;
- (id)sessionUUID;
- (void)setCompletionHandlers:(id)arg1;
- (void)setSequenceNumber:(long long)arg1;
- (void)setTimer:(id)arg1;
- (id)startDate;
- (id)timer;

@end
