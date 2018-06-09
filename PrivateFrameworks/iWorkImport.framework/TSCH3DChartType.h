/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartType : TSCH2DChartType

+ (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)allAnimationFilters;

- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 barShape:(int)arg2;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFilters;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (bool)approximatesTitleAccommodationUsingLegendSize;
- (id)categoryLabelPositioner;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)columnShapeUIName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (unsigned long long)depthRatioDimension;
- (bool)isHomogeneous;
- (int)labelOrientation;
- (Class)layoutClass;
- (bool)layoutFrameShouldEncloseInfoGeometry;
- (double)maxDepthRatio;
- (double)minDepthRatio;
- (struct CGSize { double x1; double x2; })minimumChartBodySize;
- (struct CGSize { double x1; double x2; })minimumChartBodySizeForTransformingGeometry;
- (bool)needsRefinementForInwardLayout;
- (unsigned long long)presentationDimension;
- (Class)presetImagerClass;
- (id)renderers;
- (Class)repClass;
- (Class)sageGeometeryHelperClass;
- (double)sageMaxDepthRatio;
- (id)sceneWithChartInfo:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg2;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (bool)supportsAxisLabelsOrientation;
- (bool)supportsAxisLine;
- (bool)supportsBackgroundFill;
- (bool)supportsBevels;
- (bool)supportsBorderFrame;
- (bool)supportsBubbleOptions;
- (bool)supportsCalloutLines;
- (bool)supportsCategoryAxisMinorTickmarks;
- (bool)supportsColumnShape;
- (bool)supportsConnectingLines;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsIncrementalResize;
- (bool)supportsInterSetDepthGap;
- (bool)supportsMinorGridlines;
- (bool)supportsReferenceLines;
- (bool)supportsSeriesFill;
- (bool)supportsSeriesShadow;
- (bool)supportsSeriesStroke;
- (bool)supportsShadowOffset;
- (bool)supportsTickmarks;
- (bool)supportsTrendLines;
- (bool)supportsValueAxisLabelsPosition;
- (id)valueLabelPositioner;

@end
