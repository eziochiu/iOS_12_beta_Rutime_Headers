/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTypeDonut3D : TSCH3DChartType

- (bool)approximatesTitleAccommodationUsingLegendSize;
- (id)categoryLabelPositioner;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 documentRoot:(id)arg6 shouldCache:(bool*)arg7;
- (id)init;
- (bool)supportsBevels;
- (bool)supportsGroupedShadows;
- (id)userInterfaceName;
- (long long)userInterfaceTag;
- (id)valueLabelPositioner;

@end
