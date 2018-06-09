/* made by EzioChiu.
 */

@protocol ICCloudObject <NSObject, ICHasDatabaseScope>

@required

+ (NSArray *)allCloudObjectsInContext:(NSManagedObjectContext *)arg1;
+ (id)existingCloudObjectForRecordID:(CKRecordID *)arg1 context:(NSManagedObjectContext *)arg2;
+ (id)newCloudObjectForRecord:(CKRecord *)arg1 context:(NSManagedObjectContext *)arg2;
+ (id)newPlaceholderObjectForRecordID:(CKRecordID *)arg1 context:(NSManagedObjectContext *)arg2;

- (NSString *)className;
- (void)deleteFromLocalDatabase;
- (void)didDeleteUserSpecificRecordID:(CKRecordID *)arg1;
- (void)didFailToSaveUserSpecificRecord:(CKRecord *)arg1 error:(NSError *)arg2;
- (void)didFetchUserSpecificRecord:(CKRecord *)arg1;
- (void)didSaveUserSpecificRecord:(CKRecord *)arg1;
- (void)fixBrokenReferences;
- (bool)isInICloudAccount;
- (bool)isValidObject;
- (NSString *)loggingDescription;
- (void)mergeDataFromRecord:(CKRecord *)arg1;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBeFetchedFromCloud;
- (bool)needsToBePushedToCloud;
- (bool)needsToSaveUserSpecificRecord;
- (CKRecord *)newlyCreatedRecord;
- (CKRecord *)newlyCreatedUserSpecificRecord;
- (void)objectFailedToBePushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;
- (NSManagedObjectID *)objectID;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(CKRecord *)arg1;
- (void)objectWasPushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1 serverRecord:(CKRecord *)arg2;
- (void)objectWillBePushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1;
- (NSArray *)objectsToBeDeletedBeforeThisObject;
- (CKRecordID *)recordID;
- (NSString *)recordType;
- (CKRecordID *)userSpecificRecordID;
- (bool)wantsUserSpecificRecord;

@end
