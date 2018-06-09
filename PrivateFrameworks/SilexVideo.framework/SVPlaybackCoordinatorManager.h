/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackCoordinatorManager : NSObject <SVPlaybackCoordinatorProviding> {
    <SVPlaybackCoordinatorFactory> * _factory;
    SVWeakObjectCache * _playbackCoordinators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVPlaybackCoordinatorFactory> *factory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVWeakObjectCache *playbackCoordinators;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)factory;
- (id)initWithPlaybackCoordinatorFactory:(id)arg1;
- (id)playbackCoordinatorForVideo:(id)arg1;
- (id)playbackCoordinators;

@end
