/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLocalChangeEventBuilder : NSObject {
    NSMutableDictionary * _attributesByOID;
    bool  _coalescedEvent;
    NSMutableArray * _deletedAlbumCloudGUIDs;
    NSMutableArray * _deletedAssetCloudGUIDs;
    NSMutableArray * _deletedFaceCropCloudGUIDs;
    NSMutableArray * _deletedMemoryCloudGUIDs;
    NSMutableSet * _deletedObjectIDs;
    NSMutableArray * _deletedOwnedMomentShareCloudGUIDs;
    NSMutableArray * _deletedPersonCloudGUIDs;
    NSMutableArray * _deletedSubscribedMomentShareCloudGUIDs;
    NSMutableArray * _deletedSuggestionCloudGUIDs;
    NSMutableSet * _insertedObjectIDs;
    NSMutableDictionary * _relationshipsByOID;
    bool  _syncChange;
    id /* block */  _transactionFilter;
    NSMutableSet * _updatedObjectIDs;
    id /* block */  _updatedPropertyFilter;
}

@property (getter=isCoalescedEvent, nonatomic) bool coalescedEvent;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isSyncChange, nonatomic) bool syncChange;
@property (nonatomic, copy) id /* block */ transactionFilter;
@property (nonatomic, copy) id /* block */ updatedPropertyFilter;

+ (id)localEventFromTransaction:(id)arg1;
+ (id)localEventWithBuilderBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (Class)_cloudDeletableEntityFromObjectID:(id)arg1;
- (id)_filteredUpdatedPropertiesFromChange:(id)arg1;
- (bool)_isCloudStateDeletedOnTombstone:(id)arg1;
- (void)_recordCloudDeleteForChange:(id)arg1;
- (void)_recordDeleteChange:(id)arg1;
- (void)_recordInsertChange:(id)arg1;
- (void)_recordUpdateChange:(id)arg1;
- (bool)_shouldRecordTransaction:(id)arg1;
- (id)buildLocalEvent;
- (id)init;
- (bool)isCoalescedEvent;
- (bool)isEmpty;
- (bool)isSyncChange;
- (void)recordAllTransactionsFromIterator:(id)arg1;
- (void)recordChange:(id)arg1;
- (id /* block */)recordChangedObjectIDBlockForChangeKey:(id)arg1;
- (void)recordDeletedCloudGUID:(id)arg1 forType:(long long)arg2;
- (id /* block */)recordDeletedCloudGUIDBlockForChangeKey:(id)arg1;
- (void)recordDeletedObjectID:(id)arg1;
- (void)recordInsertedObjectID:(id)arg1;
- (void)recordTransaction:(id)arg1;
- (void)recordUpdatedAttributes:(unsigned long long)arg1 andRelationships:(unsigned long long)arg2 forObjectID:(id)arg3;
- (void)recordUpdatedObjectID:(id)arg1;
- (void)setCoalescedEvent:(bool)arg1;
- (void)setSyncChange:(bool)arg1;
- (void)setTransactionFilter:(id /* block */)arg1;
- (void)setUpdatedPropertyFilter:(id /* block */)arg1;
- (id /* block */)transactionFilter;
- (id /* block */)updatedPropertyFilter;

@end
