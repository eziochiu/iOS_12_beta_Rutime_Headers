/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/QueryPredictionInternal.framework/QueryPredictionInternal
 */

@interface _QPQueryRanker : NSObject {
    _QPQueryRankerConfiguration * _configuration;
    <_QPQueryRankerDelegate> * _delegate;
    _QPQueryRankerParameters * _parameters;
    <_DKKnowledgeQuerying><_DKKnowledgeDeleting> * _store;
}

@property <_QPQueryRankerDelegate> *delegate;
@property (retain) _QPQueryRankerParameters *parameters;
@property (retain) <_DKKnowledgeQuerying><_DKKnowledgeDeleting> *store;

+ (id /* block */)functionFromExpressionString:(id)arg1;
+ (id)rankerWithParameters:(id)arg1;
+ (id)rankerWithParameters:(id)arg1 store:(id)arg2;

- (void).cxx_destruct;
- (id)_fetchQueryEvents;
- (id)_rankForQueryEvents:(id)arg1;
- (id)delegate;
- (bool)deleteAllQueryEvents;
- (id)initWithParameters:(id)arg1 store:(id)arg2;
- (id)parameters;
- (id)rank;
- (void)setDelegate:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setupConfiguration;
- (id)store;

@end
