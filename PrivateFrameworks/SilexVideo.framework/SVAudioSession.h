/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVAudioSession : NSObject {
    bool  _audioSessionActive;
    NSString * _desiredAudioSessionCategory;
    SVPlayer * _foregroundPlayer;
    NSHashTable * _players;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (getter=isAudioSessionActive, nonatomic) bool audioSessionActive;
@property (nonatomic, retain) NSString *desiredAudioSessionCategory;
@property (nonatomic) SVPlayer *foregroundPlayer;
@property (nonatomic, readonly) NSHashTable *players;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)sharedSession;

- (void).cxx_destruct;
- (void)activateAudioSessionCategory;
- (void)activateForegroundAudioPlaybackForPlayer:(id)arg1;
- (void)addInterestForPlayer:(id)arg1;
- (bool)canDeactivateAudioSession;
- (void)deactivateAudioSessionCategory;
- (void)deactivateForegroundAudioPlaybackForPlayer:(id)arg1;
- (id)desiredAudioSessionCategory;
- (id)foregroundPlayer;
- (id)init;
- (bool)isAudioSessionActive;
- (bool)needsToSetupAudioSessionCategory;
- (id)players;
- (void)removeInterestForPlayer:(id)arg1;
- (id)semaphore;
- (void)setAudioSessionActive:(bool)arg1;
- (void)setDesiredAudioSessionCategory:(id)arg1;
- (void)setForegroundPlayer:(id)arg1;
- (void)setupAudioSessionCategory;
- (bool)shouldActivateAudioSession;

@end
