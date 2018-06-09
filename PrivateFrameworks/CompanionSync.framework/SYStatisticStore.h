/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStatisticStore : NSObject <NSFilePresenter> {
    struct sqlite3_stmt { } * _addErrorIncoming;
    struct sqlite3_stmt { } * _addProcessingTimeIncoming;
    struct sqlite3 { } * _db;
    struct sqlite3_stmt { } * _insertIncoming;
    struct sqlite3_stmt { } * _insertOutgoing;
    long long  _lastIncomingRowID;
    struct sqlite3_stmt { } * _logFileActivity;
    struct sqlite3_stmt { } * _markCompleteIncoming;
    NSObject<OS_dispatch_queue> * _operations_queue;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _preemption_queue;
    NSOperationQueue * _presenterOperationQueue;
    struct sqlite3_stmt { } * _requestAcked;
    struct sqlite3_stmt { } * _reserveRowID;
    struct sqlite3_stmt { } * _responseReceived;
    struct sqlite3_stmt { } * _timestampForID;
    struct sqlite3_stmt { } * _updateFileOutgoing;
    struct sqlite3_stmt { } * _updateOutgoing;
    struct sqlite3_stmt { } * _updateOutgoingIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)unpackMessageData:(id)arg1;

- (void).cxx_destruct;
- (id)_LOCKED_allServiceNames;
- (bool)_LOCKED_pruneFileTransferLogForServices:(id)arg1;
- (bool)_LOCKED_pruneMessageLogForServices:(id)arg1;
- (int)_closeDB;
- (void)_ensureCorrectFileOwnership:(id)arg1;
- (double)_getMachTimestamp;
- (int)_getSchemaVersion;
- (void)_initializeFilePresentation;
- (id)_keySetForMessageLogTable;
- (void)_letGoForUnitTests:(id)arg1;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)_onQueueSync:(id /* block */)arg1;
- (void)_openDB;
- (bool)_openDBFile:(bool)arg1;
- (id)_openDBIfNecessary;
- (void)_pruneOldData;
- (bool)_tableEmpty:(id)arg1;
- (id)_unpackMessageData:(id)arg1;
- (id)_unpackMetadata:(id)arg1;
- (void)_unpackPBRequest:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3;
- (void)_unpackPBResponse:(id)arg1 forMessageID:(unsigned short)arg2 intoDictionary:(id)arg3;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg1;
- (void)assignIdentifier:(id)arg1 toOutgoingMessage:(id)arg2;
- (void)confirmDeliveryOfOutgoingFileTransfer:(id)arg1;
- (void)confirmDeliveryOfOutgoingMessage:(id)arg1;
- (struct sqlite3 { }*)dbRef;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)markLastIncomingMessageComplete;
- (id)operationQ;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)recordIncomingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 forService:(id)arg4;
- (void)recordIncomingMessage:(id)arg1 forService:(id)arg2;
- (void)recordOutgoingFileTransferAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 error:(id)arg4 forService:(id)arg5;
- (void)recordOutgoingMessage:(id)arg1 forService:(id)arg2;
- (unsigned long long)rowIDForPartialMessage:(id)arg1;
- (void)setFileTransferIdentifier:(id)arg1 forOutgoingMessagesWithRowIDs:(id)arg2;
- (void)updateLastIncomingMessageWithError:(id)arg1;
- (void)updateLastIncomingMessageWithProcessingTime:(double)arg1;
- (void)updateOutgoingFileTransferWithIdentifier:(id)arg1 sentSuccessfully:(bool)arg2 error:(id)arg3;
- (void)updateOutgoingMessageWithIdentifier:(id)arg1 didReceiveResponse:(bool)arg2 error:(id)arg3;
- (void)updateOutgoingMessageWithIdentifier:(id)arg1 forService:(id)arg2 sentSuccessfully:(bool)arg3 sendError:(id)arg4;

@end
