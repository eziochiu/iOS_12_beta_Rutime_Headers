/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneData : NSObject <ARResultData> {
    struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; } * _detectionResult;
    unsigned long long  _detectionTypeMask;
    NSArray * _planeIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*detectionResult;
@property (nonatomic, readonly) unsigned long long detectionTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setSemanticsFromCV3D:(struct CV3DSurfaceSemantics { int *x1; float *x2; unsigned long long x3; })arg1 onPlane:(id)arg2;

- (void).cxx_destruct;
- (id)_anchorForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1 identifier:(id)arg2 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (struct { })_boundsForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (id)_geometryForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3 planeBounds:(struct { })arg4;
- (id)_gridExtentForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (struct { })_orientedBoundsForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1 surfaceOrientedPivot:(float)arg2 alignmentRotation:(long long)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_planeToWorldTransformForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1 pivot:(float)arg2;
- (float)_surfaceOrientedPivotForPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg1;
- (void)_updateExtentsForPlaneAnchor:(id)arg1 plane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg2 pivot:(float)arg3;
- (id)_updatedAnchor:(id)arg1 forPlane:(struct CV3DSurfaceDetectionPlane { struct CV3DSurfaceDetectionPoint3D { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2[3]; double x3[16]; int x4; struct CV3DSurfaceDetectionAlignedBoundingBox {} *x5; struct CV3DSurfaceDetectionRect {} *x6; struct CV3DSurfaceDetectionPoints2D {} *x7; struct CV3DSurfaceDetectionExtentGrid {} *x8; struct __CFUUID {} *x9; unsigned long long x10; struct __CFUUID {} **x11; unsigned long long x12; float x13; struct CV3DSurfaceSemantics { int *x_14_1_1; float *x_14_1_2; unsigned long long x_14_1_3; } x14; }*)arg2 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (long long)_worldAlignmentRotationForReferenceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 planeAlignment:(long long)arg2;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (struct { })boundsForPlaneWithIdentifier:(id)arg1;
- (void)dealloc;
- (struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)detectionResult;
- (unsigned long long)detectionTypeMask;
- (id)hitTestFromOrigin:(void *)arg1 withDirection:(void *)arg2 planeAlignment:(void *)arg3; // needs 3 arg types, found 1: long long
- (id)initWithDetectionResult:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1 detectionTypeMask:(unsigned long long)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceTransformForPlaneWithIdentifier:(id)arg1;
- (id)trackedPlaneIdentifiers;
- (id)updatedPlaneIdentifiers;

@end
