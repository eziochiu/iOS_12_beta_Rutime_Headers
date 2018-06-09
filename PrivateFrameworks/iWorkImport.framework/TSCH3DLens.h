/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLens : NSObject <NSCopying> {
    float  mFar;
    float  mNear;
}

@property (nonatomic) float far;
@property (nonatomic) float near;

+ (id)lens;

- (void)calculateCullingPlanes:(struct vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > {} *x1; struct plane<glm::detail::tvec3<float> > {} *x2; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > > { struct plane<glm::detail::tvec3<float> > {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)far;
- (float)near;
- (void)setFar:(float)arg1;
- (void)setNear:(float)arg1;

@end
