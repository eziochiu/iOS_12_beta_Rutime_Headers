/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSyncSession : NSObject {
    NSCalendar * _calendar;
    HDAssertion * _databaseAccessibilityAssertion;
    double  _databaseAccessibilityTimeout;
    <HDSyncSessionDelegate> * _delegate;
    NSString * _reason;
    NSUUID * _sessionUUID;
    NSDate * _startDate;
    <HDSyncStore> * _syncStore;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, retain) HDAssertion *databaseAccessibilityAssertion;
@property (nonatomic) double databaseAccessibilityTimeout;
@property (nonatomic, readonly) <HDSyncSessionDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) <HDSyncStore> *syncStore;

- (void).cxx_destruct;
- (id)calendar;
- (id)databaseAccessibilityAssertion;
- (double)databaseAccessibilityTimeout;
- (id)delegate;
- (id)description;
- (id)excludedSyncStores;
- (id)init;
- (id)initWithSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (id)reason;
- (void)sendChanges:(id)arg1 completion:(id /* block */)arg2;
- (id)sessionUUID;
- (void)setDatabaseAccessibilityAssertion:(id)arg1;
- (void)setDatabaseAccessibilityTimeout:(double)arg1;
- (id)startDate;
- (bool)syncDidBeginWithProfile:(id)arg1 error:(id*)arg2;
- (void)syncDidFinishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)syncStore;
- (void)syncWillBegin;
- (bool)transactionDidEndWithError:(id*)arg1;

@end
