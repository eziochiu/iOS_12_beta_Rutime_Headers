/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSRFUserSettingMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (bool)isSiriRestrictedOnLockScreen;

@end
