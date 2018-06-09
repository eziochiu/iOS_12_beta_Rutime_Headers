/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController {
    DevicePINController * _devicePINController;
    UIKeyboard * _disabledKeyboard;
    NSString * _enterPasscodeReason;
    NSString * _enterPasscodeTitle;
    bool  _showingBlockedMessage;
}

@property (nonatomic, retain) UIKeyboard *disabledKeyboard;
@property (nonatomic, retain) NSString *enterPasscodeReason;
@property (nonatomic, retain) NSString *enterPasscodeTitle;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (id)disabledKeyboard;
- (id)enterPasscodeReason;
- (id)enterPasscodeTitle;
- (id)init;
- (void)setDisabledKeyboard:(id)arg1;
- (void)setEnterPasscodeReason:(id)arg1;
- (void)setEnterPasscodeTitle:(id)arg1;
- (id)specifiers;
- (long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2;
- (void)updateBlockedState:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
