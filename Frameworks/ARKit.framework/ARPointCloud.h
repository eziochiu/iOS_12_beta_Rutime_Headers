/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPointCloud : NSObject <NSSecureCoding> {
    void _centroid;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _identifiersVector;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__value_"^ {}  _pointsVector;
    void _standardDeviation;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _vergenceAngleCosinesVector;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) const unsigned long long*identifiers;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

+ (id)concatPointClouds:(id)arg1;
+ (id)emptyPointCloud;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_hitTestPointFromOrigin:(void *)arg1 withDirection:(void *)arg2 maximumAngle:(void *)arg3; // needs 3 arg types, found 1: float
- (void)centroid;
- (struct { })computeBounds;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filterPointCloudFromellipsoid;
- (unsigned long long)hash;
- (const unsigned long long*)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointData:(id)arg1;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^ {}*)arg1 identifiersVector:(const struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x_3_1_1; } x3; }*)arg2;
- (id)initWithPointsVector:(const struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >=^ {}*)arg1 identifiersVector:(const struct vector<unsigned long long, std::__1::allocator<unsigned long long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::__1::allocator<unsigned long long> > { unsigned long long *x_3_1_1; } x3; }*)arg2 vergenceAngleCosinesVector:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3;
- (bool)isEqual:(id)arg1;
- (id)pointCloudByApplyingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (id)pointCloudByApplyingTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 minimumVergenceAngleCosine:(float)arg2;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)standardDeviation;
- (const float*)vergenceAngleCosines;

@end
