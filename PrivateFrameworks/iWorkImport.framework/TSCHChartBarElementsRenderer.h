/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartBarElementsRenderer : TSCHRenderer {
    double  mHitFudgeOffset;
    unsigned long long  mHitSeriesIndex;
    unsigned long long  mHitValueIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLastDrawRect;
    bool  mResizeIsOutsideBody;
    bool  mTouchInBody;
    bool  mTouchInResize;
    bool  mVertical;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })barElementFrameForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (int)chunkPlane;
- (struct CGPath { }*)clippingPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inGroupIndex:(unsigned long long)arg2 withContext:(struct CGContext { }*)arg3 relativelyPositive:(bool)arg4 stackRects:(id)arg5;
- (void)enumerateAllElementsForSeries:(id)arg1 context:(struct CGContext { }*)arg2 forBlock:(id /* block */)arg3;
- (void)enumerateElementsForSeries:(id)arg1 withValueSet:(id)arg2 context:(struct CGContext { }*)arg3 forBlock:(id /* block */)arg4;
- (void)enumerateRenderingElementsForSeries:(id)arg1 context:(struct CGContext { }*)arg2 forBlock:(id /* block */)arg3;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;
- (void)p_drawBars:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_drawLabels:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_drawLayer:(struct CGLayer { }*)arg1 intoContext:(struct CGContext { }*)arg2 contextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 groupIndex:(unsigned long long)arg4 relativelyPositive:(bool)arg5 stackRects:(id)arg6;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)p_strokeForSeriesIndex:(unsigned long long)arg1 withContext:(struct CGContext { }*)arg2;
- (void)renderElementStroke:(id)arg1 intoContext:(struct CGContext { }*)arg2 usingElementRenderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inGroupIndex:(unsigned long long)arg4 relativelyPositive:(bool)arg5 stackRects:(id)arg6;
- (void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext { }*)arg1 stroke:(id)arg2 clippingPath:(struct CGPath { }*)arg3 elementRenderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingElementFrameForBarElementFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 groupIndex:(unsigned long long)arg2 modelCache:(id)arg3 stroke:(id)arg4 viewScale:(double)arg5 contextInfo:(struct { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })arg6 returningFillRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7 strokeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg8;
- (struct CGPath { }*)roundedCornerPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shouldRoundOuterEndOnly:(bool)arg2 relativelyPositive:(bool)arg3;
- (id)stackRectsWithContext:(struct CGContext { }*)arg1;
- (bool)supportsSeparateLabelsRenderPass;

@end
