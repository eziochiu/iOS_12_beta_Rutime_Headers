/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPrefilteredLineRendererRenderCacheObject : TSCH3DSceneRenderCacheObject {
    bool  mDidRenderOnce;
    TSCH3DStrokePatternTexture * mStrokeTexture;
}

@property (nonatomic) bool didRenderOnce;

- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (void)dealloc;
- (bool)didRenderOnce;
- (id)init;
- (id)p_box;
- (id)p_diffuseTexcoords;
- (id)p_geometry;
- (id)p_normals;
- (id)p_originalGeometry;
- (id)p_texcoords;
- (void)renderWithLineRenderer:(id)arg1 setting:(id)arg2 fromVertex:(const struct PrefilteredLineVertexProperties { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct tvec4<float> {} *x3; int x4; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_5_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_5_1_2; } x5; }*)arg3 toVertex:(const struct PrefilteredLineVertexProperties { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct tvec4<float> {} *x3; int x4; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_5_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_5_1_2; } x5; }*)arg4;
- (void)setDidRenderOnce:(bool)arg1;
- (void)submitResourcesWithLineRenderer:(id)arg1 setting:(id)arg2;

@end
