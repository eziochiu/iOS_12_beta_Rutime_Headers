/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVURLAssetLoaderFactory : NSObject <SVURLAssetLoaderFactory> {
    <SVURLAssetFactory> * _URLAssetFactory;
    <SVVideoURLProviderFactory> * _URLProviderFactory;
}

@property (nonatomic, readonly) <SVURLAssetFactory> *URLAssetFactory;
@property (nonatomic, readonly) <SVVideoURLProviderFactory> *URLProviderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAssetFactory;
- (id)URLProviderFactory;
- (id)createURLAssetLoaderForVideo:(id)arg1;
- (id)initWithURLAssetFactory:(id)arg1 URLProviderFactory:(id)arg2;

@end
