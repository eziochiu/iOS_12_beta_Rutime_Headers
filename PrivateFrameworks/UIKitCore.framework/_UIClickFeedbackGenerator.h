/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>

+ (Class)_configurationClass;

- (id)_clickConfiguration;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (void)pressedDown;
- (void)pressedUp;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
