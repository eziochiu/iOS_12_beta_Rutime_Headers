/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMutableResultRecord : PXResultRecord {
    PHFetchResult * _curatedFetchResult;
    NSSet * _curatedOids;
    NSSet * _excludedOids;
    PHFetchResult * _fetchResult;
    PHFetchResult * _filteredFetchResult;
    bool  _filteredFetchResultIsValid;
    NSSet * _includedOids;
    NSPredicate * _inclusionPredicate;
    bool  _inclusionPredicateIsValid;
    PHFetchResult * _keyAssetsFetchResult;
    bool  _reverseSortOrder;
    bool  _wantsCuration;
}

@property (nonatomic, retain) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) NSSet *curatedOids;
@property (nonatomic, readonly) NSSet *excludedOids;
@property (nonatomic, readonly) PHFetchResult *exposedFetchResult;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) PHFetchResult *filteredFetchResult;
@property (nonatomic, readonly) NSSet *includedOids;
@property (nonatomic, readonly) NSPredicate *inclusionPredicate;
@property (nonatomic, readonly) bool isCurated;
@property (nonatomic, retain) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic, readonly) bool reverseSortOrder;
@property (nonatomic) bool wantsCuration;

- (void).cxx_destruct;
- (id)_exposedFetchResultBeforeFiltering;
- (void)_invalidateFilteredFetchResult;
- (void)_invalidateInclusionPredicate;
- (void)_setIncludeOids:(id)arg1;
- (void)_updateFilteredFetchResultIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedFetchResult;
- (id)curatedOids;
- (void)excludeOids:(id)arg1;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)fetchResult;
- (id)filteredFetchResult;
- (void)includeOids:(id)arg1;
- (id)includedOids;
- (id)inclusionPredicate;
- (void)invalidateFetchResultAssetCache;
- (bool)isCurated;
- (id)keyAssetsFetchResult;
- (bool)reverseSortOrder;
- (void)setCuratedFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setFetchResult:(id)arg1 reverseSortOrder:(bool)arg2;
- (void)setKeyAssetsFetchResult:(id)arg1;
- (void)setReverseSortOrder:(bool)arg1;
- (void)setWantsCuration:(bool)arg1;
- (void)stopExcludingOids:(id)arg1;
- (void)stopIncludingAllOids;
- (bool)wantsCuration;

@end
