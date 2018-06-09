/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVWindow : UIWindow {
    UIViewController * _viewControllerToBePresented;
}

@property (nonatomic, retain) UIViewController *viewControllerToBePresented;

- (void).cxx_destruct;
- (bool)_canAffectStatusBarAppearance;
- (bool)_shouldControlAutorotation;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewControllerToBePresented:(id)arg2;
- (void)setViewControllerToBePresented:(id)arg1;
- (id)viewControllerToBePresented;

@end
