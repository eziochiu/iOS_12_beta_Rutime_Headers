/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REDuetQuery : NSObject <REDuetKnowledgeQuery> {
    id  _query;
    id /* block */  _transformBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id query;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transformBlock;

- (void).cxx_destruct;
- (id)query;
- (void)setQuery:(id)arg1;
- (void)setTransformBlock:(id /* block */)arg1;
- (id /* block */)transformBlock;

@end
