/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLCapabilitiesManager : NSObject {
    NSDictionary * _deviceCodeNameSimplicationMapping;
    bool  _isAlertToneStoreAvailable;
    bool  _isRingtoneStoreAvailable;
}

@property (getter=isAlertToneStoreAvailable, nonatomic, readonly) bool alertToneStoreAvailable;
@property (nonatomic, readonly) NSString *deviceCodeName;
@property (nonatomic, readonly) bool hasSynchronizedEmbeddedVibrationsCapability;
@property (nonatomic, readonly) bool hasSynchronizedVibrationsCapability;
@property (nonatomic, readonly) bool hasUserGeneratedVibrationsCapability;
@property (nonatomic, readonly) bool hasVibratorCapability;
@property (getter=isHomePod, nonatomic, readonly) bool homePod;
@property (getter=isRingtoneStoreAvailable, nonatomic, readonly) bool ringtoneStoreAvailable;
@property (nonatomic, readonly) NSString *simplifiedDeviceCodeName;
@property (nonatomic, readonly) bool wantsModernDefaultRingtone;

+ (id)sharedCapabilitiesManager;

- (void).cxx_destruct;
- (void)_checkRingtoneStoreAvailability;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;
- (bool)_hasTelephonyCapability;
- (void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)deviceCodeName;
- (bool)hasSynchronizedEmbeddedVibrationsCapability;
- (bool)hasSynchronizedVibrationsCapability;
- (bool)hasUserGeneratedVibrationsCapability;
- (bool)hasVibratorCapability;
- (id)init;
- (bool)isAlertToneStoreAvailable;
- (bool)isHomePod;
- (bool)isRingtoneStoreAvailable;
- (id)simplifiedDeviceCodeName;
- (bool)wantsModernDefaultRingtone;

@end