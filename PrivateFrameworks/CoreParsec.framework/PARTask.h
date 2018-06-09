/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARTask : NSObject {
    id /* block */  _completionBlock;
    unsigned long long  _queryId;
    PARRequest * _request;
    PARSession * _session;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property unsigned long long queryId;
@property (nonatomic, retain) PARRequest *request;
@property (nonatomic) PARSession *session;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (unsigned long long)queryId;
- (id)request;
- (void)resume;
- (id)session;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setSession:(id)arg1;

@end
