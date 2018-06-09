/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXContainerComponentView : SXComponentView <SXComponentHosting, SXDragManagerDataSource> {
    NSArray * _componentViews;
    SXDragManager * _dragManager;
}

@property (nonatomic, retain) NSArray *componentViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXDragManager *dragManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addComponentView:(id)arg1;
- (bool)allowHierarchyRemoval;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (id)componentViews;
- (id)componentViewsForRole:(int)arg1 recursive:(bool)arg2;
- (id)contentViewForBehavior:(id)arg1;
- (id)description;
- (void)didApplyBehavior:(id)arg1;
- (id)dragManager;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isTransitionable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)removeComponentView:(id)arg1;
- (void)setComponentViews:(id)arg1;
- (void)setDragManager:(id)arg1;
- (double)suggestedContainerHeightForWidth:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewShouldFadeInContent;
- (bool)transitionViewUsesThumbnail;
- (id)viewForDragManager:(id)arg1;

@end
