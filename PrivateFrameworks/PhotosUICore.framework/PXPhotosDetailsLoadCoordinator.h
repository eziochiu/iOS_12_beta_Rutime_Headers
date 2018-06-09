/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsLoadCoordinator : NSObject {
    NSMutableArray * __relatedBlocks;
    NSMutableArray * __suggestionsBlocks;
    NSHashTable * __tokens;
    double  _timeoutDelay;
}

@property (nonatomic, readonly) NSMutableArray *_relatedBlocks;
@property (nonatomic, readonly) NSMutableArray *_suggestionsBlocks;
@property (nonatomic, readonly) NSHashTable *_tokens;
@property (nonatomic) double timeoutDelay;

+ (id)loadCoordinatorForContext:(id)arg1;

- (void).cxx_destruct;
- (bool)_canPerformRelatedFetch;
- (bool)_canPerformSuggestionsFetch;
- (id)_createToken;
- (id)_relatedBlocks;
- (id)_suggestionsBlocks;
- (void)_tokenDidComplete:(id)arg1;
- (id)_tokens;
- (id)init;
- (void)performBlockWhenReadyToFetchRelated:(id /* block */)arg1;
- (void)performBlockWhenReadyToFetchSuggestions:(id /* block */)arg1;
- (void)setTimeoutDelay:(double)arg1;
- (double)timeoutDelay;
- (id)tokenForCuratedFetch;
- (id)tokenForLivePhotoVariations;

@end
