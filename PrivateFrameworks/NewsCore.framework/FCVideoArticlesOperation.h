/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVideoArticlesOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    FCVideoArticlesOperationResult * _moreVideosResult;
    FCVideoArticlesOperationResult * _topVideosResult;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (retain) FCVideoArticlesOperationResult *moreVideosResult;
@property (retain) FCVideoArticlesOperationResult *topVideosResult;

- (void).cxx_destruct;
- (id /* block */)catchUpCompletionHandler;
- (id)configuration;
- (id)context;
- (id)error;
- (id)moreVideosResult;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMoreVideosResult:(id)arg1;
- (void)setTopVideosResult:(id)arg1;
- (id)topVideosResult;
- (bool)validateOperation;

@end
