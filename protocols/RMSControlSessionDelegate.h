/* made by EzioChiu.
 */

@protocol RMSControlSessionDelegate <NSObject>

@required

- (void)controlSession:(id <RMSControlSession>)arg1 artworkDataDidBecomeAvailable:(NSData *)arg2 identifier:(NSString *)arg3;
- (void)controlSession:(void *)arg1 didReceivePairingChallengeRequestWithCredentials:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <RMSControlSession> *, RMSPairingCredentials *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)controlSession:(id <RMSControlSession>)arg1 didUpdateAudioRoutes:(NSArray *)arg2;
- (void)controlSession:(id <RMSControlSession>)arg1 didUpdateNowPlayingInfo:(RMSNowPlayingInfo *)arg2;
- (void)controlSession:(id <RMSControlSession>)arg1 didUpdateVolume:(float)arg2;
- (void)controlSessionDidBeginEditingText:(id <RMSControlSession>)arg1;
- (void)controlSessionDidEnd:(id <RMSControlSession>)arg1;
- (void)controlSessionDidEndEditingText:(id <RMSControlSession>)arg1;

@end
