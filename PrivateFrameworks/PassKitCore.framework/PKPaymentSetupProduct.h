/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupProduct : NSObject <NSCopying> {
    NSURL * _appLaunchURL;
    NSArray * _associatedStoreIdentifiers;
    NSString * _cardTypeDescription;
    NSString * _displayName;
    unsigned long long  _flags;
    long long  _hsa2Requirement;
    NSString * _identifier;
    PKPaymentSetupProductImageAssetURLs * _imageAssetURLs;
    PKPaymentSetupProductImageAssets * _imageAssets;
    NSDictionary * _minimumOSVersion;
    NSString * _partnerIdentifier;
    NSArray * _paymentOptions;
    NSString * _productIdentifier;
    NSDictionary * _rawDictionary;
    NSDictionary * _readerModeMetadata;
    NSSet * _regions;
    NSMutableDictionary * _requestedProvisioningMethods;
    NSArray * _requiredFields;
    NSArray * _searchTerms;
    NSArray * _supportedCameraCaptureTypes;
    NSArray * _supportedInAppTypes;
    NSArray * _supportedProtocols;
    long long  _supportedProvisioningMethods;
    NSURL * _termsURL;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (nonatomic, copy) NSArray *associatedStoreIdentifiers;
@property (nonatomic, readonly, copy) NSString *cardTypeDescription;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) long long hsa2Requirement;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssets *imageAssets;
@property (nonatomic, retain) NSDictionary *minimumOSVersion;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, readonly, copy) NSString *partnerName;
@property (nonatomic, readonly, copy) NSArray *paymentOptions;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSDictionary *rawDictionary;
@property (nonatomic, readonly, copy) NSDictionary *readerModeMetadata;
@property (nonatomic, copy) NSSet *regions;
@property (nonatomic, retain) NSMutableDictionary *requestedProvisioningMethods;
@property (nonatomic, copy) NSArray *requiredFields;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly, copy) NSArray *supportedCameraCaptureTypes;
@property (nonatomic, readonly, copy) NSArray *supportedInAppTypes;
@property (nonatomic, copy) NSArray *supportedProtocols;
@property (nonatomic) long long supportedProvisioningMethods;
@property (nonatomic, copy) NSURL *termsURL;
@property (nonatomic, copy) UIImage *thumbnailMask;
@property (nonatomic) unsigned long long type;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2;
+ (id)_subtitleTextForTypes:(id)arg1;
+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (id)productsFromBrowseableBankApps:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12;
- (long long)allSupportedProtocols;
- (id)appLaunchURL;
- (id)associatedStoreIdentifiers;
- (id)cardTypeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (unsigned long long)flags;
- (long long)hsa2Requirement;
- (id)identifier;
- (id)imageAssetURLs;
- (id)imageAssets;
- (id)initWithProductDictionary:(id)arg1;
- (id)minimumOSVersion;
- (id)partnerIdentifier;
- (id)partnerName;
- (id)paymentOptions;
- (id)productIdentifier;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (id)provisioningMethodTypes;
- (id)rawDictionary;
- (id)readerModeMetadata;
- (id)regions;
- (id)requestedProvisioningMethods;
- (id)requiredFields;
- (id)searchTerms;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAssociatedStoreIdentifiers:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (void)setRawDictionary:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRequestedProvisioningMethods:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (void)setSupportedProvisioningMethods:(long long)arg1;
- (void)setTermsURL:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)supportedCameraCaptureTypes;
- (id)supportedInAppTypes;
- (id)supportedProtocols;
- (long long)supportedProvisioningMethods;
- (bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)termsURL;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)_sharedDownloader;

- (void)_commonCachedImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_generateThumbnailMask;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)_processDigitalCardImage:(id)arg1;
- (id)_processThumbnailImage:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)digitalCardCachedImage:(id /* block */)arg1;
- (id)logoCachedImage:(id /* block */)arg1;
- (id)plasticCardCachedImage:(id /* block */)arg1;
- (void)resetCache;
- (void)setThumbnailMask:(id)arg1;
- (id)thumbnailCachedImageForSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)thumbnailMask;

@end
