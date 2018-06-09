/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBasicShapeLibrary : NSObject <TSDShapeSearchResultProviding> {
    TSULocale * _locale;
    TSDShapeSearchIndex * _searchIndex;
}

@property (nonatomic, readonly) TSULocale *locale;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfBasicShapes;
@property (nonatomic, retain) TSDShapeSearchIndex *p_searchIndex;

+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)basicShapeAtIndex:(unsigned long long)arg1;
- (id)initWithLocale:(id)arg1;
- (id)locale;
- (id)name;
- (unsigned long long)numberOfBasicShapes;
- (id)p_baseName;
- (id)p_searchIndex;
- (int)p_shapeTypeAtIndex:(unsigned long long)arg1;
- (void)p_updateSearchIndex:(id)arg1;
- (id)resultsForSearchTerm:(id)arg1;
- (void)setP_searchIndex:(id)arg1;
- (id)shapeFromSearchResult:(id)arg1;

@end
