/* made by EzioChiu.
 */

@protocol VCUICreateVoiceShortcutViewControllerDelegate <NSObject>

@required

- (void)createVoiceShortcutViewController:(VCUICreateVoiceShortcutViewController *)arg1 didCreateVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(VCUICreateVoiceShortcutViewController *)arg1;

@optional

- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUICreateVoiceShortcutViewController *)arg1;

@end
