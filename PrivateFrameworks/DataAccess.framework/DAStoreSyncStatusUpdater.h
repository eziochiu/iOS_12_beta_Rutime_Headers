/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAStoreSyncStatusUpdater : NSObject

+ (unsigned long long)_accountErrorForNSError:(id)arg1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1;
+ (unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1;
+ (unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1;
+ (id)_eventStore;
+ (id)_eventStorePurger;
+ (void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4;
+ (void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(unsigned long long*)arg4;
+ (void)resetSyncStatusForAllStoresIfNecessary;
+ (void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2;
+ (void)syncStartedForStoreWithExternalID:(id)arg1;

@end
