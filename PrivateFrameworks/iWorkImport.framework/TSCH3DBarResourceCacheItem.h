/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCacheItem : NSObject {
    TSCH3DBarExtrusionGeometry * mBarGeometry;
    TSCH3DBarNormalResource * mNormalResource;
    TSCH3DBarTexCoordResource * mTexCoordResource;
    TSCH3DBarVertexResource * mVertexResource;
}

@property (nonatomic, readonly) TSCH3DBarNormalResource *normalResource;
@property (nonatomic, readonly) TSCH3DBarTexCoordResource *texCoordResource;
@property (nonatomic, readonly) TSCH3DBarVertexResource *vertexResource;

+ (id)itemWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; bool x2; bool x3; bool x4; bool x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; long long x_2_2_2; long long x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;

- (void)dealloc;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting { float x1; bool x2; bool x3; bool x4; bool x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; long long x_2_2_2; long long x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; }*)arg1;
- (id)normalResource;
- (id)texCoordResource;
- (id)vertexResource;

@end
