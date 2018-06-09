/* made by EzioChiu.
 */

@protocol HMDCameraStreamControlManagerDelegate <NSObject>

@required

- (void)streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg1 didFail:(NSError *)arg2;
- (void)streamControlManagerDidNegotiateStream:(id <HMDCameraStreamControlManagerProtocol>)arg1 selectedParameters:(NSDictionary *)arg2;
- (void)streamControlManagerDidReceiveFirstFrame:(id <HMDCameraStreamControlManagerProtocol>)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(NSNumber *)arg3 slotIdentifier:(NSNumber *)arg4;
- (void)streamControlManagerDidReconfigureStream:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidSetupRemoteConnection:(id <HMDCameraStreamControlManagerProtocol>)arg1;
- (void)streamControlManagerDidStartStream:(id <HMDCameraStreamControlManagerProtocol>)arg1 slotIdentifier:(NSNumber *)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(HMDCameraSessionID *)arg1 error:(NSError *)arg2;

@end
