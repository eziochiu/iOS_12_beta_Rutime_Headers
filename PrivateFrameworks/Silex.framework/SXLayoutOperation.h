/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutOperation : NSOperation <SXLayouterDelegate> {
    id /* block */  _afterBlock;
    id /* block */  _beforeBlock;
    <SXComponentSizerEngine> * _componentSizerEngine;
    double  _constrainedWidth;
    bool  _executing;
    bool  _finished;
    SXLayoutAttributes * _layoutAttributes;
    SXLayoutBlueprint * _layoutBlueprint;
    <SXLayoutBlueprintFactory> * _layoutBlueprintFactory;
    SXLayoutDataProvider * _layoutDataProvider;
    NSString * _targetComponentIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (setter=afterLayout:, nonatomic, copy) id /* block */ afterBlock;
@property (setter=beforeLayout:, nonatomic, copy) id /* block */ beforeBlock;
@property (nonatomic, readonly) <SXComponentSizerEngine> *componentSizerEngine;
@property (nonatomic, readonly) double constrainedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool executing;
@property bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXLayoutAttributes *layoutAttributes;
@property (nonatomic, retain) SXLayoutBlueprint *layoutBlueprint;
@property (nonatomic, readonly) <SXLayoutBlueprintFactory> *layoutBlueprintFactory;
@property (nonatomic, readonly) SXLayoutDataProvider *layoutDataProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetComponentIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id /* block */)afterBlock;
- (void)afterLayout:(id /* block */)arg1;
- (id /* block */)beforeBlock;
- (void)beforeLayout:(id /* block */)arg1;
- (id)componentSizerEngine;
- (double)constrainedWidth;
- (id)createLayoutBlueprintForLayoutDataProvider:(id)arg1 documentColumnLayout:(id)arg2;
- (void)doFinishBookKeeping;
- (void)doStartBookKeeping;
- (bool)executing;
- (void)finalizeLayoutBlueprint:(id)arg1 startOffset:(struct CGPoint { double x1; double x2; })arg2;
- (bool)finished;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3 componentSizerEngine:(id)arg4 layoutBlueprintFactory:(id)arg5;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isFinishedLayoutBlueprint:(id)arg1 forLayoutDataProvider:(id)arg2;
- (bool)isValidLayoutBlueprint:(id)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2;
- (id)layoutAttributes;
- (id)layoutBlueprint;
- (id)layoutBlueprintFactory;
- (id)layoutDataProvider;
- (bool)layoutInvalidationRequiredForComponentLayout:(id)arg1;
- (void)layouter:(id)arg1 didFinishLayoutForComponent:(id)arg2 layoutBlueprint:(id)arg3 shouldContinueLayout:(bool*)arg4;
- (void)prepareLayoutBlueprint:(id)arg1;
- (void)registerComponent:(id)arg1 toLayoutBlueprint:(id)arg2 layoutDataProvider:(id)arg3 documentColumnLayout:(id)arg4;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setLayoutBlueprint:(id)arg1;
- (void)setTargetComponentIdentifier:(id)arg1;
- (void)start;
- (void)startLayoutWorkForBlueprint:(id)arg1;
- (id)targetComponentIdentifier;
- (void)updateLayoutBlueprint:(id)arg1 usingLayoutDataProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
