/* made by EzioChiu.
 */

@protocol CFXRemoteCommandServerDelegate

@required

- (void)remoteCommandServer:(CFXRemoteCommandServer *)arg1 didReceiveAddShapeCommandWithIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(CFXRemoteCommandServer *)arg1 didReceiveAddStickerCommandWithURL:(NSURL *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(double)arg4 rotation:(double)arg5 onFace:(bool)arg6;
- (void)remoteCommandServer:(CFXRemoteCommandServer *)arg1 didReceiveAddTextCommandWithIdentifier:(NSString *)arg2 string:(NSString *)arg3;
- (void)remoteCommandServer:(CFXRemoteCommandServer *)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(NSArray *)arg2;
- (void)remoteCommandServer:(CFXRemoteCommandServer *)arg1 didReceiveSetAnimojiCommandWithIdentifier:(NSString *)arg2;
- (void)remoteCommandServer:(CFXRemoteCommandServer *)arg1 didReceiveSetFilterCommandWithIdentifier:(NSString *)arg2;

@end
