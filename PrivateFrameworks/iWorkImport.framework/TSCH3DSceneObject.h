/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneObject : NSObject

+ (id)renderCacheKey;
+ (id)sceneObject;
+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;
+ (double)textRotationForChartInfo:(id)arg1;

- (bool)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2;
- (bool)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2;
- (struct EdgeDetectionParameters { bool x1; bool x2; float x3; })edgeDetectionParameters;
- (void)getBounds:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)prerender:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)render:(id)arg1;
- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1;
- (void)statePreservedGetSceneObjectElementsBounds:(id)arg1;
- (void)statePreservedGetSelectionKnobsPositions:(id)arg1;
- (void)statePreservedPostrender:(id)arg1;
- (void)statePreservedPrerender:(id)arg1;
- (void)statePreservedPrimeRenderCaches:(id)arg1;
- (void)statePreservedRayPick:(id)arg1;
- (void)statePreservedRender:(id)arg1;

@end
