/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSendBackSuggestionSource : PXObservable {
    PXAssetsDataSource * _assetsDataSource;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    PXCMMSendBackSuggestion * _suggestion;
}

@property (nonatomic, readonly) PXAssetsDataSource *assetsDataSource;
@property (nonatomic, readonly) PXCMMSendBackSuggestion *suggestion;

+ (id)new;

- (void).cxx_destruct;
- (bool)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1;
- (void)_fetchSuggestedContributionsForAssetsFetchResultWithSourceType:(unsigned long long)arg1;
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1;
- (id)assetsDataSource;
- (id)init;
- (id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)setSuggestion:(id)arg1;
- (id)suggestion;

@end
