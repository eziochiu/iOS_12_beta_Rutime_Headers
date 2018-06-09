/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupOnBoardingController : NSObject <BYFollowUpFlowControlling> {
    NSObject<BFFFinishSetupFlowHosting> * _host;
    NSMutableArray * _onBoardingFeatures;
}

+ (id)finishSetupOnBoardingControllerWithHost:(id)arg1;

- (void).cxx_destruct;
- (void)_didCompleteSplashController:(id)arg1 completion:(id /* block */)arg2;
- (id)_splashControllerForNextOnBoardingFeatureWithCompletion:(id /* block */)arg1;
- (bool)controllerNeedsToRun;
- (id)initWithHost:(id)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
