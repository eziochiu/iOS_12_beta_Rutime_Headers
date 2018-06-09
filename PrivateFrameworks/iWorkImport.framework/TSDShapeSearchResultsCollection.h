/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeSearchResultsCollection : NSObject <TSDShapeCollection> {
    NSArray<TSDShapeCollectionShape> * _allShapes;
    TSDBasicShapeLibrary * _basicShapeLibrary;
    NSArray<TSDShapeCollectionShape> * _exactMatches;
    TSULocale * _locale;
    NSArray<TSDShapeCollectionShape> * _partialMatches;
    NSString * _searchTerm;
    TSDShapeLibrary * _shapeLibrary;
    TSUNoCopyDictionary * _shapeToDisplayNameMap;
    TSDUserDefinedShapeLibrary * _userDefinedShapeLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long exactMatchCount;
@property (nonatomic, readonly) bool hasExactMatches;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfSections;
@property (nonatomic, readonly) unsigned long long numberOfShapes;
@property (nonatomic, copy) NSArray<TSDShapeCollectionShape> *p_allShapes;
@property (nonatomic, retain) TSDBasicShapeLibrary *p_basicShapeLibrary;
@property (nonatomic, copy) NSArray<TSDShapeCollectionShape> *p_exactMatches;
@property (nonatomic, retain) TSULocale *p_locale;
@property (nonatomic, copy) NSArray<TSDShapeCollectionShape> *p_partialMatches;
@property (nonatomic, retain) TSDShapeLibrary *p_shapeLibrary;
@property (nonatomic, retain) TSUNoCopyDictionary *p_shapeToDisplayNameMap;
@property (nonatomic, retain) TSDUserDefinedShapeLibrary *p_userDefinedShapeLibrary;
@property (nonatomic, copy) NSString *searchTerm;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayNameForShape:(id)arg1;
- (unsigned long long)exactMatchCount;
- (bool)hasExactMatches;
- (id)indexPathOfShape:(id)arg1;
- (id)initWithBasicShapeLibrary:(id)arg1 userDefinedShapeLibrary:(id)arg2 searchTerm:(id)arg3;
- (id)initWithShapeLibrary:(id)arg1 basicShapeLibrary:(id)arg2 userDefinedShapeLibrary:(id)arg3 searchTerm:(id)arg4;
- (id)name;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfShapes;
- (unsigned long long)numberOfShapesInSection:(unsigned long long)arg1;
- (id)p_allShapes;
- (id)p_basicShapeLibrary;
- (id /* block */)p_comparatorForSortingMatches;
- (long long)p_comparePositionOfShape:(id)arg1 withOtherShape:(id)arg2;
- (id)p_exactMatches;
- (bool)p_hasPartialMatches;
- (id)p_locale;
- (id)p_partialMatches;
- (id)p_separateExactAndPartialMatchesFromResults:(id)arg1 searchTerm:(id)arg2 withProvider:(id)arg3 shapeToDisplayNameDict:(id)arg4;
- (long long)p_sequentialShapePosition:(id)arg1;
- (id)p_shapeLibrary;
- (id)p_shapeToDisplayNameMap;
- (id)p_shapesByMappingSearchResults:(id)arg1 withProvider:(id)arg2 shapeToDisplayNameDict:(id)arg3;
- (bool)p_updateSearchResultsBasedOnAnchoredSearchForSearchTerm:(id)arg1;
- (bool)p_updateSearchResultsBasedOnStringScoreSearchForSearchTerm:(id)arg1;
- (bool)p_updateSearchResultsForSearchTerm:(id)arg1;
- (id)p_userDefinedShapeLibrary;
- (void)resetSearchResults;
- (id)searchTerm;
- (void)setP_allShapes:(id)arg1;
- (void)setP_basicShapeLibrary:(id)arg1;
- (void)setP_exactMatches:(id)arg1;
- (void)setP_locale:(id)arg1;
- (void)setP_partialMatches:(id)arg1;
- (void)setP_shapeLibrary:(id)arg1;
- (void)setP_shapeToDisplayNameMap:(id)arg1;
- (void)setP_userDefinedShapeLibrary:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSearchTerm:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSearchTerm:(id)arg1 forceUpdate:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)shapeAtIndex:(unsigned long long)arg1;
- (id)shapeAtIndexPath:(id)arg1;

@end
