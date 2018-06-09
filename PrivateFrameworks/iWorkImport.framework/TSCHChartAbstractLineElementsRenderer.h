/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAbstractLineElementsRenderer : TSCHRenderer

- (int)chunkPlane;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_adjustTransformForAADefeatInContext:(struct CGContext { }*)arg1 inTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 forSeriesShape:(struct CGPath { }*)arg3 inBodyBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)p_clipOutSymbolsInContext:(struct CGContext { }*)arg1 withTransformArray:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg2 withCount:(unsigned long long)arg3 forSeries:(id)arg4;
- (id)p_findChartRootLayoutItem:(id)arg1;
- (void)p_finishContextAfterRendering:(struct CGContext { }*)arg1 modelCache:(id)arg2 didEnableTransparencyLayer:(bool)arg3;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_renderLabelsIntoContext:(struct CGContext { }*)arg1 seriesIndex:(unsigned long long)arg2 model:(id)arg3 modelCache:(id)arg4 bodyLayoutItem:(id)arg5 valueSet:(id)arg6;
- (void)p_setupContextForRendering:(struct CGContext { }*)arg1 layerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 modelCache:(id)arg3 shadow:(id)arg4 outDidEnableTransparencyLayer:(bool*)arg5;
- (id)symbolTransformsForRenderingElements;
- (bool)useBlendModeCopyForTransparencyLayer;

@end
