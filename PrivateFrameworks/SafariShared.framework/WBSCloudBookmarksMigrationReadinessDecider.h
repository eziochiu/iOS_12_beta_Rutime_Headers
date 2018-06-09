/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudBookmarksMigrationReadinessDecider : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDate * _dateOfCloudTabDevicesSyncRequest;
    NSDate * _dateOfDeviceEligibilityUpdate;
    NSDate * _dateOfLastCloudTabDevicesUpdate;
    WBSDeviceEligibilityInformation * _deviceEligibilityInformation;
    NSArray * _eligibleOperatingSystemVersionRanges;
    <WBSLogger> * _keyActionsLogger;
    bool  _lastCloudTabDevicesSyncRequestWasSuccessful;
    NSDate * _nonMigratableDeviceGracePeriodStartDate;
    NSMutableDictionary * _nonMigratableDeviceIdentifiersToLastModifiedDates;
    bool  _readyToMigrate;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *earliestPossibleDateOfMigration;
@property (nonatomic, copy) NSArray *eligibleOperatingSystemVersionRanges;
@property (nonatomic, retain) <WBSLogger> *keyActionsLogger;
@property (getter=isReadyToMigrate, nonatomic, readonly) bool readyToMigrate;

+ (id)_deviceEligibilityInformationFromDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (double)_deviceEligibilityUpdateInterval;
- (void)_fetchDeviceEligibilityInformationWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_hasValidDeviceEligibilityInformation;
- (bool)_isCloudTabDeviceDataPastExpiration;
- (bool)_isDateInGracePeriod:(id)arg1;
- (bool)_isInternalInstall;
- (bool)_isPastMinimumWaitAfterCloudTabDeviceSyncRequest;
- (void)_logDevicesExcludedFromUpdateWithDevices:(id)arg1;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_logKeyActionForUpdateWithDevice:(id)arg1;
- (void)_logPrunedDeviceIdentifiers:(id)arg1;
- (double)_maximumAgeForCloudTabDevicesUpdate;
- (double)_minimumWaitForCloudTabDevicesUpdateAfterSync;
- (double)_nonMigratableDeviceGracePeriod;
- (void)_pruneOldNonMigratableDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)_reevaluateReadinessWithCompletionHandler:(id /* block */)arg1;
- (bool)_shouldRequestCloudTabDevicesSync;
- (bool)_shouldWaitForCloudTabDevicesUpdate;
- (void)_synchronizeCloudTabDevicesWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)_timescale;
- (id)dictionaryRepresentation;
- (id)earliestPossibleDateOfMigration;
- (id)eligibleOperatingSystemVersionRanges;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (bool)isReadyToMigrate;
- (id)keyActionsLogger;
- (void)setEligibleOperatingSystemVersionRanges:(id)arg1;
- (void)setKeyActionsLogger:(id)arg1;
- (void)updateWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(id /* block */)arg3;

@end
