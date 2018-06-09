/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataBubbleShapeLayer : CATransformLayer <TSCHMultiDataElementShapeLayer> {
    double  _viewScale;
    TSDFill * mFill;
    CALayer * mImageLayer;
    CAShapeLayer * mMaskLayer;
    CAShapeLayer * mStrokeLayer;
    double  mViewScale;
}

@property (nonatomic, retain) TSDFill *fill;
@property (nonatomic) double viewScale;

- (bool)aboveIntercept;
- (id)chartRep;
- (id)currentValueLayer;
- (void)dealloc;
- (id)fill;
- (id)init;
- (void)p_addAnimationsForUpdatingPath:(struct CGPath { }*)arg1 position:(struct CGPoint { double x1; double x2; })arg2 toAnimationInfo:(id)arg3 onLayer:(id)arg4;
- (void)p_addLayerAnimationsForUpdatingImage:(struct CGImage { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 position:(struct CGPoint { double x1; double x2; })arg3 toAnimationInfo:(id)arg4;
- (id)p_bubbleElementsRenderer;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_renderingSymbolElementTransform;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3;
- (void)setViewScale:(double)arg1;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3;
- (void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2;
- (double)viewScale;

@end
