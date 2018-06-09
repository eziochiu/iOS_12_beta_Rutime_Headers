/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerItemLoaderManager : NSObject <SVPlayerItemLoaderProviding> {
    <SVPlayerItemLoaderFactory> * _playerItemLoaderFactory;
    SVWeakObjectCache * _playerItemLoaders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemLoaderFactory> *playerItemLoaderFactory;
@property (nonatomic, readonly) SVWeakObjectCache *playerItemLoaders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayerItemLoaderFactory:(id)arg1;
- (id)playerItemLoaderFactory;
- (id)playerItemLoaderForVideo:(id)arg1;
- (id)playerItemLoaders;

@end
