/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentView : UIView <STTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionDataSource, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _absoluteFrame;
    bool  _allowViewHierarchyRemoval;
    <SXAnalyticsReporting> * _analyticsReporting;
    bool  _animationsAndBehaviorsEnabled;
    <SXComponent> * _component;
    SXComponentExposureEvent * _componentExposureEvent;
    SXComponentExposureMonitor * _componentExposureMonitor;
    <SXComponentHosting> * _componentHost;
    unsigned long long  _componentIndex;
    <SXComponentLayout> * _componentLayout;
    SXComponentStyle * _componentStyle;
    <SXComponentStyleRenderer> * _componentStyleRenderer;
    <SXComponentStyleRendererFactory> * _componentStyleRendererFactory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    SXColumnLayout * _documentColumnLayout;
    SXDocumentController * _documentController;
    SXFillView * _fillView;
    bool  _hasAnimation;
    bool  _hasBehaviors;
    bool  _hasComponentStyle;
    bool  _hasRenderedContents;
    UIView * _highlightView;
    bool  _highlighted;
    bool  _isDraggable;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalFrame;
    struct { 
        bool size; 
        bool position; 
    }  _presentationChanges;
    <SXPresentationDelegate> * _presentationDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentationFrame;
    long long  _presentationState;
    bool  _requiresThoroughFrameCalculations;
    SXViewport * _viewport;
    long long  _visibilityState;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } absoluteFrame;
@property (nonatomic) bool allowViewHierarchyRemoval;
@property (nonatomic, readonly) <SXAnalyticsReporting> *analyticsReporting;
@property (nonatomic) bool animationsAndBehaviorsEnabled;
@property (nonatomic, readonly) <SXComponent> *component;
@property (nonatomic, retain) SXComponentExposureEvent *componentExposureEvent;
@property (nonatomic, retain) SXComponentExposureMonitor *componentExposureMonitor;
@property (nonatomic) <SXComponentHosting> *componentHost;
@property (nonatomic) unsigned long long componentIndex;
@property (nonatomic, readonly) <SXComponentLayout> *componentLayout;
@property (nonatomic, retain) SXComponentStyle *componentStyle;
@property (nonatomic, readonly) <SXComponentStyleRenderer> *componentStyleRenderer;
@property (nonatomic, readonly) <SXComponentStyleRendererFactory> *componentStyleRendererFactory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXColumnLayout *documentColumnLayout;
@property (nonatomic, readonly) SXDocumentController *documentController;
@property (nonatomic) SXFillView *fillView;
@property (nonatomic) bool hasAnimation;
@property (nonatomic) bool hasBehaviors;
@property (nonatomic) bool hasComponentStyle;
@property (nonatomic, readonly) bool hasRenderedContents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *highlightView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) bool isDraggable;
@property (nonatomic, readonly) bool isTransitionable;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalFrame;
@property (nonatomic) struct { bool x1; bool x2; } presentationChanges;
@property (nonatomic, readonly) <SXPresentationDelegate> *presentationDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationFrame;
@property (nonatomic) long long presentationState;
@property (nonatomic) bool requiresThoroughFrameCalculations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionContainerFrame;
@property (nonatomic, readonly) UIView *transitionContainerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionContentFrame;
@property (nonatomic, readonly) UIView *transitionContentView;
@property (nonatomic, readonly) bool transitionViewIsVisible;
@property (nonatomic, readonly) bool transitionViewShouldFadeInContent;
@property (nonatomic, readonly) bool transitionViewUsesThumbnail;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionVisibleFrame;
@property (nonatomic, readonly) SXViewport *viewport;
@property (nonatomic) long long visibilityState;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFrame;
- (bool)allowHierarchyRemoval;
- (bool)allowViewHierarchyRemoval;
- (id)analyticsReporting;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (bool)animationsAndBehaviorsEnabled;
- (void)assistiveTechnologyStatusDidChange;
- (id)classification;
- (id)component;
- (id)componentExposureEvent;
- (id)componentExposureMonitor;
- (id)componentHost;
- (unsigned long long)componentIndex;
- (id)componentLayout;
- (id)componentStyle;
- (id)componentStyleRenderer;
- (id)componentStyleRendererFactory;
- (void)configure;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentViewForBehavior:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didApplyBehavior:(id)arg1;
- (void)didMoveToWindow;
- (void)discardContents;
- (id)documentColumnLayout;
- (id)documentController;
- (id)fillView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureShouldBegin:(id)arg1;
- (bool)hasAnimation;
- (bool)hasBehaviors;
- (bool)hasComponentStyle;
- (bool)hasRenderedContents;
- (id)highlightView;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDraggable;
- (bool)isHighlighted;
- (bool)isTransitionable;
- (void)loadComponent:(id)arg1;
- (void)monitorComponentExposureIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (struct { bool x1; bool x2; })presentationChanges;
- (id)presentationDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationFrame;
- (long long)presentationState;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)renderContents;
- (void)reportComponentExposureEvent;
- (bool)requiresThoroughFrameCalculations;
- (void)restoreBehavior;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAllowViewHierarchyRemoval:(bool)arg1;
- (void)setAnimationsAndBehaviorsEnabled:(bool)arg1;
- (void)setComponentExposureEvent:(id)arg1;
- (void)setComponentExposureMonitor:(id)arg1;
- (void)setComponentHost:(id)arg1;
- (void)setComponentIndex:(unsigned long long)arg1;
- (void)setComponentStyle:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDocumentColumnLayout:(id)arg1;
- (void)setFillView:(id)arg1;
- (void)setHasAnimation:(bool)arg1;
- (void)setHasBehaviors:(bool)arg1;
- (void)setHasComponentStyle:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOriginalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationChanges:(struct { bool x1; bool x2; })arg1;
- (void)setPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setRequiresThoroughFrameCalculations:(bool)arg1;
- (void)setVisibilityState:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContainerFrame;
- (id)transitionContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewIsVisible;
- (bool)transitionViewShouldFadeInContent;
- (bool)transitionViewUsesThumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionVisibleFrame;
- (void)updateAllowHierarchyRemovalWithComponent:(id)arg1 componentStyle:(id)arg2;
- (id)viewport;
- (long long)visibilityState;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)willPresentComponent;

@end
