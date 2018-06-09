/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlaybackCoordinatorFactory : NSObject <SVPlaybackCoordinatorFactory> {
    <SVPlayerItemLoaderProviding> * _playerItemLoaderProvider;
    <SVPlayerProviding> * _playerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemLoaderProviding> *playerItemLoaderProvider;
@property (nonatomic, readonly) <SVPlayerProviding> *playerProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPlaybackCoordinatorForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1 playerItemLoaderProvider:(id)arg2;
- (id)playerItemLoaderProvider;
- (id)playerProvider;

@end
