/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVFullScreenViewController : UIViewController {
    UIView * _contentView;
    <AVFullScreenViewControllerDelegate> * _delegate;
}

@property (nonatomic) UIView *contentView;
@property (nonatomic) <AVFullScreenViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)contentView;
- (id)delegate;
- (id)keyCommands;
- (bool)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
