/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroWelcomeViewController : STIntroSplashViewController {
    bool  _allowParentalControls;
    bool  _customizationRequested;
    bool  _forceParentalControls;
}

@property bool allowParentalControls;
@property bool customizationRequested;
@property bool forceParentalControls;

- (bool)allowParentalControls;
- (bool)customizationRequested;
- (bool)forceParentalControls;
- (id)initWithIntroductionModel:(id)arg1 allowParentalControls:(bool)arg2 forceParentalControls:(bool)arg3;
- (void)setAllowParentalControls:(bool)arg1;
- (void)setCustomizationRequested:(bool)arg1;
- (void)setForceParentalControls:(bool)arg1;
- (void)viewDidLoad;

@end
