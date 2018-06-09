/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitSuggestion : NSObject <NSCopying, PXCMMSuggestion, PXMediaTypeAggregating> {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _peopleSuggestionsFetchResult;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    PHFetchResult * _previewAssetsFetchResult;
}

@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) <PXPeopleFetchResult> *peopleFetchResult;
@property (nonatomic, readonly) PHFetchResult *peopleSuggestionsFetchResult;
@property (nonatomic, readonly) <PXDisplayAsset> *posterAsset;
@property (nonatomic, readonly) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic, readonly) PHFetchResult *previewAssetsFetchResult;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)_fetchPeopleSuggestionsForAssetCollection:(id)arg1;
+ (id)_fetchPreviewAssetsForAssetCollection:(id)arg1;
+ (id)fastSuggestionWithAssetCollection:(id)arg1;
+ (id)suggestionWithAssetCollection:(id)arg1;

- (void).cxx_destruct;
- (long long)aggregateMediaType;
- (id)assetCollection;
- (id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)decline;
- (id)description;
- (id)diagnosticsItem;
- (id)endDate;
- (id)identifier;
- (id)localizedTitle;
- (void)markAsActiveIfNeeded;
- (id)peopleFetchResult;
- (id)peopleSuggestionsFetchResult;
- (id)posterAsset;
- (id)posterMediaProvider;
- (id)previewAssetsFetchResult;
- (id)startDate;
- (id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)arg1;
- (id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)arg1;

@end
