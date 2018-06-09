/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy> {
    struct NSMutableArray { Class x1; } * _dedupers;
    struct NSMutableArray { Class x1; } * _improvers;
    MapsSuggestionsManager * _manager;
    struct NSMutableSet { Class x1; } * _postFilters;
    struct NSMutableSet { Class x1; } * _preFilters;
    struct NSMutableArray { Class x1; } * _previousResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MapsSuggestionsManager *manager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_addFilter:(id)arg1 processingType:(long long)arg2;
- (bool)_dedupeByEnrichingEntries:(struct NSArray { Class x1; }*)arg1 withEntry:(id)arg2;
- (bool)_entry:(id)arg1 existsInStorage:(struct NSDictionary { Class x1; }*)arg2;
- (struct NSMutableArray { Class x1; }*)_filteredPreviousResultsCrosscheckingStorage:(struct NSDictionary { Class x1; }*)arg1;
- (struct NSMutableSet { Class x1; }*)_filtersForprocessingType:(long long)arg1;
- (bool)_improveEntry:(id)arg1;
- (void)addDeduper:(id)arg1;
- (void)addImprover:(id)arg1;
- (void)addPostFilter:(id)arg1;
- (void)addPreFilter:(id)arg1;
- (void)clearData;
- (id)init;
- (id)manager;
- (bool)postFiltersKept:(id)arg1;
- (bool)preFiltersKept:(id)arg1;
- (void)removeAllDedupers;
- (void)removeAllFilters;
- (void)removeAllImprovers;
- (void)removeFilter:(id)arg1;
- (void)setManager:(id)arg1;
- (struct NSArray { Class x1; }*)topSuggestionsWithSourceEntries:(struct NSDictionary { Class x1; }*)arg1 error:(id*)arg2;
- (struct NSString { Class x1; }*)uniqueName;

@end
