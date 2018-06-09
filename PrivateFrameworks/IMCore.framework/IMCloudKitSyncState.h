/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncState : NSObject {
    bool  _accountIsEnabled;
    long long  _accountStatus;
    long long  _changingEnabledState;
    NSArray * _errors;
    NSDate * _exitDate;
    bool  _hasExited;
    bool  _isDisablingDevices;
    NSDate * _lastSyncDate;
    long long  _syncControllerRecordType;
    unsigned long long  _syncControllerSyncState;
    long long  _syncControllerSyncType;
    long long  _syncState;
}

@property (nonatomic, readonly) bool accountIsEnabled;
@property (nonatomic, readonly) long long accountStatus;
@property (nonatomic, readonly) bool canChangeEnabledSetting;
@property (nonatomic, readonly) bool canEnableSyncing;
@property (nonatomic, readonly) bool canStartSyncing;
@property (nonatomic, readonly) long long changingEnabledState;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly, copy) NSDate *exitDate;
@property (nonatomic, readonly) bool hasExited;
@property (nonatomic, readonly) bool isDisablingDevices;
@property (nonatomic, readonly) bool isSyncEnabledForDisplayOnly;
@property (nonatomic, readonly) bool isSyncing;
@property (nonatomic, readonly) bool isSyncingAvailable;
@property (nonatomic, readonly) bool isSyncingEnabled;
@property (nonatomic, readonly) bool isSyncingPaused;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) long long syncControllerRecordType;
@property (nonatomic, readonly) unsigned long long syncControllerSyncState;
@property (nonatomic, readonly) long long syncControllerSyncType;
@property (nonatomic, readonly) long long syncState;
@property (nonatomic, readonly) bool syncingFailed;

+ (id)logHandle;

- (void).cxx_destruct;
- (bool)_isChangingEnabledState;
- (bool)_shouldHideProgressInFirstSevenDays;
- (bool)accountIsEnabled;
- (long long)accountStatus;
- (bool)canChangeEnabledSetting;
- (bool)canEnableSyncing;
- (bool)canStartSyncing;
- (long long)changingEnabledState;
- (id)createSyncProgressWithSyncStatistics:(id)arg1;
- (id)description;
- (id)errors;
- (id)exitDate;
- (bool)hasExited;
- (id)initWithAccountEnabled:(bool)arg1 stateDictionary:(id)arg2;
- (bool)isDisablingDevices;
- (bool)isSyncEnabledForDisplayOnly;
- (bool)isSyncing;
- (bool)isSyncingAvailable;
- (bool)isSyncingEnabled;
- (bool)isSyncingPaused;
- (id)lastSyncDate;
- (id)logHandle;
- (bool)shouldFetchSyncStatistics;
- (bool)shouldRescheduleSyncSyncProgress;
- (long long)syncControllerRecordType;
- (unsigned long long)syncControllerSyncState;
- (long long)syncControllerSyncType;
- (id)syncErrorWithDomain:(id)arg1 code:(long long)arg2;
- (long long)syncState;
- (bool)syncingFailed;

@end
