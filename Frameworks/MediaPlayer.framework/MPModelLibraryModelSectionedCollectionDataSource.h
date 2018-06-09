/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {
    struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > > { 
        struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemEntityQueryResults;
    MPMediaLibraryEntityTranslationContext * _itemTranslationContext;
    MPModelLibraryRequest * _request;
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _sectionEntityQueryResult;
    MPMediaLibraryEntityTranslationContext * _sectionTranslationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{shared_ptr<std::__1::map<long long' */ struct  itemEntityQueryResults; /* unknown property attribute:  std::__1::shared_ptr<mlcore::EntityQueryResult> > > >}^{__shared_weak_count}} */
@property (nonatomic, readonly) MPModelLibraryRequest *request;
@property (nonatomic, readonly) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; } sectionEntityQueryResult;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)hasSameContentAsDataSource:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithRequest:(id)arg1 sectionQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg2 itemQueryResults:(struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > { struct __tree<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::shared_ptr<mlcore::EntityQueryResult> >, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (struct shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > > { struct map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > {} *x1; struct __shared_weak_count {} *x2; })itemEntityQueryResults;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)request;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })sectionEntityQueryResult;

@end
