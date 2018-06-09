/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTrendingOperation : FCOperation {
    id /* block */  _catchUpCompletionHandler;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    NSError * _error;
    NSArray * _headlines;
}

@property (copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (retain) NSError *error;
@property (copy) NSArray *headlines;

- (void).cxx_destruct;
- (id /* block */)catchUpCompletionHandler;
- (id)configuration;
- (id)context;
- (id)error;
- (id)headlines;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (bool)validateOperation;

@end
