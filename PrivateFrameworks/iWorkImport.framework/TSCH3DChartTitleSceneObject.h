/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartTitleSceneObject : TSCH3DChartLabelsContainingSceneObject

+ (struct CGSize { double x1; double x2; })labelWrapSizeForScene:(id)arg1;
+ (struct CGSize { double x1; double x2; })p_labelWrapSizeForScene:(id)arg1 returningSizeValue:(id*)arg2;
+ (struct TSCH3DScenePart { id x1; })partWithChartInfo:(id)arg1;
+ (bool)setLabelWrapBounds:(const struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg1 forScene:(id)arg2;
+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;

- (bool)isAnnotated;
- (void)p_renderLabel:(id)arg1;
- (void)renderAnnotatedLabels:(id)arg1;
- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;
- (void)renderLabels:(id)arg1;

@end
