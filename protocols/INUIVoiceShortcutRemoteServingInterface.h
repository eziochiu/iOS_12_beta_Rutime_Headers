/* made by EzioChiu.
 */

@protocol INUIVoiceShortcutRemoteServingInterface <NSObject>

@required

- (void)buildForAddingShortcut:(INShortcut *)arg1;
- (void)buildForEditingVoiceShortcut:(INVoiceShortcut *)arg1;

@end
