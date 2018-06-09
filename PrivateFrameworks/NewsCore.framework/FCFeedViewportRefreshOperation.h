/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportRefreshOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    FCFeedDescriptor * _feedDescriptor;
    id /* block */  _refreshCompletionHandler;
    FCFeedViewportDiff * _resultDiff;
    FCFeedViewport * _resultViewport;
    FCFeedViewport * _viewport;
}

@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) id /* block */ refreshCompletionHandler;
@property (nonatomic, retain) FCFeedViewportDiff *resultDiff;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)configuration;
- (id)feedDescriptor;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)refreshCompletionHandler;
- (id)resultDiff;
- (id)resultViewport;
- (void)setConfiguration:(id)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setRefreshCompletionHandler:(id /* block */)arg1;
- (void)setResultDiff:(id)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setViewport:(id)arg1;
- (bool)validateOperation;
- (id)viewport;

@end
