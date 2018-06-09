/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator {
    double  _lastTypedKeyTimestamp;
}

@property (getter=_keyboardConfiguration, nonatomic, readonly) _UIKeyboardFeedbackGeneratorConfiguration *keyboardConfiguration;
@property (getter=_lastTypedKeyTimestamp, setter=_setLastTypedKeyTimestamp:, nonatomic) double lastTypedKeyTimestamp;

+ (Class)_configurationClass;

- (void)_activated;
- (double)_autoDeactivationTimeout;
- (id)_feedbackWithUpdatedVolume:(id)arg1;
- (id)_keyboardConfiguration;
- (double)_lastTypedKeyTimestamp;
- (void)_playFeedbackForActionType:(long long)arg1 withCustomization:(id /* block */)arg2;
- (void)_setLastTypedKeyTimestamp:(double)arg1;
- (id)_stats_key;
- (void)actionOccurred:(long long)arg1;
- (float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3;

@end
