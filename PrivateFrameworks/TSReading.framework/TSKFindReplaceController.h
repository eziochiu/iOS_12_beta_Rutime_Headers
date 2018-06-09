/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKFindReplaceController : NSObject {
    NSMutableSet * _annotationDisplayStringTypes;
    bool  _commentsIncludedInAnnotationSearch;
    bool  _countSearchHits;
    NSEnumerator * _currentModelEnumerator;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _currentRootSearchTargetRange;
    TSKSearch * _currentSearch;
    double  _currentSearchStartTime;
    <TSKSearchable> * _currentSearchable;
    <TSKDocumentRootProvider> * _documentRootProvider;
    <TSKFindReplaceDelegate> * _findReplaceDelegate;
    NSMutableDictionary * _layoutSearchCountForRootIndexMap;
    NSMutableArray * _layoutSearchResults;
    bool  _onlySearchesAnnotations;
    id /* block */  _progressBlock;
    unsigned long long  _searchOptions;
    id /* block */  _searchResultComparator;
    unsigned long long  _searchResultsCount;
    NSString * _searchString;
    <TSKSearchTargetProvider> * _searchTargetProvider;
}

@property (nonatomic, retain) NSMutableSet *annotationDisplayStringTypes;
@property (nonatomic) bool commentsIncludedInAnnotationSearch;
@property (nonatomic) bool countSearchHits;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } currentRootSearchTargetRange;
@property (nonatomic) <TSKDocumentRootProvider> *documentRootProvider;
@property (nonatomic, readonly) <TSKFindReplaceDelegate> *findReplaceDelegate;
@property (nonatomic, retain) NSMutableDictionary *layoutSearchCountForRootIndexMap;
@property (nonatomic, retain) NSMutableArray *layoutSearchResults;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic) unsigned long long searchOptions;
@property (nonatomic, copy) id /* block */ searchResultComparator;
@property (nonatomic, readonly) unsigned long long searchResultsCount;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, readonly) <TSKSearchTargetProvider> *searchTargetProvider;

+ (void)_assertSearchTargetImplementsProperMethods:(id)arg1;
+ (void)_recursiveSearchWithSearchTarget:(id)arg1 forAnnotationsWithHitBlock:(id /* block */)arg2;
+ (void)_recursiveSearchWithSearchTarget:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(id /* block */)arg4;
+ (bool)p_searchReference:(id)arg1 comparedWithSearchReference:(id)arg2 orEqual:(bool)arg3 inDirection:(unsigned long long)arg4 before:(bool)arg5 comparator:(id /* block */)arg6;
+ (bool)searchReference:(id)arg1 isAfterSearchReference:(id)arg2 orEqual:(bool)arg3 inDirection:(unsigned long long)arg4 comparator:(id /* block */)arg5;
+ (bool)searchReference:(id)arg1 isBeforeSearchReference:(id)arg2 orEqual:(bool)arg3 inDirection:(unsigned long long)arg4 comparator:(id /* block */)arg5;

- (void)_buildLayoutSearchResultsForRootSearchTargetsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 resultsArray:(id)arg2;
- (id)_firstResultInDirection:(unsigned long long)arg1;
- (id)_lastResultInDirection:(unsigned long long)arg1;
- (unsigned long long)_nextRootSearchTargetFromIndex:(unsigned long long)arg1 inDirection:(unsigned long long)arg2 wrapped:(bool*)arg3;
- (void)_nextSearchTargetWithMatchInDirection:(unsigned long long)arg1;
- (unsigned long long)_resultCountInRootObjectRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)annotationDisplayStringTypes;
- (id)annotationSearchReferenceForAnnotation:(id)arg1;
- (bool)commentsIncludedInAnnotationSearch;
- (bool)countSearchHits;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })currentRootSearchTargetRange;
- (void)dealloc;
- (id)documentRoot;
- (id)documentRootProvider;
- (id)findReplaceDelegate;
- (id)firstVisibleResultInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)indexOfVisibleSearchReference:(id)arg1;
- (id)initWithDocumentRootProvider:(id)arg1 delegate:(id)arg2;
- (id)initWithDocumentRootProvider:(id)arg1 delegate:(id)arg2 onlySearchesAnnotations:(bool)arg3;
- (id)initWithDocumentRootProvider:(id)arg1 delegate:(id)arg2 targetProvider:(id)arg3 onlySearchesAnnotations:(bool)arg4;
- (void)invalidateSearchResults;
- (id)layoutSearchCountForRootIndexMap;
- (id)layoutSearchResults;
- (void)p_buildSearchResultsIfNecessary;
- (void)p_buildVisibleSearchResultsIfNecessary;
- (void)p_continueCountingHits;
- (bool)p_searchCriteriaIsValid;
- (bool)p_shouldCountAnnotation:(id)arg1;
- (void)p_startCountingHits;
- (void)p_stopCountingHits;
- (id /* block */)progressBlock;
- (unsigned long long)searchOptions;
- (id)searchReferenceAfterReference:(id)arg1 inDirection:(unsigned long long)arg2;
- (id)searchReferencesToHighlightInVisibleRootObjectRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id /* block */)searchResultComparator;
- (unsigned long long)searchResultsCount;
- (id)searchString;
- (id)searchTargetProvider;
- (void)setAnnotationDisplayStringTypes:(id)arg1;
- (void)setCommentsIncludedInAnnotationSearch:(bool)arg1;
- (void)setCountSearchHits:(bool)arg1;
- (void)setCurrentRootSearchTargetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDocumentRootProvider:(id)arg1;
- (void)setLayoutSearchCountForRootIndexMap:(id)arg1;
- (void)setLayoutSearchResults:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setSearchOptions:(unsigned long long)arg1;
- (void)setSearchProgressBlock:(id /* block */)arg1;
- (void)setSearchResultComparator:(id /* block */)arg1;
- (void)setSearchString:(id)arg1;
- (void)sortLayoutSearchResultsArray:(id)arg1;

@end
