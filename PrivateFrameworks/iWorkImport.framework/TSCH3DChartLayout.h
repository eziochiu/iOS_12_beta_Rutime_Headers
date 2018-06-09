/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (nonatomic, readonly) TSCH3DChartSceneAreaLayoutItem *areaItem;
@property (nonatomic, readonly) bool hasProjectedBounds;
@property (nonatomic, readonly) const struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_1_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_2_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_2_1_2; } x2; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_3_1_2; } x3; }*projectedBounds;
@property (nonatomic, readonly) TSCH3DScene *scene;

+ (id)p_allScaleProperties;
+ (id)p_propertiesThatInvalidateShadows;
+ (id)p_propertiesThatResetSceneProperties;
+ (id)p_propertiesThatResetSeriesStorage;
+ (id)propertiesThatInvalidateLayout;
+ (void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(bool)arg2 willModifyBlock:(id /* block */)arg3;

- (id)areaItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForResize;
- (id)containingViewportVector;
- (void)dealloc;
- (bool)hasProjectedBounds;
- (id)infoChartScale;
- (id)initWithChartInfo:(id)arg1;
- (void)layoutForResizingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)modelInvalidated:(id)arg1;
- (void)p_ensureValidForInwardLayout;
- (id)p_layoutTree;
- (void)p_resetSceneProperties;
- (void)p_resetSeriesStorage;
- (bool)p_shouldClearSceneForLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg1;
- (const struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_1_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_2_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_2_1_2; } x2; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_3_1_2; } x3; }*)projectedBounds;
- (id)scene;
- (void)setLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;

@end
