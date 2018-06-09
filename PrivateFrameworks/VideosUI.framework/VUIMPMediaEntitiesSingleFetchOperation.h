/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation {
    NSError * _error;
    VUIMediaEntityKind * _mediaEntityKind;
    VUIMPMediaLibrary * _mediaLibrary;
    MPMediaPredicate * _mediaQueryPredicate;
    NSDictionary * _mediaQuerySortOrderingDirectionMappings;
    NSArray * _mediaQuerySortOrderingProperties;
    NSArray * _postFetchSortDescriptors;
    NSPredicate * _predicate;
    NSMutableSet * _prefetchProperties;
    bool  _processPredicateAfterFetch;
    bool  _processRangeAfterFetch;
    VUIMediaEntityFetchRequest * _request;
    VUIMediaEntityFetchResponse * _response;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) VUIMediaEntityKind *mediaEntityKind;
@property (nonatomic, retain) VUIMPMediaLibrary *mediaLibrary;
@property (nonatomic, retain) MPMediaPredicate *mediaQueryPredicate;
@property (nonatomic, retain) NSDictionary *mediaQuerySortOrderingDirectionMappings;
@property (nonatomic, retain) NSArray *mediaQuerySortOrderingProperties;
@property (nonatomic, retain) NSArray *postFetchSortDescriptors;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSMutableSet *prefetchProperties;
@property (nonatomic) bool processPredicateAfterFetch;
@property (nonatomic) bool processRangeAfterFetch;
@property (nonatomic, retain) VUIMediaEntityFetchRequest *request;
@property (nonatomic, copy) VUIMediaEntityFetchResponse *response;

+ (id)_sortIndexesWithMediaQuerySection:(id)arg1;

- (void).cxx_destruct;
- (void)_addEntityLimitToMediaQuery:(id)arg1;
- (void)_addPredicatesToMediaQuery:(id)arg1;
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1;
- (void)_addSortingPropertiesToMediaQuery:(id)arg1;
- (id)_baseMediaQuery;
- (id)_collectionsFetchResponseWithMediaQuery:(id)arg1;
- (id)_fetchResponseWithMediaEntities:(id)arg1 mediaEntitySubtype:(unsigned long long)arg2 mediaQuerySections:(id)arg3;
- (bool)_isSortingBeingPerformedByMediaQuery;
- (id)_itemsFetchResponseWithMediaQuery:(id)arg1;
- (id)_mediaEntities:(id)arg1 subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_mediaEntityKind;
- (id)_mediaQuery;
- (id)_mediaQueryPredicateForCompoundPredicate:(id)arg1;
- (id)_mediaQueryPredicateForPredicate:(id)arg1;
- (id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)arg1;
- (void)_populatePrefetchProperties;
- (id)_processFetchedMediaEntities:(id)arg1;
- (void)_processPredicate;
- (void)_processRange;
- (void)_processSortDescriptors;
- (id)_restrictionsPredicate;
- (bool)_shouldSortUsingMediaQuery;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 request:(id)arg2;
- (id)mediaEntityKind;
- (id)mediaLibrary;
- (id)mediaQueryPredicate;
- (id)mediaQuerySortOrderingDirectionMappings;
- (id)mediaQuerySortOrderingProperties;
- (id)postFetchSortDescriptors;
- (id)predicate;
- (id)prefetchProperties;
- (bool)processPredicateAfterFetch;
- (bool)processRangeAfterFetch;
- (id)request;
- (id)response;
- (void)setError:(id)arg1;
- (void)setMediaEntityKind:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMediaQueryPredicate:(id)arg1;
- (void)setMediaQuerySortOrderingDirectionMappings:(id)arg1;
- (void)setMediaQuerySortOrderingProperties:(id)arg1;
- (void)setPostFetchSortDescriptors:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPrefetchProperties:(id)arg1;
- (void)setProcessPredicateAfterFetch:(bool)arg1;
- (void)setProcessRangeAfterFetch:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;

@end
