/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint {
    <NNMKFetchesSyncServiceClientDelegate> * _delegate;
}

@property (nonatomic) <NNMKFetchesSyncServiceClientDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (id)notifyInitialSyncFinished:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)requestContent:(id)arg1 highPriority:(bool)arg2;
- (id)requestFetch:(id)arg1;
- (id)requestFullSync:(id)arg1;
- (id)requestHaltSync:(id)arg1;
- (void)requestMoreMessagesForConversation:(id)arg1;
- (id)requestMoreMessagesInBatch:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end
