/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleAdManager : NSObject <NUAdContextProvider, SXAdControllerDelegate, SXAdControllerFactory, SXAdProvider> {
    <NUAdMetadataFactory> * _adMetadataFactory;
    <NUAdProvider> * _adProvider;
    FCArticle * _article;
    <NUDevice> * _device;
    <NUAdSettings> * _settings;
}

@property (nonatomic, readonly) <NUAdMetadataFactory> *adMetadataFactory;
@property (nonatomic, readonly) <NUAdProvider> *adProvider;
@property (nonatomic, readonly) FCArticle *article;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUAdSettings> *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didLoadBannerView:(id)arg3;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didUnloadBannerView:(id)arg3 withError:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 failedToLoadBannerView:(id)arg3 error:(id)arg4;
- (id)adControllerForDocument:(id)arg1 viewport:(id)arg2;
- (id /* block */)adForRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)adMetadataFactory;
- (id)adProvider;
- (id)article;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)device;
- (id)initWithArticle:(id)arg1 adProvider:(id)arg2 adMetadataFactory:(id)arg3 settings:(id)arg4 device:(id)arg5;
- (id)settings;

@end
