/* made by EzioChiu.
 */

@protocol VCUIManageVoiceShortcutViewControllerDelegate <NSObject>

@required

- (void)manageVoiceShortcutViewControllerDidCancel:(VCUIManageVoiceShortcutViewController *)arg1;

@optional

- (void)manageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 didCreateVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)manageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 didDeleteVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)manageVoiceShortcutViewController:(VCUIManageVoiceShortcutViewController *)arg1 didSaveVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUIManageVoiceShortcutViewController *)arg1;

@end
