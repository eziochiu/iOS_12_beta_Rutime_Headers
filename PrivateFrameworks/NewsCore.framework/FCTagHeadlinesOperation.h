/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagHeadlinesOperation : FCOperation {
    FCCloudContext * _context;
    id /* block */  _fetchCompletionHandler;
    unsigned long long  _maxHeadlinesCount;
    NSArray * _resultHeadlines;
    NSString * _tagID;
}

@property (nonatomic, retain) FCCloudContext *context;
@property (copy) id /* block */ fetchCompletionHandler;
@property (nonatomic) unsigned long long maxHeadlinesCount;
@property (copy) NSArray *resultHeadlines;
@property (nonatomic, copy) NSString *tagID;

- (void).cxx_destruct;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)init;
- (unsigned long long)maxHeadlinesCount;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultHeadlines;
- (void)setContext:(id)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setMaxHeadlinesCount:(unsigned long long)arg1;
- (void)setResultHeadlines:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;
- (bool)validateOperation;

@end
