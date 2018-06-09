/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyModalNavigationController : UINavigationController {
    bool  _darkMode;
    id /* block */  _dismissButtonPressedHandler;
    unsigned long long  _supportedInterfaceOrientations;
}

@property (getter=isDarkMode, nonatomic) bool darkMode;
@property (copy) id /* block */ dismissButtonPressedHandler;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(id /* block */)arg1;
- (id /* block */)dismissButtonPressedHandler;
- (bool)isDarkMode;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissButtonPressedHandler:(id /* block */)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
