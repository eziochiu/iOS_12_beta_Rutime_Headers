/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSearchResults : NSObject <NSCopying> {
    NSMutableArray * _allDataItemsCache;
    NSMutableArray * _allSearchItemsCache;
    NSMutableArray * _resultGroups;
    TUSearchController * _searchController;
    NSString * _searchTerm;
}

@property (readonly) NSArray *allDataItems;
@property (nonatomic, retain) NSMutableArray *allDataItemsCache;
@property (readonly) NSArray *allSearchItems;
@property (nonatomic, retain) NSMutableArray *allSearchItemsCache;
@property (readonly) long long numberOfResults;
@property (readonly) long long numberOfSections;
@property (nonatomic, retain) NSMutableArray *resultGroups;
@property TUSearchController *searchController;
@property (nonatomic, retain) NSString *searchTerm;

- (void).cxx_destruct;
- (void)_clearCaches;
- (void)addAdhocResultGroup;
- (void)addResultGroup:(id)arg1;
- (void)addSearchResults:(id)arg1;
- (id)allDataItems;
- (id)allDataItemsCache;
- (id)allSearchItems;
- (id)allSearchItemsCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)finalizeSearchResults;
- (id)initWithSearchTerm:(id)arg1;
- (long long)numberOfResults;
- (long long)numberOfSections;
- (long long)numberOfTableViewRows;
- (void)removeDuplicateResults;
- (void)removeSearchItem:(id)arg1;
- (id)resultGroupForSection:(long long)arg1;
- (id)resultGroups;
- (id)searchController;
- (id)searchTerm;
- (void)setAllDataItemsCache:(id)arg1;
- (void)setAllSearchItemsCache:(id)arg1;
- (void)setResultGroups:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchTerm:(id)arg1;

@end
