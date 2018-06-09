/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerFactory : NSObject <SVPlayerFactory> {
    int  _audioMode;
    <SVVolumeProviding> * _volumeProvider;
}

@property (nonatomic, readonly) int audioMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVolumeProviding> *volumeProvider;

- (void).cxx_destruct;
- (int)audioMode;
- (id)createPlayer;
- (id)initWithAudioMode:(int)arg1 volumeProvider:(id)arg2;
- (id)volumeProvider;

@end
