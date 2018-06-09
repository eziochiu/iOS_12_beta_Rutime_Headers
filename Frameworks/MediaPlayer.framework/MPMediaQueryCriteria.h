/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryCriteria : NSObject <NSCopying> {
    NSSet * _collectionPropertiesToFetch;
    unsigned long long  _entityLimit;
    unsigned long long  _entityOrder;
    NSMutableSet * _filterPredicates;
    long long  _groupingType;
    bool  _ignoreRestrictionsPredicates;
    bool  _ignoreSystemFilterPredicates;
    bool  _includeEntitiesWithBlankNames;
    bool  _includeNonLibraryEntities;
    NSSet * _itemPropertiesToFetch;
    NSDictionary * _orderingDirectionMappings;
    NSArray * _orderingProperties;
    bool  _useSections;
}

@property (nonatomic, copy) NSSet *collectionPropertiesToFetch;
@property (nonatomic) unsigned long long entityLimit;
@property (nonatomic) unsigned long long entityOrder;
@property (nonatomic, readonly) bool excludesEntitiesWithBlankNames;
@property (nonatomic, copy) NSSet *filterPredicates;
@property (nonatomic) long long groupingType;
@property (nonatomic) bool ignoreRestrictionsPredicates;
@property (nonatomic) bool ignoreSystemFilterPredicates;
@property (nonatomic) bool includeEntitiesWithBlankNames;
@property (nonatomic) bool includeNonLibraryEntities;
@property (nonatomic, copy) NSSet *itemPropertiesToFetch;
@property (nonatomic, copy) NSDictionary *orderingDirectionMappings;
@property (nonatomic, copy) NSArray *orderingProperties;
@property (nonatomic, readonly) bool specifiesPlaylistItems;

- (void).cxx_destruct;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingTerms:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3OrderingTermsForGroupingType:(long long)arg1;
- (id)ML3OrderingTermsForMPOrderingProperties:(id)arg1 directionalityMapping:(id)arg2 entityClass:(Class)arg3;
- (void)addFilterPredicate:(id)arg1;
- (void)addFilterPredicates:(id)arg1;
- (id)collectionPropertiesToFetch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)entityLimit;
- (unsigned long long)entityOrder;
- (bool)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (long long)groupingType;
- (unsigned long long)hash;
- (bool)ignoreRestrictionsPredicates;
- (bool)ignoreSystemFilterPredicates;
- (bool)includeEntitiesWithBlankNames;
- (bool)includeNonLibraryEntities;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)itemPropertiesToFetch;
- (id)orderingDirectionMappings;
- (id)orderingProperties;
- (id)predicateForProperty:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setEntityLimit:(unsigned long long)arg1;
- (void)setEntityOrder:(unsigned long long)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(long long)arg1;
- (void)setIgnoreRestrictionsPredicates:(bool)arg1;
- (void)setIgnoreSystemFilterPredicates:(bool)arg1;
- (void)setIncludeEntitiesWithBlankNames:(bool)arg1;
- (void)setIncludeNonLibraryEntities:(bool)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setOrderingDirectionMappings:(id)arg1;
- (void)setOrderingProperties:(id)arg1;
- (bool)specifiesPlaylistItems;

@end
