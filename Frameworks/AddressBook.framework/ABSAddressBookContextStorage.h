/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSAddressBookContextStorage : NSObject {
    NSMutableDictionary * _addedMemberships;
    NSMutableDictionary * _deletedMemberships;
    NSMutableDictionary * _deletedRecords;
    bool  _hasUnsavedChanges;
    NSMutableArray * _insertedRecords;
    NSMutableDictionary * _records;
    NSMutableDictionary * _revertedRecords;
    NSMutableDictionary * _updatedRecords;
}

@property (nonatomic, readonly) NSMutableDictionary *addedMemberships;
@property (nonatomic, readonly) NSMutableDictionary *deletedMemberships;
@property (nonatomic, readonly) NSMutableDictionary *deletedRecords;
@property (nonatomic) bool hasUnsavedChanges;
@property (nonatomic, readonly) NSMutableArray *insertedRecords;
@property (nonatomic, readonly) NSMutableDictionary *records;
@property (nonatomic, readonly) NSArray *recordsWithPendingMembershipAdditions;
@property (nonatomic, readonly) NSArray *recordsWithPendingMembershipDeletions;
@property (nonatomic, readonly) NSMutableDictionary *revertedRecords;
@property (nonatomic, readonly) NSMutableDictionary *updatedRecords;

- (void).cxx_destruct;
- (void)_resetIncludingLivingRecords:(bool)arg1;
- (bool)addMemberRecord:(id)arg1 toRecord:(id)arg2;
- (bool)addRecord:(id)arg1;
- (id)addedMembersForRecord:(id)arg1;
- (id)addedMemberships;
- (id)cnImplFetched:(id)arg1 creationBlock:(id /* block */)arg2;
- (void)commitPendingChanges;
- (bool)deleteRecord:(id)arg1;
- (id)deletedMemberships;
- (id)deletedRecords;
- (bool)hasUnsavedChanges;
- (id)init;
- (id)insertedRecords;
- (id)recordFetched:(id)arg1;
- (bool)recordUpdated:(id)arg1;
- (id)records;
- (id)recordsWithPendingMembershipAdditions;
- (id)recordsWithPendingMembershipDeletions;
- (bool)removeMemberRecord:(id)arg1 fromRecord:(id)arg2;
- (id)removedMembersForRecord:(id)arg1;
- (void)revert;
- (id)revertedRecords;
- (void)setHasUnsavedChanges:(bool)arg1;
- (id)updatedRecords;

@end
