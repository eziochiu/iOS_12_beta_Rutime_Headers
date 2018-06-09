/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutomaticPasswordSheetTransitioningDelegate : NSObject <UIAdaptivePresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    _SFAutomaticPasswordSheetAnimationController * _dismissalAnimationController;
    _SFAutomaticPasswordSheetAnimationController * _presentationAnimationController;
    _SFAutomaticPasswordSheetPresentationController * _presentationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end
