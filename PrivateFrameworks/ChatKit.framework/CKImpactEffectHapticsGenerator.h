/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImpactEffectHapticsGenerator : NSObject {
    NSObject<CK_UIFeedBackImpactBehavior> * _expressiveSendFeedbackImpactBehavior;
    double  _feedbackImpactBehaviorDispatchDelay;
    bool  _sendFeedbackImpactBehavior;
}

@property (nonatomic, retain) NSObject<CK_UIFeedBackImpactBehavior> *expressiveSendFeedbackImpactBehavior;
@property (nonatomic) double feedbackImpactBehaviorDispatchDelay;
@property (nonatomic) bool sendFeedbackImpactBehavior;

- (void).cxx_destruct;
- (void)_setUpExpressiveSendFeedbackImpactBehaviorForCoordinateSpace:(id)arg1;
- (void)cleanUpImpactBehaviorFeedback;
- (id)expressiveSendFeedbackImpactBehavior;
- (double)feedbackImpactBehaviorDispatchDelay;
- (id)init;
- (bool)sendFeedbackImpactBehavior;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1;
- (void)sendImpactBehaviorFeedbackForCoordinateSpace:(id)arg1 cleanUpOnSend:(bool)arg2;
- (void)setExpressiveSendFeedbackImpactBehavior:(id)arg1;
- (void)setFeedbackImpactBehaviorDispatchDelay:(double)arg1;
- (void)setImpactBehaviorFeedbackDispatchTimeForSendWithImpactMessage:(id)arg1;
- (void)setSendFeedbackImpactBehavior:(bool)arg1;

@end
