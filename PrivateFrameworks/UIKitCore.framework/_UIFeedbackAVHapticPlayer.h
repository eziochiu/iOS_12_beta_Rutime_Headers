/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackAVHapticPlayer : NSObject <_UIFeedbackPlayer> {
    AVHapticPlayerChannel * _channel;
    unsigned long long  _continuousPlayingCount;
    id /* block */  _invalidationBlock;
}

@property (nonatomic, retain) AVHapticPlayerChannel *channel;
@property (nonatomic) unsigned long long continuousPlayingCount;
@property (nonatomic, copy) id /* block */ invalidationBlock;

- (void).cxx_destruct;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id)channel;
- (unsigned long long)continuousPlayingCount;
- (id /* block */)invalidationBlock;
- (bool)isEqual:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setContinuousPlayingCount:(unsigned long long)arg1;
- (void)setInvalidationBlock:(id /* block */)arg1;

@end
