/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKVoiceChatSession : NSObject {
    id  opaqueSession;
}

@property (getter=isActiveSession) bool activeSession;
@property <GKVoiceChatSessionDelegate> *delegate;
@property (readonly) float inputMeter;
@property (readonly) NSArray *peerList;
@property (readonly) NSString *sessionName;
@property float sessionVolume;

- (void)dealloc;
- (id)delegate;
- (bool)getMuteStateForPeer:(id)arg1;
- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;
- (float)inputMeter;
- (bool)isActiveSession;
- (float)outputMeterForPeer:(id)arg1;
- (id)peerList;
- (id)sessionName;
- (float)sessionVolume;
- (void)setActiveSession:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMute:(bool)arg1 forPeer:(id)arg2;
- (void)setSessionVolume:(float)arg1;
- (void)startSession;
- (void)stopSession;

@end
