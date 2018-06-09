/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibratorController : NSObject {
    TLAccessQueue * _accessQueue;
    NSUUID * _activePlayRequestIdentifier;
    NSMutableSet * _pendingStopRequestIdentifiers;
}

@property (nonatomic, readonly) unsigned long long vibratorState;

+ (bool)f24eF45EGWHwq1245odi1235hqw231ifqwQQFR;

- (void).cxx_destruct;
- (unsigned int)_previewVibrationSystemSoundID;
- (void)_turnOffIfAppropriate;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1 forVibratorFeedbackKind:(unsigned long long)arg2;
- (unsigned long long)vibratorState;

@end
