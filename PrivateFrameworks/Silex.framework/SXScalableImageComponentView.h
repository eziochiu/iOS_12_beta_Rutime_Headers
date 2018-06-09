/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXScalableImageComponentView : SXMediaComponentView <SXDragManagerDataSource, SXFullscreenCanvasShowable, SXImageViewDelegate, SXTextSourceDataSource> {
    SXMediaViewEvent * _activeViewEvent;
    <SXFullscreenCanvasControllerFactory> * _canvasControllerFactory;
    SXDragManager * _dragManager;
    SXFullscreenCanvasController * _fullScreenCanvasController;
    UIView * _gestureView;
    SXImageResource * _imageResource;
    SXImageView * _imageView;
    <SXImageViewFactory> * _imageViewFactory;
    double  _lastKnownPinchVelocity;
    double  _lastKnownRotationVelocity;
    bool  _presentingOnFullScreenCanvas;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousContentFrame;
}

@property (nonatomic, retain) SXMediaViewEvent *activeViewEvent;
@property (nonatomic, readonly) <SXFullscreenCanvasControllerFactory> *canvasControllerFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXDragManager *dragManager;
@property (nonatomic, retain) SXFullscreenCanvasController *fullScreenCanvasController;
@property (nonatomic) UIView *gestureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageResource *imageResource;
@property (nonatomic, readonly) SXImageView *imageView;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic) double lastKnownPinchVelocity;
@property (nonatomic) double lastKnownRotationVelocity;
@property (getter=isPresentingOnFullScreenCanvas, nonatomic) bool presentingOnFullScreenCanvas;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousContentFrame;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeViewEvent;
- (id)additionsForTextSource:(id)arg1;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (id)canvasControllerFactory;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (void)createMediaViewEvent;
- (id)description;
- (void)discardContents;
- (id)documentControllerForTextSource:(id)arg1;
- (id)dragManager;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)finishMediaViewEvent;
- (void)forceFullScreen;
- (id)fullScreenCanvasController;
- (id)fullScreenCanvasController:(id)arg1 canvasViewForShowable:(id)arg2;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id)arg3;
- (bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (bool)gestureShouldBegin:(id)arg1;
- (id)gestureView;
- (id)imageResource;
- (id)imageView;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewFactory;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 canvasControllerFactory:(id)arg8;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (bool)isPresentingOnFullScreenCanvas;
- (double)lastKnownPinchVelocity;
- (double)lastKnownRotationVelocity;
- (void)layoutImageView;
- (void)loadComponent:(id)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousContentFrame;
- (void)renderContents;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (void)setActiveViewEvent:(id)arg1;
- (void)setDragManager:(id)arg1;
- (void)setFullScreenCanvasController:(id)arg1;
- (void)setGestureView:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setLastKnownPinchVelocity:(double)arg1;
- (void)setLastKnownRotationVelocity:(double)arg1;
- (void)setPresentingOnFullScreenCanvas:(bool)arg1;
- (void)setPreviousContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)submitEvents;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForTextSource:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewUsesThumbnail;
- (id)viewForDragManager:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;

@end
