/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionEntry : NSManagedObject

@property (nonatomic, retain) PFUbiquityPeer *actingPeer;
@property (nonatomic, retain) NSString *globalIDStr;
@property (nonatomic, retain) NSString *knowledgeVectorString;
@property (nonatomic, retain) NSString *localIDStr;
@property (nonatomic, retain) PFUbiquityStoreMetadata *storeMetadata;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, retain) NSString *transactionLogFilename;
@property (readonly) NSURL *transactionLogURL;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property int transactionType;
@property (nonatomic, retain) NSNumber *transactionTypeNum;

+ (id)createTransactionEntriesForCompressedObjectIDs:(id)arg1 withTransactionType:(int)arg2 withImportContext:(id)arg3;
+ (id)deleteTransactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)newTransactionEntryForObjectWithCompressedGlobalID:(id)arg1 withTransactionType:(int)arg2 importContext:(id)arg3;
+ (id)transactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesForPeerID:(id)arg1 beforeTransacationNumber:(id)arg2 forStoreNamed:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)transactionEntriesForPeerID:(id)arg1 withTransactionNumber:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)transactionEntriesMatchingGlobalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntriesMatchingLocalObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)transactionEntryForGlobalIDString:(id)arg1 withActingPeerID:(id)arg2 atTransactionNumber:(id)arg3 inManagedObjectContext:(id)arg4;

- (id)initAndInsertIntoManagedObjectContext:(id)arg1;
- (void)setTransactionType:(int)arg1;
- (id)transactionLogURL;
- (int)transactionType;

@end
