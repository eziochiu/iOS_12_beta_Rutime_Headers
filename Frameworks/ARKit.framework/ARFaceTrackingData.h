/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingData : NSObject <ARResultData, NSCopying, NSSecureCoding> {
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _blendShapeCoefficients;
    void _gazePoint;
    NSObject<OS_dispatch_semaphore> * _imageVerticesSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _leftEyeTransform;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__value_"^ {}  _meshVertices;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> >="__value_"^ {}  _normals;
    NSObject<OS_dispatch_semaphore> * _normalsSemaphore;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rightEyeTransform;
    float  _tongueOut;
    NSDictionary * _trackingData;
    NSError * _trackingError;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >="__value_"^ {}  _verticesImageSpace;
}

@property (nonatomic, readonly) const float*blendShapeCoefficients;
@property (nonatomic, readonly) unsigned long long blendShapeCoefficientsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) void gazePoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**imageVertices;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } leftEyeTransform;
@property (nonatomic, readonly) unsigned long long normalCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**normals;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rightEyeTransform;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float tongueOut;
@property (nonatomic, readonly) NSDictionary *trackingData;
@property (nonatomic, readonly) NSError *trackingError;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

+ (id)sharedNeutralGeometry;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_extractMetaDataAndTransformToMirrored:(bool)arg1;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (const float*)blendShapeCoefficients;
- (unsigned long long)blendShapeCoefficientsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)gazePoint;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)imageVertices;
- (id)initPrivate;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingData:(id)arg1;
- (id)initWithTrackingData:(id)arg1 transformToMirrored:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })leftEyeTransform;
- (unsigned long long)normalCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)normals;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rightEyeTransform;
- (float)tongueOut;
- (id)trackingData;
- (id)trackingError;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
