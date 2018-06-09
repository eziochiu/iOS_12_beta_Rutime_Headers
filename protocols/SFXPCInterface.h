/* made by EzioChiu.
 */

@protocol SFXPCInterface

@optional

- (void)autoFillPairingSucceeded:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)autoFillPromptForPIN:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)deviceDiscoveryDeviceChanged:(SFDevice *)arg1 changes:(unsigned int)arg2;
- (void)deviceDiscoveryFoundDevice:(SFDevice *)arg1;
- (void)deviceDiscoveryLostDevice:(SFDevice *)arg1;
- (void)deviceDiscoveryScanStateChanged:(long long)arg1;
- (void)remoteInteractionSessionRemoteTextEvent:(NSData *)arg1;
- (void)remoteInteractionSessionTextSessionDidBegin:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionTextSessionDidChange:(SFRemoteTextSessionInfo *)arg1;
- (void)remoteInteractionSessionTextSessionDidEnd:(SFRemoteTextSessionInfo *)arg1;
- (void)serviceError:(NSError *)arg1;
- (void)servicePeerDisconnected:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)serviceReceivedEvent:(SFEventMessage *)arg1;
- (void)serviceReceivedFrameType:(unsigned char)arg1 data:(NSData *)arg2 peer:(NSUUID *)arg3;
- (void)serviceReceivedRequest:(SFRequestMessage *)arg1;
- (void)serviceReceivedResponse:(SFResponseMessage *)arg1;
- (void)sessionBluetoothStateChanged:(long long)arg1;
- (void)sessionError:(NSError *)arg1;
- (void)sessionReceivedEvent:(SFEventMessage *)arg1;
- (void)sessionReceivedFrameType:(unsigned char)arg1 data:(NSData *)arg2;
- (void)sessionReceivedRequest:(SFRequestMessage *)arg1;
- (void)sessionReceivedResponse:(SFResponseMessage *)arg1;
- (void)userNotificationError:(NSError *)arg1;
- (void)userNotificationResponse:(int)arg1;
- (void)userNotificationTextResponse:(NSString *)arg1;

@end
