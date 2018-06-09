/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraIDSDeviceConnectionSender : HMDCameraIDSDeviceConnection <HMDCameraPowerAssertionProtocol, HMDCameraRemoteStreamSenderProtocol> {
    AVCPacketRelay * _audioPacketRelay;
    <HMDCameraIDSDeviceConnectionSenderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _destinationID;
    HMFOSTransaction * _packetRelayTransaction;
    AVCPacketRelay * _videoPacketRelay;
}

@property (nonatomic, retain) AVCPacketRelay *audioPacketRelay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDCameraIDSDeviceConnectionSenderDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *mtu;
@property (nonatomic, retain) HMFOSTransaction *packetRelayTransaction;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVCPacketRelay *videoPacketRelay;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_socketOpened:(id)arg1;
- (void)_startAudioPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;
- (void)_startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)_startVideoPacketRelay:(int)arg1 ipAddress:(id)arg2 port:(unsigned long long)arg3;
- (id)audioPacketRelay;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)destinationID;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)logIdentifier;
- (id)mtu;
- (void)openRelaySession;
- (id)packetRelayTransaction;
- (void)setAudioPacketRelay:(id)arg1;
- (void)setPacketRelayTransaction:(id)arg1;
- (void)setVideoPacketRelay:(id)arg1;
- (void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (id)videoPacketRelay;

@end
