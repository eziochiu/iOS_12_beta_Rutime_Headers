/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRSiriHaptic : NSObject {
    <UIFeedbackGeneratorUserInteractionDriven> * _behavior;
    long long  _state;
}

@property (nonatomic, retain) <UIFeedbackGeneratorUserInteractionDriven> *behavior;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)behavior;
- (id)initWithButton:(id)arg1;
- (void)performSiriEndWithSuccess:(bool)arg1;
- (void)performSiriStartWithCompletion:(id /* block */)arg1;
- (void)setBehavior:(id)arg1;
- (void)setState:(long long)arg1;
- (void)siriButtonTouchesEnded;
- (long long)state;

@end
