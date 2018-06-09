/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLMigrationCompletedViewController : WLWelcomeGroupViewController {
    UIButton * _continueButton;
    id /* block */  _continueHandler;
    UIButton * _continueView;
}

@property (nonatomic, copy) id /* block */ continueHandler;

- (void).cxx_destruct;
- (void)_continueTapped:(id)arg1;
- (id /* block */)continueHandler;
- (void)loadView;
- (void)setContinueHandler:(id /* block */)arg1;

@end
