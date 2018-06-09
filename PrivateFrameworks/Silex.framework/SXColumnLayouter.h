/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXColumnLayouter : NSObject <SXLayouter> {
    <SXLayouterDelegate> * _delegate;
    NSMutableDictionary * _intersectionCache;
    SXLayouterFactory * _layouterFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXLayouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *intersectionCache;
@property (nonatomic, readonly) SXLayouterFactory *layouterFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analyzeSnapLinesForLayoutBlueprint:(id)arg1;
- (bool)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (struct CGPoint { double x1; double x2; })calculatePositionForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3;
- (struct CGSize { double x1; double x2; })calculateSizeForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 dependencyResolver:(id)arg4;
- (id)columnStackForLayoutBlueprint:(id)arg1 columnLayout:(id)arg2;
- (bool)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2;
- (void)createDependenciesForLayoutBlueprint:(id)arg1 columnStack:(id)arg2 inDependencyResolver:(id)arg3;
- (id)delegate;
- (double)factorForLayoutAttribute:(int)arg1;
- (id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2;
- (id)initWithLayouterFactory:(id)arg1;
- (id)intersectionCache;
- (bool)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (int)layoutAttributeForAnchor:(long long)arg1;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 layoutAttributes:(id)arg3 shouldContinue:(bool*)arg4;
- (id)layouterFactory;
- (void)setDelegate:(id)arg1;
- (id)sortComponentDependencies:(id)arg1 forBlueprint:(id)arg2;
- (bool)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4;

@end