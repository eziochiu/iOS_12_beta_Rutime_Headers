/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLineSceneObject : TSCH3DChartSeriesSceneObject

+ (float)chartSeriesDepth;
+ (id)chartSeriesType;
+ (struct MeshData { id x1; })createMeshForSeries:(id)arg1;
+ (bool)supportsChartSeriesDepthOffset;

- (struct EdgeDetectionParameters { bool x1; bool x2; float x3; })edgeDetectionParameters;
- (bool)shouldRenderSeries:(id)arg1;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_1_3_2; } x_1_2_1; struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_2_3_2; } x_1_2_2; } x_1_1_1[3]; } x1; }*)arg1 properties:(id)arg2 textureTiling:(id)arg3 size:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg4;

@end
