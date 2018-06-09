/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    <FCChannelProviding> * _topStoriesChannel;
    FCTopStoriesOperationResult * _topStoriesResult;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) <FCChannelProviding> *topStoriesChannel;
@property (retain) FCTopStoriesOperationResult *topStoriesResult;

- (void).cxx_destruct;
- (void)_checkShouldShowTopStoriesWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)catchUpCompletionHandler;
- (id)configuration;
- (id)context;
- (id)error;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setTopStoriesChannel:(id)arg1;
- (void)setTopStoriesResult:(id)arg1;
- (id)topStoriesChannel;
- (id)topStoriesResult;
- (bool)validateOperation;

@end
