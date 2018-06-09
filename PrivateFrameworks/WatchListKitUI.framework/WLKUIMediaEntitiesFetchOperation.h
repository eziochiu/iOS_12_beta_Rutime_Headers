/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIMediaEntitiesFetchOperation : NSOperation {
    IKAppContext * _appContext;
    NSString * _mediaCategory;
    NSString * _mediaCollectionType;
    NSArray * _mediaEntities;
    NSString * _mediaEntitySubtype;
    NSDictionary * _options;
}

@property (nonatomic, retain) IKAppContext *appContext;
@property (nonatomic, retain) NSString *mediaCategory;
@property (nonatomic, retain) NSString *mediaCollectionType;
@property (nonatomic, copy) NSArray *mediaEntities;
@property (nonatomic, retain) NSString *mediaEntitySubtype;
@property (nonatomic, copy) NSDictionary *options;

+ (id)_mpOrderingDirectionMappingForSortDirectionMapping:(id)arg1;
+ (id)_mpPropertiesForProperties:(id)arg1;
+ (id)_numberForObject:(id)arg1;
+ (id)_timeIntervalNumberForObject:(id)arg1;

- (void).cxx_destruct;
- (void)_addPredicatesToMediaQuery:(id)arg1 withFilters:(id)arg2;
- (void)_addPrefetchPropertiesToMediaQuery:(id)arg1 prefetchProperties:(id)arg2;
- (id)_baseMediaQuery;
- (bool)_isCollectionsFetch;
- (bool)_isItemsFetch;
- (id)_mediaQuery;
- (bool)_prepare;
- (void)_setSortOrderingForMediaQuery:(id)arg1 withSortProperties:(id)arg2 sortDirectionMapping:(id)arg3;
- (id)appContext;
- (id)init;
- (id)initWithAppContext:(id)arg1 options:(id)arg2;
- (void)main;
- (id)mediaCategory;
- (id)mediaCollectionType;
- (id)mediaEntities;
- (id)mediaEntitySubtype;
- (id)options;
- (void)setAppContext:(id)arg1;
- (void)setMediaCategory:(id)arg1;
- (void)setMediaCollectionType:(id)arg1;
- (void)setMediaEntities:(id)arg1;
- (void)setMediaEntitySubtype:(id)arg1;
- (void)setOptions:(id)arg1;

@end
