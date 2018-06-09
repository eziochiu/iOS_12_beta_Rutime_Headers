/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying> {
    long long  __resolvedVersion;
    bool  _assetLoadingAsRaw;
    <PUPhotoEditResourceLoaderDelegate> * _delegate;
    bool  _requireAdjustments;
    bool  _requireLocalResources;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    long long  _version;
}

@property (setter=_setResolvedVersion:, nonatomic) long long _resolvedVersion;
@property (nonatomic) bool assetLoadingAsRaw;
@property (nonatomic) <PUPhotoEditResourceLoaderDelegate> *delegate;
@property (nonatomic) bool requireAdjustments;
@property (nonatomic) bool requireLocalResources;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)_adjustmentsRequestOptions;
- (void)_assertWorkVersionResolved;
- (id)_imageRequestOptionsWithAsset:(id)arg1;
- (long long)_imageRequestVersionWithAsset:(id)arg1;
- (bool)_isWorkVersionResolved;
- (bool)_needsLoadAdjustments;
- (void)_resolveVersionIfNeededWithAdjustmentsResult:(id)arg1;
- (long long)_resolvedVersion;
- (void)_setResolvedVersion:(long long)arg1;
- (id)_videoRequestOptionsWithAsset:(id)arg1;
- (long long)_videoRequestVersion;
- (bool)assetLoadingAsRaw;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (bool)requireAdjustments;
- (bool)requireLocalResources;
- (void)setAssetLoadingAsRaw:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequireAdjustments:(bool)arg1;
- (void)setRequireLocalResources:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVersion:(long long)arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (long long)version;

@end
