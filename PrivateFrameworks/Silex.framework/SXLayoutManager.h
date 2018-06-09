/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutManager : NSObject <SXLayoutManager> {
    SXLayoutOperation * _currentLayoutOperation;
    <SXLayoutManagerDelegate> * _delegate;
    SXLayoutBlueprint * _lastLayoutBlueprint;
    <SXLayoutOperationFactory> * _layoutOperationFactory;
    NSOperationQueue * _layoutOperationQueue;
    NSMutableArray * _postProcessors;
    NSMutableArray * _preProcessors;
    NSString * _targetComponentIdentifier;
}

@property (nonatomic, retain) SXLayoutOperation *currentLayoutOperation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXLayoutManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXLayoutBlueprint *lastLayoutBlueprint;
@property (nonatomic, readonly) <SXLayoutOperationFactory> *layoutOperationFactory;
@property (nonatomic, readonly) NSOperationQueue *layoutOperationQueue;
@property (nonatomic, readonly) NSMutableArray *postProcessors;
@property (nonatomic, readonly) NSMutableArray *preProcessors;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetComponentIdentifier;

- (void).cxx_destruct;
- (void)addProcessor:(id)arg1 type:(unsigned long long)arg2;
- (id)currentLayoutOperation;
- (id)delegate;
- (void)finalizeLayoutForLayoutOperation:(id)arg1;
- (id)initWithLayoutOperationFactory:(id)arg1;
- (id)lastLayoutBlueprint;
- (void)layoutForAttributes:(id)arg1 dataProvider:(id)arg2;
- (void)layoutForAttributes:(id)arg1 existingLayoutBlueprint:(id)arg2 dataProvider:(id)arg3;
- (id)layoutOperationFactory;
- (id)layoutOperationQueue;
- (id)postProcessors;
- (id)preProcessors;
- (void)removeProcessor:(id)arg1 type:(unsigned long long)arg2;
- (void)setCurrentLayoutOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTargetComponentIdentifier:(id)arg1;
- (id)targetComponentIdentifier;

@end
