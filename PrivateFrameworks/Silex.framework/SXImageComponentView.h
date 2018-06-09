/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageComponentView : SXMediaComponentView <SXDragManagerDataSource, SXImageViewDelegate, UIGestureRecognizerDelegate> {
    SXAnimatedImageController * _animatedImageController;
    SXDragManager * _dragManager;
    SXImageView * _imageView;
    <SXImageViewFactory> * _imageViewFactory;
}

@property (nonatomic, retain) SXAnimatedImageController *animatedImageController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SXDragManager *dragManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXImageView *imageView;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)analyticsMediaType;
- (id)animatedImageController;
- (id)contentViewForBehavior:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)discardContents;
- (id)dragManager;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)imageResource;
- (id)imageView;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2;
- (id)imageViewFactory;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7;
- (void)layoutImageView;
- (void)loadComponent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)renderContents;
- (void)setAnimatedImageController:(id)arg1;
- (void)setDragManager:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (bool)transitionViewUsesThumbnail;
- (id)viewForDragManager:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;

@end
