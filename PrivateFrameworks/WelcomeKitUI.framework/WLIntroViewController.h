/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLIntroViewController : WLWelcomeGroupViewController {
    id /* block */  _continueHandler;
    UIButton * _continueView;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, copy) id /* block */ continueHandler;

- (void).cxx_destruct;
- (void)_continueTapped:(id)arg1;
- (void)connectivityEnablingDidEnd;
- (void)connectivityEnablingWillStart;
- (id /* block */)continueHandler;
- (void)loadView;
- (void)setContinueHandler:(id /* block */)arg1;

@end
