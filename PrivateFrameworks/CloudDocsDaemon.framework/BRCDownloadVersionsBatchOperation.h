/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {
    id /* block */  _perDownloadCompletionBlock;
    NSMutableDictionary * _readers;
}

@property (copy) id /* block */ perDownloadCompletionBlock;

- (void).cxx_destruct;
- (id)actionPrettyName;
- (void)addDownload:(id)arg1;
- (void)addReaderID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelReaderID:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1 forNonLocalVersion:(bool)arg2;
- (void)mainWithTransfers:(id)arg1;
- (id /* block */)perDownloadCompletionBlock;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)setPerDownloadCompletionBlock:(id /* block */)arg1;
- (id)transferredObjectsPrettyName;

@end
