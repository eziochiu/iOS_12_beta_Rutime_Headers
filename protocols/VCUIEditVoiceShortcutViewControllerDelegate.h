/* made by EzioChiu.
 */

@protocol VCUIEditVoiceShortcutViewControllerDelegate <NSObject>

@optional

- (void)editVoiceShortcutViewController:(VCUIEditVoiceShortcutViewController *)arg1 didDeleteVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)editVoiceShortcutViewController:(VCUIEditVoiceShortcutViewController *)arg1 didSaveWithUpdatedVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)editVoiceShortcutViewControllerDidCancel:(VCUIEditVoiceShortcutViewController *)arg1;
- (void)editVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUIEditVoiceShortcutViewController *)arg1;

@end
