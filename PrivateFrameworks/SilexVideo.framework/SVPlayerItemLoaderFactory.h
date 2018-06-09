/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerItemLoaderFactory : NSObject <SVPlayerItemLoaderFactory> {
    <SVURLAssetLoaderFactory> * _URLAssetLoaderFactory;
    <SVVideoMetadataProviderFactory> * _metadataProviderFactory;
    <SVPlayerItemFactory> * _playerItemFactory;
}

@property (nonatomic, readonly) <SVURLAssetLoaderFactory> *URLAssetLoaderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoMetadataProviderFactory> *metadataProviderFactory;
@property (nonatomic, readonly) <SVPlayerItemFactory> *playerItemFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAssetLoaderFactory;
- (id)createPlayerItemLoaderForVideo:(id)arg1;
- (id)initWithPlayerItemFactory:(id)arg1 URLAssetLoaderFactory:(id)arg2 metadataProviderFactory:(id)arg3;
- (id)metadataProviderFactory;
- (id)playerItemFactory;

@end
