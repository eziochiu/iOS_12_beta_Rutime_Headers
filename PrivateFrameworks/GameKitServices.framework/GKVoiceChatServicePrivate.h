/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate> {
    int  chatMode;
    <GKVoiceChatClient> * client;
    NSLock * clientLock;
    VideoConference * conf;
    unsigned int  curCallID;
    struct tagCONNRESULT { 
        unsigned int dwCallID; 
        int iResultCount; 
        int iRole; 
        unsigned int dwRemoteCallID; 
        int proto; 
        int bIfRelay; 
        unsigned short wRelayServType; 
        unsigned short wChannelNumber; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbLocal; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemote; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbDst; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRemoteSrc; 
        struct tagIPPORT { 
            int iFlags; 
            BOOL szIfName[16]; 
            union { 
                unsigned int dwIPv4; 
                unsigned char abIPv6[16]; 
            } IP; 
            unsigned short wPort; 
        } mbRelayExt; 
        unsigned int dwRTT; 
        int bIfLocalCellularQoS; 
        int bIfRemoteCellularQoS; 
        int iLocalCellTech; 
        int iRemoteCellTech; 
        unsigned short wCellularMTU; 
        int bIfUpgrade; 
        int bIfPrimary; 
        int bIfReplaceOnly; 
        struct tagCONNRESULT {} *next; 
    }  currentConnResult;
    bool  focus;
    bool  forceNoICE;
    GKVoiceChatDictionary * incomingCallDict;
    bool  inputMeteringEnabled;
    bool  microphoneMuted;
    GKVoiceChatDictionary * outgoingCallDict;
    bool  outputMeteringEnabled;
    int  state;
    NSRecursiveLock * stateLock;
    GKVoiceChatService * wrapperService;
}

@property int chatMode;
@property (nonatomic) id client;
@property (getter=isFocus) bool focus;
@property (nonatomic, readonly) float inputMeterLevel;
@property (getter=isInputMeteringEnabled) bool inputMeteringEnabled;
@property (readonly) double localBitrate;
@property (readonly) double localFramerate;
@property (nonatomic) void*localVideoLayer;
@property (getter=isMicrophoneMuted) bool microphoneMuted;
@property (nonatomic, readonly) float outputMeterLevel;
@property (getter=isOutputMeteringEnabled) bool outputMeteringEnabled;
@property (readonly) double remoteBitrate;
@property (readonly) double remoteFramerate;
@property float remoteParticipantVolume;
@property (nonatomic) void*remoteVideoLayer;
@property int state;
@property GKVoiceChatService *wrapperService;

+ (id)defaultVoiceChatService;

- (bool)acceptCallID:(unsigned int)arg1 error:(id*)arg2;
- (int)chatMode;
- (void)cleanup;
- (id)client;
- (id)createInvite:(id*)arg1 toParticipant:(id)arg2 callID:(unsigned int*)arg3;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id*)arg3;
- (void)dealloc;
- (void)denyCallID:(unsigned int)arg1;
- (void)forceNoICE:(bool)arg1;
- (bool)getNSError:(id*)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;
- (bool)getNSError:(id*)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (id)init;
- (float)inputMeterLevel;
- (bool)inviteIsValid:(id)arg1;
- (bool)isFocus;
- (bool)isInputMeteringEnabled;
- (bool)isMicrophoneMuted;
- (bool)isOutputMeteringEnabled;
- (double)localBitrate;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
- (double)localFramerate;
- (void*)localVideoLayer;
- (float)outputMeterLevel;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (double)remoteBitrate;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (double)remoteFramerate;
- (float)remoteParticipantVolume;
- (void*)remoteVideoLayer;
- (void)resetState;
- (void)setChatMode:(int)arg1;
- (void)setClient:(id)arg1;
- (void)setFocus:(bool)arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (void)setRemoteVideoLayer:(void*)arg1;
- (void)setState:(int)arg1;
- (void)setWrapperService:(id)arg1;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(bool)arg2;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(bool)arg2 withCallID:(unsigned int)arg3;
- (bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (int)state;
- (void)stopVoiceChatProc:(id)arg1;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (id)wrapperService;

@end
