/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordsURLRequest : CKDURLRequest {
    bool  _atomic;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    bool  _oplock;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSMutableDictionary * _recordByRequestID;
    NSMutableDictionary * _recordIDByRequestID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    id /* block */  _recordPostedBlock;
    NSArray * _records;
    bool  _sendAllFields;
}

@property (nonatomic) bool atomic;
@property (nonatomic, retain) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic) bool oplock;
@property (nonatomic, retain) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, retain) NSMutableDictionary *recordByRequestID;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, copy) id /* block */ recordPostedBlock;
@property (nonatomic, retain) NSArray *records;
@property (nonatomic) bool sendAllFields;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (id)generateRequestOperations;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(bool)arg3 sendAllFields:(bool)arg4 clientChangeTokenData:(id)arg5;
- (int)isolationLevel;
- (int)operationType;
- (bool)oplock;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordByRequestID;
- (id)recordIDByRequestID;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id /* block */)recordPostedBlock;
- (id)records;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)sendAllFields;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setOplock:(bool)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordByRequestID:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordPostedBlock:(id /* block */)arg1;
- (void)setRecords:(id)arg1;
- (void)setSendAllFields:(bool)arg1;
- (id)zoneIDsToLock;

@end
