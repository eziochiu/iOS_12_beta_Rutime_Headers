/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRButtonHaptic : NSObject {
    <UIFeedbackGeneratorUserInteractionDriven> * _behavior;
}

@property (nonatomic, retain) <UIFeedbackGeneratorUserInteractionDriven> *behavior;

+ (id)hapticForView:(id)arg1;

- (void).cxx_destruct;
- (id)behavior;
- (void)setBehavior:(id)arg1;
- (void)userInteractionBegan;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;

@end
