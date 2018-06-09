/* made by EzioChiu.
 */

@protocol INUIVoiceShortcutRemoteViewControllerAddDelegate <NSObject>

@required

- (void)remoteViewControllerAddDidCacnel;
- (void)remoteViewControllerDidAddVoiceShortcut:(VCVoiceShortcut *)arg1 error:(NSError *)arg2;

@end
