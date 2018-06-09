/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _disableScreenTimeSpecifier;
    PSSpecifier * _removeAllowancesSpecifier;
    PSSpecifier * _removePasscodeSpecifier;
    PSSpecifier * _togglePasscodeSpecifier;
}

@property (nonatomic, retain) PSSpecifier *disableScreenTimeSpecifier;
@property (nonatomic, retain) PSSpecifier *removeAllowancesSpecifier;
@property (nonatomic, retain) PSSpecifier *removePasscodeSpecifier;
@property (nonatomic, retain) PSSpecifier *togglePasscodeSpecifier;

- (void).cxx_destruct;
- (void)confirmDisableScreenTime:(id)arg1;
- (void)confirmRemoveAllowances:(id)arg1;
- (void)confirmRemovePasscode:(id)arg1;
- (void)disableScreenTime:(id)arg1;
- (id)disableScreenTimeSpecifier;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2;
- (void)reloadTogglePasscodeSpecifier;
- (id)removeAllowancesSpecifier;
- (void)removePasscode:(id)arg1;
- (id)removePasscodeSpecifier;
- (void)setCoordinator:(id)arg1;
- (void)setDisableScreenTimeSpecifier:(id)arg1;
- (void)setRemoveAllowancesSpecifier:(id)arg1;
- (void)setRemovePasscodeSpecifier:(id)arg1;
- (void)setTogglePasscodeSpecifier:(id)arg1;
- (id)togglePasscodeSpecifier;
- (void)updateSpecifiers;

@end
