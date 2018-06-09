/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {
    struct GKCPolygonObstacle { int (**x1)(); struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {} x2; } * _cPolygonObstacle;
}

@property (nonatomic, readonly) unsigned long long vertexCount;

+ (id)obstacleWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (struct GKCPolygonObstacle { int (**x1)(); struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {} x2; }*)cPolygonObstacle;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoints:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
- (struct Obstacle { int (**x1)(); }*)obstacle;
- (void)setCPolygonObstacle:(struct GKCPolygonObstacle { int (**x1)(); struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> >=^ {} x2; }*)arg1;
- (void)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexCount;

@end
