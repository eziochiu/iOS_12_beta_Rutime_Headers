/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditValuesCalculator : PXObservable {
    NSObject<OS_dispatch_queue> * _computationQueue;
    NSObject<OS_dispatch_group> * _computingValuesGroup;
    PUPhotoEditImageValues * _currentImageValues;
    PLEditSource * _editSource;
    PUPhotoEditImageValues * _initialImageValues;
    PLPhotoEditModel * _photoEditModel;
    PLPhotoEditModel * _photoEditModelForCurrentValues;
}

@property (nonatomic, retain) PLEditSource *editSource;
@property (nonatomic, readonly) bool hasImageValues;
@property (nonatomic, retain) PLPhotoEditModel *photoEditModel;

- (void).cxx_destruct;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (bool)_imageCurrentValuesCacheIsValid;
- (id)autoCropValuesWithAccuracy:(long long)arg1;
- (void)computeAutoEnhanceWithCompletionHandler:(id /* block */)arg1;
- (id)editSource;
- (bool)hasImageValues;
- (id)init;
- (void)invalidate;
- (id)mutableChangeObject;
- (id)photoEditModel;
- (id)portraitValuesWithAccuracy:(long long)arg1;
- (void)precomputeImageValues;
- (void)precomputeImageValuesWithCompletion:(id /* block */)arg1;
- (void)precomputeImageValuesWithOptionalCompletion:(id /* block */)arg1;
- (void)setEditSource:(id)arg1;
- (void)setPhotoEditModel:(id)arg1;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;

@end
