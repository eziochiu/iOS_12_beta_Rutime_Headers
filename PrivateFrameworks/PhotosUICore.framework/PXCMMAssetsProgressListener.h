/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMAssetsProgressListener : PXObservable <PXPhotoLibraryUIChangeObserver> {
    double  _activityProgress;
    NSString * _activityTitle;
    PHFetchResult * _allAssetsFetchResult;
    NSString * _assetsTitle;
    PHFetchResult * _copiedAssetsFetchResult;
    PHFetchResult * _downloadingAssetsFetchResult;
    NSString * _expirationTitle;
    NSString * _idleTitle;
    PHMomentShare * _momentShare;
    long long  _presentationStyle;
    long long  _state;
    long long  _type;
}

@property (nonatomic) double activityProgress;
@property (nonatomic, copy) NSString *activityTitle;
@property (nonatomic, retain) PHFetchResult *allAssetsFetchResult;
@property (nonatomic, copy) NSString *assetsTitle;
@property (nonatomic, retain) PHFetchResult *copiedAssetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *downloadingAssetsFetchResult;
@property (nonatomic, copy) NSString *expirationTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idleTitle;
@property (nonatomic, retain) PHMomentShare *momentShare;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)new;

- (void).cxx_destruct;
- (void)_prepareFetchResultsForPhotoLibrary:(id)arg1;
- (bool)_showsUploadingStatus;
- (void)_updateCountsAndStatus;
- (double)activityProgress;
- (id)activityTitle;
- (id)allAssetsFetchResult;
- (id)assetsTitle;
- (id)copiedAssetsFetchResult;
- (void)didPerformChanges;
- (id)downloadingAssetsFetchResult;
- (id)expirationTitle;
- (id)idleTitle;
- (id)init;
- (id)initWithMomentShare:(id)arg1 presentationStyle:(long long)arg2;
- (id)momentShare;
- (id)mutableChangeObject;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setActivityProgress:(double)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setAllAssetsFetchResult:(id)arg1;
- (void)setAssetsTitle:(id)arg1;
- (void)setCopiedAssetsFetchResult:(id)arg1;
- (void)setDownloadingAssetsFetchResult:(id)arg1;
- (void)setExpirationTitle:(id)arg1;
- (void)setIdleTitle:(id)arg1;
- (void)setMomentShare:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (long long)type;

@end
