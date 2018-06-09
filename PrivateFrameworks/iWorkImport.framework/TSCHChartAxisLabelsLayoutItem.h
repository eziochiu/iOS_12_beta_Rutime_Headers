/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisLabelsLayoutItem : TSCHChartLayoutItem {
    float  mAngleInDegrees;
    float  mAngleInRadians;
    unsigned long long  mStride;
}

@property (nonatomic, readonly) unsigned long long stride;

- (struct CGPoint { double x1; double x2; })axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 unrotatedSize:(struct CGSize { double x1; double x2; })arg4 unitSpaceValue:(double)arg5;
- (id)axisLayoutItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (void)clearAll;
- (struct CGPoint { double x1; double x2; })labelAnchorForPosition:(int)arg1 degrees:(float)arg2;
- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;
- (id)labelsLayoutItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutSpaceRectForAllLabels;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (unsigned long long)numberOfLabelsForAxis:(id)arg1;
- (id)p_axisFromLayoutItem;
- (unsigned long long)p_computeAutoStrideInLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)p_overrideLabelStringForHitTestingEmptyLabel;
- (void)p_rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 andTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 inLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forIndex:(unsigned long long)arg4 paragraphStyle:(id)arg5;
- (long long)p_smallestSecondValueLabelIndex:(long long)arg1 start:(long long)arg2 end:(long long)arg3 inLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 paragraphStyle:(id)arg5;
- (long long)p_smallestSecondValueLabelIndex:(long long)arg1 start:(long long)arg2 end:(long long)arg3 inLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 paragraphStyle:(id)arg5 isTop:(bool)arg6;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingLabel:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 usingString:(id)arg6 stride:(unsigned long long*)arg7 useAngle:(bool)arg8;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2;
- (id)selectionPathLabelType;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showLabelsForAxis:(id)arg1;
- (unsigned long long)stride;
- (unsigned long long)strideInLayoutArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabel:(unsigned long long)arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabel:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabel:(unsigned long long)arg1 usingString:(id)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 useAngle:(bool)arg5;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;

@end
