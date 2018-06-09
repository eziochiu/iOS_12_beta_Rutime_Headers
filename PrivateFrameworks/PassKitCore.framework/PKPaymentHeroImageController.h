/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentHeroImageController : NSObject {
    NSMutableArray * _currentNetworksDownloading;
    <PKPaymentHeroImageControllerDelegate> * _delegate;
    NSArray * _featuredNetworks;
    PKPaymentHeroImageManifest * _manifest;
    long long  _watchSize;
}

@property (nonatomic) <PKPaymentHeroImageControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *featuredNetworks;
@property (nonatomic) long long watchSize;

+ (void)_addNetworkImageDownloadError:(id)arg1 downloadedSha1:(id)arg2;
+ (bool)_networkImageHasDownloadedWithError:(id)arg1;
+ (id)defaultPaymentCredentials;

- (void).cxx_destruct;
- (void)_alertDelgateOfDownloadedImageData:(id)arg1 network:(id)arg2 error:(id)arg3;
- (id)_builtInNetworksCardImageData;
- (id)_debugString;
- (void)beginDownloadingRemoteImages;
- (void)beginDownloadingRemoteImagesWithCompletion:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })cardArtSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)containsPaymentCredentialType:(long long)arg1;
- (id)delegate;
- (void)downloadRemoteImageForNetwork:(id)arg1 completion:(id /* block */)arg2;
- (id)featuredNetworks;
- (id)featuredNetworksImageData;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2;
- (id)initWithManifest:(id)arg1 featuredNetworks:(id)arg2 webService:(id)arg3;
- (id)primaryFeaturedNetwork;
- (void)setDelegate:(id)arg1;
- (void)setFeaturedNetworks:(id)arg1;
- (void)setWatchSize:(long long)arg1;
- (long long)watchSize;

@end
