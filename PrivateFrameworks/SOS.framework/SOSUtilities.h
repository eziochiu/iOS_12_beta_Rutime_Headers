/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSUtilities : NSObject

+ (long long)SOSSelectableTriggerMechanismCapability;
+ (long long)SOSTriggerClickCount;
+ (long long)SOSTriggerMechanismForClickCount:(long long)arg1;
+ (id)_userFriendsDefaults;
+ (id)_userSOSDefaults;
+ (bool)canTriggerSOSWithClicks;
+ (bool)canTriggerSOSWithVolumeLockHold;
+ (long long)currentSOSTriggerMechanism;
+ (long long)defaultSOSTriggerMechanism;
+ (bool)deviceHasHomeButton;
+ (bool)isAllowedToMessageSOSContacts;
+ (bool)isAutomaticCallCountdownEnabled;
+ (bool)isD2xDevice;
+ (bool)longPressTriggersEmergencySOS;
+ (bool)mustAllowThreeClickTrigger;
+ (void)setAllowedToMessageSOSContacts:(bool)arg1;
+ (void)setAutomaticCallCountdownEnabled:(bool)arg1;
+ (void)setLongPressTriggersEmergencySOS:(bool)arg1;
+ (void)setPlayAudioDuringCountdown:(bool)arg1;
+ (bool)shouldPlayAudioDuringCountdown;

@end
