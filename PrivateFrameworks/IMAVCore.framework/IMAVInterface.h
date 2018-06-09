/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVInterface : NSObject {
    id  _delegate;
}

@property (nonatomic, readonly) id _controller;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) unsigned long long capabilitiesOfCPU;
@property (nonatomic, readonly) unsigned long long capabilitiesOfNetwork;
@property (nonatomic, readonly) id controller;
@property id delegate;
@property (nonatomic, readonly) bool isAVInterfaceReady;
@property (nonatomic) void*localVideoBackLayer;
@property (nonatomic) void*localVideoLayer;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic, readonly) unsigned int overallChatState;
@property (nonatomic) bool shouldKeepCameraRunning;
@property (nonatomic, readonly) bool supportsLayers;
@property (nonatomic, readonly) bool supportsRelay;
@property (nonatomic, readonly) bool systemCanAudioChat;
@property (nonatomic, readonly) bool systemCanVideoChat;
@property (nonatomic, readonly) bool systemSupportsBackFacingCamera;
@property (nonatomic, readonly) bool systemSupportsFrontFacingCamera;

+ (id)alloc;
+ (id)sharedInstance;

- (void)_avChatDealloc:(id)arg1;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(bool)arg2;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (id)_controller;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (long long)_runPingTestForChat:(id)arg1;
- (bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIP:(id)arg2 callerSIPPort:(unsigned int)arg3 shouldFindExternalIP:(bool)arg4;
- (id)avChat:(id)arg1 IPAndPortDataWithCallerIPAndPortData:(id)arg2 shouldFindExternalIP:(bool)arg3;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(bool)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg2 localPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg3;
- (void)avChat:(id)arg1 setMute:(bool)arg2;
- (void)avChat:(id)arg1 setPaused:(bool)arg2;
- (void)avChat:(id)arg1 setRemoteMute:(bool)arg2;
- (void)avChat:(id)arg1 setSendingAudio:(bool)arg2;
- (void)avChat:(id)arg1 setSendingVideo:(bool)arg2;
- (void)avChat:(id)arg1 setValidatedIdentity:(struct __SecIdentity { }*)arg2;
- (void)cancelConferenceForAVChat:(id)arg1;
- (unsigned long long)capabilities;
- (unsigned long long)capabilitiesOfCPU;
- (unsigned long long)capabilitiesOfNetwork;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)chatStateUpdated;
- (void)cleanupAVInterface;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (int)endConferenceForAVChat:(id)arg1;
- (id)getNatIPFromICEData:(id)arg1;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)initAVInterface;
- (bool)isAVInterfaceReady;
- (bool)isMuteForAVChat:(id)arg1;
- (bool)isPausedForAVChat:(id)arg1;
- (bool)isRemoteMuteForAVChat:(id)arg1;
- (bool)isSendingAudioForAVChat:(id)arg1;
- (bool)isSendingVideoForAVChat:(id)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (unsigned int)maxBitrate;
- (id)natTypeForAVChat:(id)arg1;
- (unsigned int)overallChatState;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (void)setShouldKeepCameraRunning:(bool)arg1;
- (bool)shouldKeepCameraRunning;
- (bool)startPreviewWithError:(id*)arg1;
- (bool)stopPreview;
- (bool)supportsLayers;
- (bool)supportsRelay;
- (bool)systemCanAudioChat;
- (bool)systemCanVideoChat;
- (bool)systemSupportsBackFacingCamera;
- (bool)systemSupportsFrontFacingCamera;
- (void)unsetDelegate:(id)arg1;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(bool)arg3;

@end
