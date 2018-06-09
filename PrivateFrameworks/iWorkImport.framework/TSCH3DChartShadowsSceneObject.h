/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject

+ (void)invalidateShadowsForScene:(id)arg1;
+ (void)setShadowPlanePadding:(struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; } x2; })arg1 forScene:(id)arg2;

- (id)TSDShadowFromScene:(id)arg1;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })calculateShadowCameraPosition:(float)arg1 center:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg2 shadowQuality:(float)arg3 depthLimitAdjustment:(float)arg4;
- (id)effects;
- (void)getBounds:(id)arg1;
- (float)p_chartOpacityForScene:(id)arg1;
- (struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; } x2; })p_shadowPlanePaddingForScene:(id)arg1;
- (void)prerender:(id)arg1;
- (void)prerenderShadows:(id)arg1 blurslack:(float)arg2 angle:(float)arg3 quality:(float)arg4 targetFBO:(id)arg5;
- (id)propertiesForScene:(id)arg1;
- (void)render:(id)arg1;
- (void)renderShadowScene:(id)arg1;
- (void)renderShadows:(id)arg1;

@end
