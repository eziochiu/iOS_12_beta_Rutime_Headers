/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoMetadataProvider : NSObject <SVVideoMetadataProviding> {
    <SVVideoPlaybackProgressObserving> * _playbackProgressObserver;
    <SXVideoVolumeObserving> * _volumeObserver;
    double  framerate;
    double  timePlayed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double framerate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool muted;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserving> *playbackProgressObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double time;
@property (nonatomic, readonly) double timePlayed;
@property (nonatomic, readonly) double volume;
@property (nonatomic, readonly) <SXVideoVolumeObserving> *volumeObserver;

- (void).cxx_destruct;
- (double)duration;
- (double)framerate;
- (id)initWithPlaybackProgressObserver:(id)arg1 volumeObserver:(id)arg2;
- (bool)muted;
- (id)playbackProgressObserver;
- (double)time;
- (double)timePlayed;
- (double)volume;
- (id)volumeObserver;

@end
