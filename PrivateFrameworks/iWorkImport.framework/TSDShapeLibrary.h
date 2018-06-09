/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeLibrary : NSObject <TSDShapeSearchResultProviding> {
    NSArray * _categories;
    NSArray * _categorySort;
    long long  _dataLoadStatus;
    NSDictionary * _library;
    NSURL * _libraryURL;
    TSULocale * _locale;
    TSDShapeSearchIndex * _searchIndex;
    long long  _searchIndexStatus;
    NSCache * _shapeCache;
    NSSet * _shapeIDsToRemove;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) long long dataLoadStatus;
@property (nonatomic, readonly) TSULocale *locale;
@property (nonatomic, retain) NSArray *p_categorySort;
@property (nonatomic, retain) NSDictionary *p_library;
@property (nonatomic, retain) NSURL *p_libraryURL;
@property (nonatomic, retain) TSDShapeSearchIndex *p_searchIndex;
@property (nonatomic) long long p_searchIndexStatus;
@property (nonatomic, retain) NSCache *p_shapeCache;
@property (nonatomic, readonly) NSSet *p_shapeIDsToRemove;

+ (void)loadDataWithCompletion:(id /* block */)arg1;
+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)categories;
- (long long)dataLoadStatus;
- (id)initWithShapeLibraryURL:(id)arg1 categorySortURL:(id)arg2 locale:(id)arg3;
- (id)locale;
- (void)p_cacheDataAfterParsingWithSearchIndex:(id)arg1;
- (id)p_categorySort;
- (void)p_createSearchIndexWithCompletionHandler:(id /* block */)arg1;
- (id)p_keywordDelimiterFromLibrary:(id)arg1;
- (id)p_library;
- (id)p_libraryByRemovingBlacklistedShapes:(id)arg1;
- (id)p_libraryURL;
- (void)p_loadCategoriesAndSearchIndexIfNeeded;
- (void)p_loadDataWithCompletion:(id /* block */)arg1;
- (id)p_parseLibraryFromJSON;
- (id)p_searchIndex;
- (long long)p_searchIndexStatus;
- (long long)p_setupLibrary;
- (void)p_setupLibraryIfNeeded;
- (id)p_shapeCache;
- (id)p_shapeDictionariesByID;
- (id)p_shapeDictionariesByIDFromLibrary:(id)arg1;
- (id)p_shapeIDByLocalizationKeyFromLibrary:(id)arg1;
- (id)p_shapeIDsToRemove;
- (id)p_sortedCategoriesFromLibrary:(id)arg1;
- (id)resultsForSearchTerm:(id)arg1;
- (void)setDataLoadStatus:(long long)arg1;
- (void)setP_categorySort:(id)arg1;
- (void)setP_library:(id)arg1;
- (void)setP_libraryURL:(id)arg1;
- (void)setP_searchIndex:(id)arg1;
- (void)setP_searchIndexStatus:(long long)arg1;
- (void)setP_shapeCache:(id)arg1;
- (id)shapeFromSearchResult:(id)arg1;
- (id)shapeWithID:(id)arg1;
- (id)shapeWithLocalizationKey:(id)arg1;

@end
