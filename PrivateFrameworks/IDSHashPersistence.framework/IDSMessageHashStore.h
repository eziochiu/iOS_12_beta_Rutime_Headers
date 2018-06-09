/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
 */

@interface IDSMessageHashStore : NSObject {
    unsigned long long  __initialProcessTime;
    unsigned long long  __initialServerTime;
    NSObject<OS_dispatch_source> * _databaseCloseTimer;
    double  _databaseLastUpdateTime;
    NSObject<OS_dispatch_queue> * _ivarQueue;
}

@property (nonatomic) unsigned long long _initialProcessTime;
@property (nonatomic) unsigned long long _initialServerTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__closeDatabaseOnIvarQueue;
- (void)_clearDatabaseCloseTimerOnIvarQueue;
- (unsigned long long)_currentLocalTime;
- (unsigned long long)_initialProcessTime;
- (unsigned long long)_initialServerTime;
- (void)_performInitialHousekeeping;
- (void)_runCleanup;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)_startCleanupTimer;
- (void)_storeInitialServerTime;
- (void)addMessageHash:(id)arg1;
- (void)closeDatabase;
- (bool)containsMessageHash:(id)arg1;
- (unsigned int)dataProtectionClass;
- (void)dealloc;
- (id)init;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (void)set_initialProcessTime:(unsigned long long)arg1;
- (void)set_initialServerTime:(unsigned long long)arg1;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidLeaveMemoryPressure;
- (void)updateCreationDateForHash:(id)arg1;

@end
