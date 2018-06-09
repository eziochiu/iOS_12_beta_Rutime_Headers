/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPaymentPassViewController : UIViewController {
    PKAddPaymentPassRequestConfiguration * _configuration;
    <PKAddPaymentPassViewControllerDelegate> * _delegate;
    PKRemoteAddPaymentPassViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
}

@property (nonatomic) <PKAddPaymentPassViewControllerDelegate> *delegate;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)canAddPaymentPass;

- (void).cxx_destruct;
- (void)_setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
