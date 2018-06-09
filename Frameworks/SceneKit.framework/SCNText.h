/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNText : SCNGeometry {
    bool  __wantsSeparateGeometryElements;
    int  _alignmentMode;
    UIBezierPath * _chamferProfile;
    float  _chamferRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _customContainerFrame;
    float  _discretizedStraightLineMaxLength;
    float  _extrusionDepth;
    float  _flatness;
    UIFont * _font;
    long long  _primitiveType;
    id  _string;
    int  _truncationMode;
    bool  _useCustomContainerFrame;
    bool  _wrapped;
}

@property (nonatomic, copy) NSString *alignmentMode;
@property (nonatomic, copy) UIBezierPath *chamferProfile;
@property (nonatomic) double chamferRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerFrame;
@property (nonatomic) double extrusionDepth;
@property (nonatomic) double flatness;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) id string;
@property (nonatomic, copy) NSString *truncationMode;
@property (getter=isWrapped, nonatomic) bool wrapped;

+ (bool)supportsSecureCoding;
+ (id)text;
+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)__createCFObject;
- (void)_customDecodingOfSCNText:(id)arg1;
- (void)_customEncodingOfSCNText:(id)arg1;
- (void)_syncObjCModel:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_4_1; unsigned long long x_1_4_2; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; struct __C3DScene {} *x_1_3_6; long long x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFSet {} *x_1_2_5; struct __CFArray {} *x_1_2_6; struct { /* ? */ } *x_1_2_7; unsigned int x_1_2_8 : 1; int (*x_1_2_9)(); struct { unsigned char x_10_3_1; bool x_10_3_2; struct { bool x_3_4_1; unsigned char x_3_4_2; unsigned char x_3_4_3; unsigned char x_3_4_4; } x_10_3_3; struct __C3DMeshElement {} *x_10_3_4; struct __C3DMeshSource {} *x_10_3_5; struct __C3DMesh {} *x_10_3_6; void *x_10_3_7; void *x_10_3_8; } x_1_2_10; struct { unsigned char x_11_3_1; float x_11_3_2; unsigned int x_11_3_3; unsigned char x_11_3_4; union { struct { float x_1_5_1; float x_1_5_2; } x_5_4_1; struct { float x_2_5_1; } x_5_4_2; struct { float x_3_5_1; } x_5_4_3; struct { unsigned char x_4_5_1; unsigned int x_4_5_2 : 1; unsigned int x_4_5_3 : 1; } x_5_4_4; } x_11_3_5; } x_1_2_11; } x_1_1_1; } x1; }*)arg1;
- (bool)_wantsSeparateGeometryElements;
- (id)alignmentMode;
- (id)chamferProfile;
- (double)chamferRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (id)copy;
- (id)copyAnimationPathForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)discretizedStraightLineMaxLength;
- (void)encodeWithCoder:(id)arg1;
- (double)extrusionDepth;
- (double)flatness;
- (id)font;
- (bool)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (bool)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(double*)arg2;
- (id)init;
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_4_1; unsigned long long x_1_4_2; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; struct __C3DScene {} *x_1_3_6; long long x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFSet {} *x_1_2_5; struct __CFArray {} *x_1_2_6; struct { /* ? */ } *x_1_2_7; unsigned int x_1_2_8 : 1; int (*x_1_2_9)(); struct { unsigned char x_10_3_1; bool x_10_3_2; struct { bool x_3_4_1; unsigned char x_3_4_2; unsigned char x_3_4_3; unsigned char x_3_4_4; } x_10_3_3; struct __C3DMeshElement {} *x_10_3_4; struct __C3DMeshSource {} *x_10_3_5; struct __C3DMesh {} *x_10_3_6; void *x_10_3_7; void *x_10_3_8; } x_1_2_10; struct { unsigned char x_11_3_1; float x_11_3_2; unsigned int x_11_3_3; unsigned char x_11_3_4; union { struct { float x_1_5_1; float x_1_5_2; } x_5_4_1; struct { float x_2_5_1; } x_5_4_2; struct { float x_3_5_1; } x_5_4_3; struct { unsigned char x_4_5_1; unsigned int x_4_5_2 : 1; unsigned int x_4_5_3 : 1; } x_5_4_4; } x_11_3_5; } x_1_2_11; } x_1_1_1; } x1; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextGeometryRef:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_4_1; unsigned long long x_1_4_2; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; struct __C3DScene {} *x_1_3_6; long long x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFSet {} *x_1_2_5; struct __CFArray {} *x_1_2_6; struct { /* ? */ } *x_1_2_7; unsigned int x_1_2_8 : 1; int (*x_1_2_9)(); struct { unsigned char x_10_3_1; bool x_10_3_2; struct { bool x_3_4_1; unsigned char x_3_4_2; unsigned char x_3_4_3; unsigned char x_3_4_4; } x_10_3_3; struct __C3DMeshElement {} *x_10_3_4; struct __C3DMeshSource {} *x_10_3_5; struct __C3DMesh {} *x_10_3_6; void *x_10_3_7; void *x_10_3_8; } x_1_2_10; struct { unsigned char x_11_3_1; float x_11_3_2; unsigned int x_11_3_3; unsigned char x_11_3_4; union { struct { float x_1_5_1; float x_1_5_2; } x_5_4_1; struct { float x_2_5_1; } x_5_4_2; struct { float x_3_5_1; } x_5_4_3; struct { unsigned char x_4_5_1; unsigned int x_4_5_2 : 1; unsigned int x_4_5_3 : 1; } x_5_4_4; } x_11_3_5; } x_1_2_11; } x_1_1_1; } x1; }*)arg1;
- (bool)isWrapped;
- (struct { struct { BOOL x_1_1_1; double x_1_1_2; double x_1_1_3; int x_1_1_4; double x_1_1_5; void *x_1_1_6; void *x_1_1_7; } x1; void *x2; void *x3; int x4; int x5; bool x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; double x9; })params;
- (id)presentationGeometry;
- (long long)primitiveType;
- (void)setAlignmentMode:(id)arg1;
- (void)setChamferProfile:(id)arg1;
- (void)setChamferRadius:(double)arg1;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;
- (void)setExtrusionDepth:(double)arg1;
- (void)setFlatness:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (void)setString:(id)arg1;
- (void)setTruncationMode:(id)arg1;
- (void)setWrapped:(bool)arg1;
- (void)set_wantsSeparateGeometryElements:(bool)arg1;
- (id)string;
- (id)truncationMode;

@end
