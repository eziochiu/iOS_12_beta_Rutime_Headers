/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

@interface IMAssistantAudioPlayer : NSObject <AVAudioPlayerDelegate> {
    <IMAssistantAudioPlayerDelegate> * _delegate;
    NSString * _identifier;
    AVAudioPlayer * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)cleanupAudioSession;
- (id)identifier;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;
- (long long)playerState;
- (bool)setupAudioSession;
- (bool)startPlayingAudioURL:(id)arg1;
- (void)stopPlaying;

@end
