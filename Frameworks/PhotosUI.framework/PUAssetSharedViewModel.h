/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetSharedViewModel : PUViewModel {
    <PUDisplayAsset> * _asset;
    PUOperationStatus * _loadingStatus;
    NSProgress * _saveProgress;
    long long  _saveState;
}

@property (nonatomic, readonly) <PUDisplayAsset> *asset;
@property (nonatomic, readonly) PUAssetSharedViewModelChange *currentChange;
@property (nonatomic, retain) PUOperationStatus *loadingStatus;
@property (nonatomic, retain) NSProgress *saveProgress;
@property (nonatomic) long long saveState;

- (void).cxx_destruct;
- (id)asset;
- (id)currentChange;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)loadingStatus;
- (id)newViewModelChange;
- (void)registerChangeObserver:(id)arg1;
- (id)saveProgress;
- (long long)saveState;
- (void)setLoadingStatus:(id)arg1;
- (void)setSaveProgress:(id)arg1;
- (void)setSaveState:(long long)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end
