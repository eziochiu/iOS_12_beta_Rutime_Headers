/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCapsule : SCNGeometry {
    double  _capsulecapRadius;
    long long  _capsulecapSegmentCount;
    double  _capsuleheight;
    long long  _capsuleheightSegmentCount;
    long long  _capsuleprimitiveType;
    long long  _capsuleradialSegmentCount;
}

@property (nonatomic) double capRadius;
@property (nonatomic) long long capSegmentCount;
@property (nonatomic) double height;
@property (nonatomic) long long heightSegmentCount;
@property (nonatomic) long long radialSegmentCount;

+ (id)capsuleWithCapRadius:(double)arg1 height:(double)arg2;
+ (bool)supportsSecureCoding;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)__createCFObject;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_syncObjCModel:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct { /* ? */ } *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned char x_10_2_1; bool x_10_2_2; struct { bool x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; unsigned char x_3_3_4; } x_10_2_3; struct __C3DMeshElement {} *x_10_2_4; struct __C3DMeshSource {} *x_10_2_5; struct __C3DMesh {} *x_10_2_6; void *x_10_2_7; void *x_10_2_8; } x_1_1_10; struct { unsigned char x_11_2_1; float x_11_2_2; unsigned int x_11_2_3; unsigned char x_11_2_4; union { struct { float x_1_4_1; float x_1_4_2; } x_5_3_1; struct { float x_2_4_1; } x_5_3_2; struct { float x_3_4_1; } x_5_3_3; struct { unsigned char x_4_4_1; unsigned int x_4_4_2 : 1; unsigned int x_4_4_3 : 1; } x_5_3_4; } x_11_2_5; } x_1_1_11; } x1; }*)arg1;
- (double)capRadius;
- (long long)capSegmentCount;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (bool)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(double*)arg2;
- (double)height;
- (long long)heightSegmentCount;
- (id)init;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct { /* ? */ } *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned char x_10_2_1; bool x_10_2_2; struct { bool x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; unsigned char x_3_3_4; } x_10_2_3; struct __C3DMeshElement {} *x_10_2_4; struct __C3DMeshSource {} *x_10_2_5; struct __C3DMesh {} *x_10_2_6; void *x_10_2_7; void *x_10_2_8; } x_1_1_10; struct { unsigned char x_11_2_1; float x_11_2_2; unsigned int x_11_2_3; unsigned char x_11_2_4; union { struct { float x_1_4_1; float x_1_4_2; } x_5_3_1; struct { float x_2_4_1; } x_5_3_2; struct { float x_3_4_1; } x_5_3_3; struct { unsigned char x_4_4_1; unsigned int x_4_4_2 : 1; unsigned int x_4_4_3 : 1; } x_5_3_4; } x_11_2_5; } x_1_1_11; } x1; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct { /* ? */ } *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned char x_10_2_1; bool x_10_2_2; struct { bool x_3_3_1; unsigned char x_3_3_2; unsigned char x_3_3_3; unsigned char x_3_3_4; } x_10_2_3; struct __C3DMeshElement {} *x_10_2_4; struct __C3DMeshSource {} *x_10_2_5; struct __C3DMesh {} *x_10_2_6; void *x_10_2_7; void *x_10_2_8; } x_1_1_10; struct { unsigned char x_11_2_1; float x_11_2_2; unsigned int x_11_2_3; unsigned char x_11_2_4; union { struct { float x_1_4_1; float x_1_4_2; } x_5_3_1; struct { float x_2_4_1; } x_5_3_2; struct { float x_3_4_1; } x_5_3_3; struct { unsigned char x_4_4_1; unsigned int x_4_4_2 : 1; unsigned int x_4_4_3 : 1; } x_5_3_4; } x_11_2_5; } x_1_1_11; } x1; }*)arg1;
- (id)presentationCapsule;
- (id)presentationGeometry;
- (long long)primitiveType;
- (long long)radialSegmentCount;
- (void)setCapRadius:(double)arg1;
- (void)setCapSegmentCount:(long long)arg1;
- (void)setHeight:(double)arg1;
- (void)setHeightSegmentCount:(long long)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (void)setRadialSegmentCount:(long long)arg1;

@end
