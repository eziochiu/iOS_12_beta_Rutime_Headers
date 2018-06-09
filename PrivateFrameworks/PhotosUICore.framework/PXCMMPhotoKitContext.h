/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitContext : PXCMMContext {
    PHMomentShare * _momentShare;
    PXCMMPhotoKitActionManager * _photoKitActionManager;
    PHSuggestion * _suggestion;
}

@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) PHSuggestion *suggestion;

- (void).cxx_destruct;
- (id)actionManager;
- (id)createSession;
- (id)initWithAssetCollection:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssets:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithAssetsDataSourceManager:(id)arg1 mediaProvider:(id)arg2 activityType:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithFetchResult:(id)arg1 library:(id)arg2 activityType:(unsigned long long)arg3 sourceType:(unsigned long long)arg4;
- (id)initWithMomentShare:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)initWithSuggestion:(id)arg1 activityType:(unsigned long long)arg2 sourceType:(unsigned long long)arg3;
- (id)momentShare;
- (id)suggestion;

@end
