/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPModelLibraryDownloadQueueDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _entityQueryResult;
    MPMediaLibraryEntityTranslationContext * _entityTranslationContext;
    MPMediaLibraryEntityTranslator * _entityTranslator;
    MPModelLibraryDownloadQueueRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
