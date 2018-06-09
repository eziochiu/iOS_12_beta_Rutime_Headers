/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer> {
    id /* block */  _invalidationBlock;
}

@property (nonatomic, copy) id /* block */ invalidationBlock;

+ (bool)_supportsPlayingFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_activateUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id /* block */)invalidationBlock;
- (void)setInvalidationBlock:(id /* block */)arg1;

@end
