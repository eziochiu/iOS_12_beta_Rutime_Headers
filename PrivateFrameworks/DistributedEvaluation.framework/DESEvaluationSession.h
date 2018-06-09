/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DESEvaluationSession : NSObject <NSURLSessionDelegate, PARSessionDelegate> {
    NSURL * _baseURL;
    id /* block */  _dataFetchBlock;
    bool  _enableOriginReturnRoute;
    bool  _enableParsecReturnRoute;
    <DESRecipeEvaluation> * _evaluator;
    NSString * _localeIdentifier;
    PARSession * _parSession;
    NSURL * _postbackBaseURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _recordType;
    NSDictionary * _records;
    NSURLSession * _session;
    bool  _skipPolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_attemptRecipeMatchWithRecipes:(id)arg1 keepGoing:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_downloadAttachments:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchPolicyWithCompletion:(id /* block */)arg1;
- (void)_fetchRecipe:(id)arg1 recordUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleRecipeResponse:(id)arg1 recipeId:(id)arg2 recordUUID:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleTelemetry:(id)arg1;
- (bool)_originReturnRouteEnabled;
- (bool)_parsecReturnRouteEnabled;
- (void)_runJSONGETRequestWithPath:(id)arg1 completion:(id /* block */)arg2;
- (void)_runJSONPOSTRequest:(id)arg1 URL:(id)arg2 completion:(id /* block */)arg3;
- (void)_runJSONPOSTRequest:(id)arg1 path:(id)arg2 completion:(id /* block */)arg3;
- (void)_sendRecipeResponseForRecipeId:(id)arg1 result:(id)arg2 parametersUsed:(id)arg3 duration:(double)arg4 error:(id)arg5 completion:(id /* block */)arg6;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 deviceIdentifier:(id)arg5 evaluator:(id)arg6 protocolClass:(Class)arg7 dataFetchBlock:(id /* block */)arg8;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 evaluator:(id)arg5 dataFetchBlock:(id /* block */)arg6;
- (id)initWithBaseURL:(id)arg1 records:(id)arg2 recordType:(id)arg3 localeIdentifier:(id)arg4 evaluator:(id)arg5 protocolClass:(Class)arg6 dataFetchBlock:(id /* block */)arg7;
- (void)invalidate;
- (void)postRecipeResponseJSONObject:(id)arg1 recipeId:(id)arg2 completion:(id /* block */)arg3;
- (void)runWithCompletion:(id /* block */)arg1;
- (id)session;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)session:(id)arg1 didDeleteResource:(id)arg2;
- (void)session:(id)arg1 didDownloadResource:(id)arg2;

@end
