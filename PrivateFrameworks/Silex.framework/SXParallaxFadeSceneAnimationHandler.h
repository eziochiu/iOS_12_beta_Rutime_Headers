/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler {
    double  _alphaDistance;
    unsigned long long  _attachmentType;
    SXComponentView * _headerComponentView;
    UIView * _overlayView;
    double  _scrollDistance;
}

@property (nonatomic) double alphaDistance;
@property (nonatomic) unsigned long long attachmentType;
@property (nonatomic, retain) SXComponentView *headerComponentView;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic) double scrollDistance;

- (void).cxx_destruct;
- (double)alphaDistance;
- (unsigned long long)attachmentType;
- (id)componentViewToAnimate;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)finishAnimation;
- (id)headerComponentView;
- (id)overlayView;
- (void)prepareAnimation;
- (double)scrollDistance;
- (void)setAlphaDistance:(double)arg1;
- (void)setAttachmentType:(unsigned long long)arg1;
- (void)setHeaderComponentView:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setScrollDistance:(double)arg1;
- (bool)shouldFinishAtEndOfScrollView;
- (void)startAnimation;
- (void)updateAnimationWithFactor:(double)arg1;

@end
