/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPreferences : NSObject {
    bool  _allowSameBuildUpdates;
    NSDate * _autoSUEnd;
    NSNumber * _autoSUEndDelta;
    NSDate * _autoSUStart;
    NSNumber * _autoSUStartDelta;
    NSDate * _autoSUUnlockEnd;
    NSNumber * _autoSUUnlockEndDelta;
    NSDate * _autoSUUnlockStart;
    NSNumber * _autoSUUnlockStartDelta;
    bool  _autoUpdateForceOff;
    bool  _autoUpdateForceOn;
    bool  _automaticUpdateV2Enabled;
    bool  _backgroundDLKnownBuilds;
    bool  _disableAutoDownload;
    bool  _disableAutoSU;
    bool  _disableAvailabilityAlerts;
    bool  _disableBuildNumberComparison;
    bool  _disableFullReplacementFallback;
    bool  _disableManagedRequest;
    bool  _disableUserWiFiOnlyPeriod;
    bool  _forceFullReplacement;
    NSNumber * _mandatorySUFlags;
    <SUPreferencesObserver> * _observer;
    NSString * _requestedPMV;
    bool  _scanWeeklyInternally;
    bool  _shouldDelayInMinutes;
    bool  _shouldDelayUpdates;
    bool  _simulateAutoDownload;
    NSNumber * _unmetConstraints;
    NSNumber * _updateDelayInterval;
}

@property (nonatomic, readonly) bool allowSameBuildUpdates;
@property (nonatomic, readonly) NSNumber *autoSUEndDelta;
@property (nonatomic, readonly) NSNumber *autoSUStartDelta;
@property (nonatomic, readonly) NSNumber *autoSUUnlockEndDelta;
@property (nonatomic, readonly) NSNumber *autoSUUnlockStartDelta;
@property (nonatomic, readonly) bool autoUpdateForceOff;
@property (nonatomic, readonly) bool autoUpdateForceOn;
@property (nonatomic, readonly) bool backgroundDLKnownBuilds;
@property (getter=isAutoDownloadDisabled, nonatomic, readonly) bool disableAutoDownload;
@property (getter=isAutoSUDisabled, nonatomic, readonly) bool disableAutoSU;
@property (nonatomic, readonly) bool disableAvailabilityAlerts;
@property (nonatomic, readonly) bool disableBuildNumberComparison;
@property (nonatomic, readonly) bool disableFullReplacementFallback;
@property (nonatomic, readonly) bool disableManagedRequest;
@property (nonatomic, readonly) bool disableUserWiFiOnlyPeriod;
@property (nonatomic, readonly) bool forceFullReplacement;
@property (setter=enableAutomaticUpdateV2:, nonatomic) bool isAutomaticUpdateV2Enabled;
@property (nonatomic, readonly) NSNumber *mandatorySUFlags;
@property (nonatomic) <SUPreferencesObserver> *observer;
@property (nonatomic, readonly) NSString *requestedPMV;
@property (nonatomic, readonly) bool scanWeeklyInternally;
@property (nonatomic, readonly) bool shouldDelayInMinutes;
@property (nonatomic, readonly) bool shouldDelayUpdates;
@property (nonatomic, readonly) bool simulateAutoDownload;
@property (nonatomic, readonly) NSNumber *unmetConstraints;
@property (nonatomic, readonly) NSNumber *updateDelayInterval;

+ (id)sharedInstance;

- (id)_copyNumberPreferenceForKey:(id)arg1;
- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long long)arg2;
- (id)_copyStringPreferenceForKey:(id)arg1;
- (id)_createDatePreferencesForKey:(id)arg1;
- (bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (void)_loadPreferences;
- (id)_mandatorySUFlagsForPreferences;
- (void)_setBooleanPreferenceForKey:(id)arg1 value:(bool)arg2;
- (bool)allowSameBuildUpdates;
- (id)autoSUEndDelta;
- (id)autoSUStartDelta;
- (id)autoSUUnlockEndDelta;
- (id)autoSUUnlockStartDelta;
- (bool)autoUpdateForceOff;
- (bool)autoUpdateForceOn;
- (bool)backgroundDLKnownBuilds;
- (void)dealloc;
- (bool)disableAvailabilityAlerts;
- (bool)disableBuildNumberComparison;
- (bool)disableFullReplacementFallback;
- (bool)disableManagedRequest;
- (bool)disableUserWiFiOnlyPeriod;
- (void)enableAutomaticUpdateV2:(bool)arg1;
- (bool)forceFullReplacement;
- (id)init;
- (bool)isAutoDownloadDisabled;
- (bool)isAutoSUDisabled;
- (bool)isAutomaticUpdateV2Enabled;
- (bool)isKeySetInPreferences:(id)arg1;
- (id)mandatorySUFlags;
- (id)observer;
- (void)reload;
- (id)requestedPMV;
- (bool)scanWeeklyInternally;
- (void)setObserver:(id)arg1;
- (bool)shouldDelayInMinutes;
- (bool)shouldDelayUpdates;
- (bool)simulateAutoDownload;
- (id)unmetConstraints;
- (id)updateDelayInterval;

@end
