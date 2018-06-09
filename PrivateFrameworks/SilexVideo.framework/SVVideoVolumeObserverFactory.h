/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoVolumeObserverFactory : NSObject <SVVideoVolumeObserverFactory> {
    AVAudioSession * _audioSession;
    <SVPlayerProviding> * _playerProvider;
}

@property (nonatomic, readonly) AVAudioSession *audioSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerProviding> *playerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)audioSession;
- (id)createVolumeObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 audioSession:(id)arg2;
- (id)playerProvider;

@end
