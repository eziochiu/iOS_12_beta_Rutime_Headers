/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (nonatomic, readonly) const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_1_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_1_1_2; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_2_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_2_1_2; } x2; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_3_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_3_1_2; } x3; }*bounds; /* unknown property attribute:  std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > >=^{box<glm::detail::tvec3<float> >}}}} */

+ (id)pipelineWithScene:(id)arg1;
+ (id)pipelineWithScene:(id)arg1 renderProcessor:(id)arg2;

- (const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_1_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_1_1_2; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_2_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_2_1_2; } x2; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_3_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_3_1_2; } x3; }*)bounds;
- (id)boundsProcessor;
- (void)extend2DProjectedBounds:(const struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; } x2; }*)arg1;
- (void)get3DBounds:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)getProjectedBounds:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithScene:(id)arg1 renderProcessor:(id)arg2;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (void)resetBounds;
- (bool)run;
- (void)runScene:(id)arg1 selector:(SEL)arg2;
- (void)set2DProjectedRenderingMode:(bool)arg1;
- (void)setObjectRenderMode:(int)arg1;
- (bool)shouldSkipLabelsIfHidden;
- (bool)useIndividualBounds;

@end
