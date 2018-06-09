/* made by EzioChiu.
 */

@protocol INUIVoiceShortcutRemoteViewControllerEditDelegate <NSObject>

@required

- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(NSUUID *)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(VCVoiceShortcut *)arg1 error:(NSError *)arg2;
- (void)remoteViewControllerEditDidCacnel;

@end
