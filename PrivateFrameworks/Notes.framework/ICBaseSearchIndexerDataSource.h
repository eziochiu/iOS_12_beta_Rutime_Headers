/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource> {
    NSMutableDictionary * _identifiersByObjectID;
    bool  _needsReindexing;
    NSMutableSet * _objectIDsBeingProcessed;
    NSMutableDictionary * _objectIDsByIdentifier;
    NSMutableSet * _objectIDsToIgnore;
    NSMutableSet * _objectIDsToProcess;
    bool  _observingChanges;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _reindexing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *identifiersByObjectID;
@property bool needsReindexing;
@property (nonatomic, retain) NSMutableSet *objectIDsBeingProcessed;
@property (nonatomic, retain) NSMutableDictionary *objectIDsByIdentifier;
@property (nonatomic, retain) NSMutableSet *objectIDsToIgnore;
@property (nonatomic, retain) NSMutableSet *objectIDsToProcess;
@property (getter=isObservingChanges, nonatomic) bool observingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (getter=isReindexing) bool reindexing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allIndexableObjectIDs;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (id)identifiersByObjectID;
- (id)indexableObjectIDsWithIdentifiers:(id)arg1;
- (id)init;
- (bool)isObservingChanges;
- (bool)isReindexing;
- (void)loadObjectIDsToIgnore;
- (void)loadState;
- (bool)needsReindexing;
- (id)newManagedObjectContext;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
- (id)objectIDsBeingProcessed;
- (id)objectIDsByIdentifier;
- (id)objectIDsFromSearchableItems:(id)arg1;
- (id)objectIDsNeedingIndexing;
- (id)objectIDsToIgnore;
- (id)objectIDsToIgnoreDefaultsKey;
- (id)objectIDsToProcess;
- (id)persistentStoreCoordinator;
- (id)processingQueue;
- (void)resetContextObservers;
- (void)saveObjectIDsToIgnore;
- (void)saveState;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
- (void)searchIndexerDidFinishReindexingWithError:(id)arg1;
- (void)searchIndexerWillBeginReindexing;
- (void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1;
- (void)searchIndexerWillIndexObjectIDs:(id)arg1;
- (id)searchableItemForObject:(id)arg1;
- (id)searchableItemIdentifiersToBeDeleted;
- (id)searchableItemsForObjectIDs:(id)arg1;
- (void)setIdentifiersByObjectID:(id)arg1;
- (void)setNeedsReindexing:(bool)arg1;
- (void)setObjectIDsBeingProcessed:(id)arg1;
- (void)setObjectIDsByIdentifier:(id)arg1;
- (void)setObjectIDsToIgnore:(id)arg1;
- (void)setObjectIDsToProcess:(id)arg1;
- (void)setObservingChanges:(bool)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setReindexing:(bool)arg1;
- (void)startObservingChanges;
- (id)stateDefaultsKey;
- (void)stopObservingChanges;

@end
