/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface _SKUIStatusBarAlertViewController : UIViewController {
    <_SKUIStatusBarAlertViewControllerDelegate> * _delegate;
    UILabel * _label;
    bool  _onScreen;
    long long  _style;
    unsigned long long  _supportedInterfaceOrientations;
}

@property (nonatomic, readonly) unsigned long long defaultInterfaceOrientations;
@property (nonatomic) <_SKUIStatusBarAlertViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSString *message;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic, readonly) UIView *statusBarView;
@property (nonatomic) long long style;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (unsigned long long)defaultInterfaceOrientations;
- (id)delegate;
- (void)endAllAnimations;
- (void)handleLabelTap:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isOnScreen;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (id)statusBarView;
- (long long)style;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateLabelFrame;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
