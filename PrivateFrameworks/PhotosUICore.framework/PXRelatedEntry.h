/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedEntry : NSObject <PXRelatedEntry> {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _keyAssetFetchResult;
    PHObject * _referenceObject;
    NSString * _relatedLocalizedTitle;
    NSString * _relatedTitleFontName;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) PHObject *referenceObject;
@property (nonatomic, readonly) PHAssetCollection *relatedAssetCollection;
@property (nonatomic, readonly) PHFetchResult *relatedKeyAssetFetchResult;
@property (nonatomic, readonly) NSString *relatedLocalizedSubtitle;
@property (nonatomic, retain) NSString *relatedLocalizedTitle;
@property (nonatomic, readonly) PHObject *relatedReferenceObject;
@property (nonatomic, readonly) NSString *relatedTitleFontName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2 referenceObject:(id)arg3;
- (bool)isPlaceholder;
- (id)keyAssetFetchResult;
- (id)referenceObject;
- (id)relatedAssetCollection;
- (id)relatedKeyAssetFetchResult;
- (id)relatedLocalizedSubtitle;
- (id)relatedLocalizedTitle;
- (id)relatedReferenceObject;
- (id)relatedTitleFontName;
- (void)setRelatedLocalizedTitle:(id)arg1;

@end
