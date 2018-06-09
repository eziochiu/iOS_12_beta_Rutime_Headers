/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictions.framework/SearchToSharePredictions
 */

@interface SGQPClient : NSObject <SGQPSearchToShareInternalToolProtocol, SGQPSearchToShareProtocol> {
    NSXPCInterface * _interface;
    NSString * _machServiceName;
    Protocol * _protocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientForInternalTool;
+ (id)clientForSearchToShare;

- (void).cxx_destruct;
- (void)addMessageToConversation:(id)arg1 withContent:(id)arg2 isSent:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)assetInfoWithCompletion:(id /* block */)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEndSearch:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didEngageResult:(id)arg1;
- (void)didEngageResult:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageSuggestion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didStartSearch:(id)arg1;
- (void)didStartSearch:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;
- (void)queryPredictionsForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)rankedCategoriesForConversation:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)remoteProxyObjectWithErrorHandler:(id /* block */)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendCustomFeedback:(id)arg1 withCompletion:(id /* block */)arg2;

@end
