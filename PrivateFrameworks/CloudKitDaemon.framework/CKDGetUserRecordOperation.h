/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation {
    CKRecord * _userRecord;
}

@property (nonatomic, retain) CKRecord *userRecord;

- (void).cxx_destruct;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;
- (void)main;
- (void)setUserRecord:(id)arg1;
- (id)userRecord;

@end
