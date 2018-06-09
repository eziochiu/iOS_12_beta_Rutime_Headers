/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartLayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _legendModelGeometryFrame;
    TSCHChartInfo * mChartInfo;
    struct { 
        bool forceOmitLegend; 
        bool forceOmitTitle; 
        bool forceOmitAxisTitle; 
        bool forceOmitLabelPlacement; 
        bool forceTitleAtTop; 
        bool enable3DTightBounds; 
        bool enable3DScaledDepthBounds; 
        long long maxDepthRatioType; 
        unsigned long long max3DLimitingSeries; 
    }  mLayoutSettings;
    bool  mNeedsLayout;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chartAreaFrame;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chartBodyFrame;
@property (readonly) TSCHChartInfo *chartInfo;
@property unsigned long long dataSetIndex;
@property struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; } layoutSettings;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } legendDrawingFrame;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } legendFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } legendGeometryFrame;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } legendModelGeometryFrame;
@property (readonly) TSCHChartModel *model;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outerLayoutFrame;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } outerShadowFrame;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleFrame;

+ (id)chartLayoutWithChartInfo:(id)arg1;
+ (struct CGSize { double x1; double x2; })legendSizeForChartInfo:(id)arg1 initialWidth:(double)arg2;
+ (id)propertiesThatInvalidateLayout;

- (void).cxx_destruct;
- (void)beginDynamicOperation;
- (void)beginResize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForResize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartAreaFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartBodyFrame;
- (id)chartInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertChartLayoutSpaceRectToNaturalSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertChartLayoutSpaceToNaturalSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalSpaceRectToChartLayoutSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertNaturalSpaceToChartLayoutSpace:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)dataSetIndex;
- (void)endDynamicOperation;
- (void)endResize;
- (id)hitChartElements:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidate;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (bool)isValid;
- (void)layoutForChartAreaSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutForChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutForCircumscribingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutForResizingSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)layoutFrameShouldEncloseInfoGeometry;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })layoutSettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendDrawingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendGeometryFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendModelGeometryFrame;
- (id)model;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerLayoutFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerShadowFrame;
- (void)processChanges:(id)arg1;
- (id)renderersWithRep:(id)arg1;
- (void)setDataSetIndex:(unsigned long long)arg1;
- (void)setForceOmitLabelPlacement:(bool)arg1;
- (void)setForceOmitLegend:(bool)arg1;
- (void)setForceTitleAtTop:(bool)arg1;
- (void)setLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg1;
- (void)setLegendGeometryFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToConvertChartLayoutToNatural;

@end
