/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaEntityFetchRequest : NSObject <NSCopying> {
    NSString * _groupingKeyPath;
    id /* block */  _groupingSortComparator;
    NSString * _identifier;
    VUIMediaEntityType * _mediaEntityType;
    NSDictionary * _options;
    NSPredicate * _predicate;
    NSSet * _properties;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly) bool _isCollectionsFetch;
@property (nonatomic, readonly) bool _isItemsFetch;
@property (nonatomic, readonly) bool _isSeasonsFetch;
@property (nonatomic, readonly) bool _isShowsFetch;
@property (nonatomic, copy) NSString *groupingKeyPath;
@property (nonatomic, copy) id /* block */ groupingSortComparator;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSPredicate *predicate;
@property (nonatomic, copy) NSSet *properties;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (id)_HLSColorCapabilityPredicateWithColorCapability:(id)arg1;
+ (id)_HLSResolutionPredicateWithResolution:(id)arg1;
+ (id)_addedDateSortDescriptor;
+ (id)_addedToDateSortDescriptor;
+ (id)_any4KResolutionPredicate;
+ (id)_anyHDRColorCapabilityPredicate;
+ (id)_colorCapabilityPredicateWithColorCapability:(id)arg1;
+ (id)_episodeNumberSortDescriptor;
+ (id)_episodesFetchRequestWithSeasonIdentifier:(id)arg1 showIdentifier:(id)arg2;
+ (id)_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)_finalizedSortDescriptorFromSortDescriptor:(id)arg1 mediaEntityKind:(id)arg2;
+ (id)_finalizedSortDescriptorsFromSortDescriptors:(id)arg1 mediaEntityKind:(id)arg2;
+ (id)_identifierPredicateWithIdentifier:(id)arg1;
+ (id)_includeSortIndexesOptions;
+ (id)_isLocalPredicate;
+ (id)_minimalMovieRentalsPropertiesFetchRequest;
+ (id)_minimalMoviesPropertiesFetchRequest;
+ (id)_minimalPropertiesFetchRequestWithType:(id)arg1;
+ (id)_minimalShowsPropertiesFetchRequest;
+ (id)_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;
+ (id)_releaseDateSortDescriptor;
+ (id)_releaseYearSortDescriptor;
+ (id)_resolutionPredicateWithResolution:(id)arg1;
+ (id)_seasonIdentifierPredicateWithIdentifier:(id)arg1;
+ (id)_seasonNumberSortDescriptor;
+ (id)_seasonsFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)_seasonsFetchRequestWithShowIdentifier:(id)arg1;
+ (id)_showIdentifierPredicateWithIdentifier:(id)arg1;
+ (id)_showTitleSortDescriptor;
+ (id)_titleSortDescriptor;
+ (id)episodesFetchRequest;
+ (id)episodesFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)episodesGroupedBySeasonIdentifierFetchRequestWithShowIdentifier:(id)arg1;
+ (id)homeVideosFetchRequest;
+ (id)mediaEntityFetchRequestWithIdentifier:(id)arg1;
+ (id)movieRentalsFetchRequest;
+ (id)moviesFetchRequest;
+ (id)seasonsFetchRequest;
+ (id)seasonsFetchRequestWithSeasonIdentifier:(id)arg1;
+ (id)seasonsFetchRequestWithShowIdentifier:(id)arg1;
+ (id)showsFetchRequest;

- (void).cxx_destruct;
- (void)_addPredicate:(id)arg1;
- (void)_didUpdateRequestProperties;
- (bool)_isCollectionsFetch;
- (bool)_isItemsFetch;
- (bool)_isSeasonsFetch;
- (bool)_isShowsFetch;
- (id)_manualSortDescriptorsWithMediaEntityKind:(id)arg1 propertiesRequiredForSort:(id*)arg2;
- (bool)_shouldGenerateGroupingSortIndexes;
- (bool)_shouldGenerateSortIndexes;
- (id)_sortIndexPropertyKeyWithMediaEntityKind:(id)arg1;
- (void)add4KResolutionPredicate;
- (void)addGroupingSortIndexesOption;
- (void)addHDRColorCapabilityOr4KResolutionPredicate;
- (void)addHDRColorCapabilityPredicate;
- (void)addIsLocalPredicate;
- (void)addRecentlyAddedSortDescriptorWithLimit:(unsigned long long)arg1;
- (void)addSortIndexesOption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupingKeyPath;
- (id /* block */)groupingSortComparator;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithMediaEntityType:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mediaEntityType;
- (id)options;
- (id)predicate;
- (id)properties;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setGroupingKeyPath:(id)arg1;
- (void)setGroupingSortComparator:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMediaEntityType:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
