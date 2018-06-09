/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPMediaLibraryEntityTranslationContext * _entityTranslationContext;
    struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { 
        struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemIdentifierQueryResults;
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemQueryResults;
    MPModelLibraryRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>' */ struct  itemIdentifierQueryResults; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > >}^{__shared_weak_count}} */
@property (nonatomic, readonly) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; } itemQueryResults;
@property (nonatomic, readonly) MPModelLibraryRequest *request;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_usesSections;
- (bool)hasSameContentAsDataSource:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)initWithRequest:(id)arg1 itemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg2 itemIdentifierQueryResults:(struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (id)itemAtIndexPath:(id)arg1;
- (struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > {} *x1; struct __shared_weak_count {} *x2; })itemIdentifierQueryResults;
- (struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })itemQueryResults;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })optionalSectionIndexTitlesRange;
- (id)request;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionIndexTitles;

@end
