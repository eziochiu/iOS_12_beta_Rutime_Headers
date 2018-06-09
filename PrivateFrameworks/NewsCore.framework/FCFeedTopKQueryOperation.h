/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTopKQueryOperation : FCOperation {
    <FCContentContext> * _contentContext;
    NSString * _feedID;
    id /* block */  _queryCompletionHandler;
    FCFeedRange * _range;
    NSError * _resultError;
    NSArray * _resultFeedItems;
    unsigned long long  _topK;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) NSString *feedID;
@property (nonatomic, copy) id /* block */ queryCompletionHandler;
@property (nonatomic, retain) FCFeedRange *range;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSArray *resultFeedItems;
@property (nonatomic) unsigned long long topK;

- (void).cxx_destruct;
- (id)contentContext;
- (id)feedID;
- (id)initWithContext:(id)arg1 feedID:(id)arg2 range:(id)arg3 topK:(unsigned long long)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)queryCompletionHandler;
- (id)range;
- (id)resultError;
- (id)resultFeedItems;
- (void)setContentContext:(id)arg1;
- (void)setFeedID:(id)arg1;
- (void)setQueryCompletionHandler:(id /* block */)arg1;
- (void)setRange:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultFeedItems:(id)arg1;
- (void)setTopK:(unsigned long long)arg1;
- (unsigned long long)topK;

@end
