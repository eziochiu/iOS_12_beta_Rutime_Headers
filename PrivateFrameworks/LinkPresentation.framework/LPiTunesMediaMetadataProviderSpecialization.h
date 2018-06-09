/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    NSMutableSet * _assetsStillResolving;
    bool  _canceled;
    NSString * _identifier;
    LPiTunesMediaLookupTask * _lookupTask;
    NSMutableArray * _pendingResolvers;
    LPSpecializationMetadata * _resolvedMetadata;
    NSURLSession * _session;
    NSString * _storefrontCountryCode;
    <LPiTunesMediaUnresolvedMetadata> * _unresolvedMetadata;
}

+ (id)assetArrayFromScreenshotArray:(id)arg1;
+ (id)assetArrayFromScreenshotDictionary:(id)arg1 usingPreferredPlatformArray:(id)arg2;
+ (id)assetArrayScreenshotArray:(id)arg1;
+ (long long)determineOrientationOfScreenshotsInArray:(id)arg1;
+ (id)extractOffers:(id)arg1;
+ (id)specializedMetadataProviderForMetadata:(id)arg1 URL:(id)arg2;
+ (id)specializedMetadataProviderForURL:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (void)completed;
- (void)done;
- (void)fail;
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 forURL:(id)arg3;
- (id)processResponseDictionary:(id)arg1 withStorefrontIdentifier:(id)arg2;
- (void)resolve;
- (id)schema;
- (void)start;

@end