/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAddBoundsSceneObject : TSCH3DSceneObject

+ (id)p_rotationBoundsModeForScene:(id)arg1;
+ (id)p_setBoundsModeClass:(Class)arg1 forScene:(id)arg2;
+ (void)setDepthBoundsForScene:(id)arg1;
+ (void)setRadialBoundsFactor:(float)arg1 forScene:(id)arg2;
+ (void)setXYRotationBoundsForScene:(id)arg1;
+ (void)setYRotationBoundsForScene:(id)arg1;

- (void)getBounds:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)render:(id)arg1;

@end
