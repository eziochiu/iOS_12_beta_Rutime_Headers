/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTransferBatchOperation : _BRCOperation <BRCOperationSubclass> {
    id /* block */  _didProgressBlock;
    unsigned long long  _doneSize;
    NSMutableDictionary * _entriesByRecordID;
    NSMutableDictionary * _entriesBySecondaryRecordID;
    NSMutableDictionary * _entriesByTransferID;
    unsigned long long  _itemsCount;
    NSObject<OS_dispatch_group> * _pendingGroup;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _totalSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ didProgressBlock;
@property unsigned long long doneSize;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long itemsCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *pendingGroup;
@property (readonly) Class superclass;
@property unsigned long long totalSize;

- (void).cxx_destruct;
- (void)_addTransfer:(id)arg1;
- (void)_cancelTransferID:(id)arg1;
- (void)_finishedTransfer:(id)arg1 error:(id)arg2;
- (id)_finishedTransferForRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_setProgress:(double)arg1 forTransfer:(id)arg2;
- (id)actionPrettyName;
- (void)addAliasItem:(id)arg1 toTransferWithID:(id)arg2;
- (void)addTransfer:(id)arg1;
- (void)cancelTransferID:(id)arg1;
- (id)createActivity;
- (id /* block */)didProgressBlock;
- (unsigned long long)doneSize;
- (id)fetchOperationForTransfers:(id)arg1 traceCode:(int)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)finishedTransferForRecord:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
- (unsigned long long)itemsCount;
- (void)main;
- (void)mainWithTransfers:(id)arg1;
- (id)pendingGroup;
- (double)progressForTransferID:(id)arg1;
- (void)sendBatchProgressedCallback;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)setDidProgressBlock:(id /* block */)arg1;
- (void)setDoneSize:(unsigned long long)arg1;
- (void)setProgress:(double)arg1 forRecordID:(id)arg2;
- (void)setTotalSize:(unsigned long long)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (unsigned long long)totalSize;
- (id)transferredObjectsPrettyName;

@end
