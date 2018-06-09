/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventCKConverter : NSObject {
    CKRecordZoneID * _mySyncZoneID;
}

@property (retain) CKRecordZoneID *mySyncZoneID;

- (void).cxx_destruct;
- (id)eventDataFromRecord:(id)arg1;
- (id)eventIDsFromRecordIDsAndTypes:(id)arg1;
- (id)eventsFromRecords:(id)arg1;
- (id)initWithMySyncZoneID:(id)arg1;
- (id)mySyncZoneID;
- (id)recordFromEventData:(id)arg1 event:(id)arg2;
- (id)recordIDsFromEventIDs:(id)arg1;
- (id)recordsFromEvents:(id)arg1;
- (void)setMySyncZoneID:(id)arg1;

@end
