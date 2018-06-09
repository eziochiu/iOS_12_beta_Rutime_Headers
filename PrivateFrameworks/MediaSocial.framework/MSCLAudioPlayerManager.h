/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPlayerManager : NSObject <MSCLAudioPlayerDelegate> {
    <MSCLAudioPlayerManagerDataSource> * _dataSource;
    MSCLAudioPlayer * _player;
}

@property (nonatomic) <MSCLAudioPlayerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_playButtonForPlayer:(id)arg1;
- (void)_showPlaybackStatus:(id)arg1 usingPlayButton:(id)arg2 animated:(bool)arg3;
- (void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (void)personalizePlayButton:(id)arg1 withRepresentedObject:(id)arg2 animated:(bool)arg3;
- (void)playAsset:(id)arg1 withRepresentedObject:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)stopPlayback;

@end
