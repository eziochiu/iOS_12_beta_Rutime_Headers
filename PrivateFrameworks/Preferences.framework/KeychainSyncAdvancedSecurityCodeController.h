/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate> {
    UIFont * _cellFont;
    double  _cellTextWidth;
    bool  _showsDisableRecoveryOption;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsDisableRecoveryOption;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishedWithSpecifier:(id)arg1;
- (void)nextPressed;
- (void)setShowsDisableRecoveryOption:(bool)arg1;
- (bool)showsDisableRecoveryOption;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)viewDidLoad;

@end
