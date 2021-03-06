/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXCollectionLayouter : NSObject <SXLayouter> {
    SXContainerComponentBlueprint * _containerComponentBlueprint;
    <SXLayouterDelegate> * _delegate;
    SXLayouterFactory * _layouterFactory;
}

@property (nonatomic, readonly) SXContainerComponentBlueprint *containerComponentBlueprint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXLayouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXLayouterFactory *layouterFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childColumnLayoutForRowLayout:(id)arg1 display:(id)arg2 collectionContainerBlueprint:(id)arg3 childContainerComponentBlueprint:(id)arg4 documentColumnLayout:(id)arg5;
- (id)containerComponentBlueprint;
- (id)delegate;
- (id)initWithContainerComponent:(id)arg1 layouterFactory:(id)arg2;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 layoutAttributes:(id)arg3 shouldContinue:(bool*)arg4;
- (id)layouterFactory;
- (void)setDelegate:(id)arg1;

@end
