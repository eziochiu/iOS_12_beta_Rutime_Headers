/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStackedAreaSceneObject : TSCH3DChartAreaSceneObject

+ (float)chartSeriesDepth;
+ (float)chartSeriesPolygonOffset;
+ (id)chartSeriesType;
+ (float)depthLimitFactorForSeriesCount:(long long)arg1 maxLimitingSeries:(long long)arg2;
+ (bool)supportsChartSeriesDepthOffset;

- (float)depthForScene:(id)arg1;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x1; struct RenderElementInfo {} *x2; struct __compressed_pair<TSCH3D::RenderElementInfo *, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x_3_1_1; } x3; }*)arg1 pipeline:(id)arg2;
- (bool)transparencyDepthMask;

@end
