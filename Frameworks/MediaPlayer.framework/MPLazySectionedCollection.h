/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPLazySectionedCollection : MPSectionedCollection {
    struct vector<long, std::__1::allocator<long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::__1::allocator<long> > { 
            long long *__value_; 
        } __end_cap_; 
    }  _cachedNumberOfItemsInSections;
    long long  _cachedNumberOfSections;
    <MPLazySectionedCollectionDataSource> * _dataSource;
    bool  _hasValidCachedNumberOfSections;
    NSCache * _itemsCache;
    NSCache * _sectionsCache;
}

@property (nonatomic, retain) <MPLazySectionedCollectionDataSource> *dataSource;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedObjectAtIndexPath:(id)arg1;
- (id)dataSource;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)firstItem;
- (id)firstSection;
- (bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)lastItem;
- (id)lastSection;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2;

@end