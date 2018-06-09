/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoMetadataProviderFactory : NSObject <SVVideoMetadataProviderFactory> {
    <SVVideoPlaybackProgressObserverFactory> * _playbackProgressObserverFactory;
    <SVVideoVolumeObserverFactory> * _volumeObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserverFactory> *playbackProgressObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoVolumeObserverFactory> *volumeObserverFactory;

- (void).cxx_destruct;
- (id)createMetadataProviderForVideo:(id)arg1;
- (id)initWithPlaybackProgressObserverFactory:(id)arg1 volumeObserverFactory:(id)arg2;
- (id)playbackProgressObserverFactory;
- (id)volumeObserverFactory;

@end
