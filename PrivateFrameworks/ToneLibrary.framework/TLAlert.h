/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlert : NSObject {
    TLAlertConfiguration * _configuration;
    long long  _instanceIndex;
    <TLAlertPlaybackObserver> * _playbackObserver;
    NSString * _toneIdentifier;
    long long  _type;
    NSString * _vibrationIdentifier;
}

@property (nonatomic, readonly) TLAlertConfiguration *configuration;
@property (nonatomic) <TLAlertPlaybackObserver> *playbackObserver;
@property (nonatomic, readonly) NSString *toneIdentifier;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *vibrationIdentifier;

+ (void)_setWatchPrefersSalientToneAndVibration:(bool)arg1;
+ (bool)_stopAllAlerts;
+ (bool)_watchPrefersSalientToneAndVibration;
+ (id)alertWithConfiguration:(id)arg1;
+ (void)playAlertForType:(long long)arg1;
+ (void)playToneAndVibrationForType:(long long)arg1;

- (void).cxx_destruct;
- (id)_descriptionForDebugging:(bool)arg1;
- (id)_initWithConfiguration:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (void)_updateAudioVolumeDynamicallyToValue:(float)arg1;
- (id)configuration;
- (id)debugDescription;
- (id)description;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (void)play;
- (void)playWithCompletionHandler:(id /* block */)arg1;
- (bool)playWithCompletionHandler:(id /* block */)arg1 targetQueue:(id)arg2;
- (id)playbackObserver;
- (void)setPlaybackObserver:(id)arg1;
- (void)stop;
- (void)stopWithOptions:(id)arg1;
- (id)toneIdentifier;
- (long long)type;
- (id)vibrationIdentifier;

@end
