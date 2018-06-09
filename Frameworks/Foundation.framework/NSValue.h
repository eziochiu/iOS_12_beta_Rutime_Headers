/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValue : NSObject <NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding, TSDMixing>

@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } AXMAffineTransformValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } AXMPointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } AXMRectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } AXMSizeValue;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } AXMVectorValue;
@property (readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } CATransform3DValue;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } CGAffineTransformValue;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } CGPointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } CGRectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } CGSizeValue;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } CGVectorValue;
@property (readonly) struct { double x1; double x2; } MKCoordinateSpanValue;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } MKCoordinateValue;
@property (readonly) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; } PXAssetBadgeInfoValue;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } PXEdgeInsetsValue;
@property (nonatomic, readonly) struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; } PXTileIdentifierValue;
@property (readonly) struct { double x1[4]; } RGBResultValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } UIEdgeInsetsValue;
@property (readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } UIKBHandwritingPointValue;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } UIOffsetValue;
@property (readonly) struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; } ccui_pointValue;
@property (readonly) struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; } ccui_rectValue;
@property (readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } ccui_sizeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } directionalEdgeInsetsValue;
@property (nonatomic, readonly) struct HUGridPosition { long long x1; long long x2; } gridPositionValue;
@property (nonatomic, readonly) struct HUGridSize { long long x1; long long x2; } gridSizeValue;
@property (readonly) struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; } gu_grayColorResultValue;
@property (readonly) unsigned long long hash;
@property (readonly) const char *objCType;
@property (nonatomic, readonly) struct PUDisplayVelocity { double x1; double x2; double x3; double x4; } pu_displayVelocityValue;
@property (nonatomic, readonly) struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; } px_viewSpecDescriptorValue;
@property (readonly) struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; } quadrilateralValue;
@property (readonly) struct _MSVSignedRange { long long x1; long long x2; } signedRangeValue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithWeakObject:(id)arg1;

- (bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct NSEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsValue;
- (void)encodeWithCoder:(id)arg1;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToValue:(id)arg1;
- (bool)isNSValue__;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void*)pointerValue;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeValue;
- (id)weakObjectValue;

// Image: /Developer/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)valueWithTimeRange:(struct XRTimeRange { unsigned long long x1; unsigned long long x2; })arg1;

- (unsigned char)implementationClassTypeID;
- (struct XRTimeRange { unsigned long long x1; unsigned long long x2; })timeRangeValue;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)valueWithCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1;
+ (id)valueWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })CMTimeMappingValue;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_valueWithNSOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;

- (struct { long long x1; long long x2; long long x3; })hk_NSOperatingSystemVersionValue;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_mapkit_valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)_mapkit_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithMKCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)valueWithMKCoordinateSpan:(struct { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })CADoublePointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CADoubleRectValue;
- (struct { double x1; double x2; })MKCoordinateSpanValue;
- (struct CLLocationCoordinate2D { double x1; double x2; })MKCoordinateValue;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKMapRectValue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_mapkit_CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })_mapkit_CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_CGRectValue;
- (id)_mapkit_initWithCADoublePoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_mapkit_initWithCADoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_mapkit_initWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithMKMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithZoomRegion:(struct { double x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { double x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_zoomRegionValue;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

+ (id)PDFKitValueWithPDFPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)PDFKitValueWithPDFRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGPoint { double x1; double x2; })PDFKitPDFPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })PDFKitPDFRectValue;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_valueWithDisplayVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;

- (struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })pu_displayVelocityValue;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)valueWithCAColorMatrix:(struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })arg1;
+ (id)valueWithCAPoint3D:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;

- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })CAColorMatrixValue;
- (id)CAMLType;
- (struct CAPoint3D { double x1; double x2; double x3; })CAPoint3DValue;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })CATransform3DValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (unsigned long long)CA_copyNumericValue:(double)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (id)CA_roundToIntegerFromValue:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)SCN_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)SCN_valueWithSimdMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)valueWithSCNMatrix4:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithSCNVector3:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
+ (id)valueWithSCNVector4:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })SCNMatrix4Value;
- (struct SCNVector3 { float x1; float x2; float x3; })SCNVector3Value;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })SCNVector4Value;
- (struct CGPoint { double x1; double x2; })SCN_CGPointValue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SCN_simdMatrix4Value;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

+ (id)axmValueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)axmValueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)axmValueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)axmValueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)axmValueWithCGVector:(struct CGVector { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })AXMAffineTransformValue;
- (struct CGPoint { double x1; double x2; })AXMPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })AXMRectValue;
- (struct CGSize { double x1; double x2; })AXMSizeValue;
- (struct CGVector { double x1; double x2; })AXMVectorValue;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akValueWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)akValueWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)akValueWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithQuadrilateral:(struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (struct CGPoint { double x1; double x2; })akPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })akRectValue;
- (struct CGSize { double x1; double x2; })akSizeValue;
- (struct AKQuadrilateral { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })quadrilateralValue;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)bs_valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)bs_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)bs_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })bs_CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })bs_CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bs_CGRectValue;
- (struct CGSize { double x1; double x2; })bs_CGSizeValue;
- (bool)bs_getValue:(out void*)arg1 ofSize:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplFullDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI

+ (id)ccui_valueWithLayoutPoint:(struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)ccui_valueWithLayoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })arg1;
+ (id)ccui_valueWithLayoutSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg1;

- (struct CCUILayoutPoint { unsigned long long x1; unsigned long long x2; })ccui_pointValue;
- (struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct CCUILayoutSize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })ccui_rectValue;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })ccui_sizeValue;

// Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit

+ (id)dk_valueWithRenderPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })arg1;

- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; double x4; })dk_renderPointValue;

// Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI

+ (id)_gkValueWithGLKVector3:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;

- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })_gkGLKVector3Value;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_valueWithGEOPlaceDataComponentKey:(union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })arg1;
+ (id)valueWithCoordinate:(struct { double x1; double x2; })arg1;

- (union _GEOPlaceDataComponentKey { struct { unsigned long long x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; })_geo_GEOPlaceDataComponentKeyValue;
- (struct { double x1; double x2; })coordinateValue;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)valueWithHKGraphSeriesDataBlockPath:(struct { long long x1; long long x2; })arg1;
+ (id)valueWithHKLinearTransform:(struct HKLinearTransform { double x1; double x2; })arg1;

- (struct { long long x1; long long x2; })HKGraphSeriesDataBlockPathValue;
- (struct HKLinearTransform { double x1; double x2; })HKLinearTransformValue;
- (id)_hk_CGPointMidPointToValue:(id)arg1 percentage:(double)arg2;
- (id)_hk_HKLinearTransformMidPointToValue:(id)arg1 percentage:(double)arg2;
- (bool)_hk_isCGPoint;
- (bool)_hk_isHKLinearTransform;
- (bool)hk_animatable;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)valueWithGridPosition:(struct HUGridPosition { long long x1; long long x2; })arg1;
+ (id)valueWithGridSize:(struct HUGridSize { long long x1; long long x2; })arg1;

- (struct HUGridPosition { long long x1; long long x2; })gridPositionValue;
- (struct HUGridSize { long long x1; long long x2; })gridSizeValue;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)xct_contentDescription;

// Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager

+ (id)valueWithDockState:(struct DockState { int x1; struct UnsignedWide { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct UnsignedWide { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; unsigned long long x4; unsigned char x5[6]; unsigned long long x6; unsigned char x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; double x12; double x13; bool x14; bool x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; void*x18; bool x19; unsigned int x20; unsigned int x21; })arg1;

- (struct DockState { int x1; struct UnsignedWide { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct UnsignedWide { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; unsigned long long x4; unsigned char x5[6]; unsigned long long x6; unsigned char x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; double x12; double x13; bool x14; bool x15; id x16; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x17; void*x18; bool x19; unsigned int x20; unsigned int x21; })dockStateValue;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)_lp_valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lp_CGRectValue;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)valueWithMSVSignedRange:(struct _MSVSignedRange { long long x1; long long x2; })arg1;

- (struct _MSVSignedRange { long long x1; long long x2; })signedRangeValue;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)valueWithML3NameOrder:(struct { long long x1; long long x2; })arg1;

- (struct { long long x1; long long x2; })ML3NameOrderValue;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)cls_valueWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;

- (struct CLLocationCoordinate2D { double x1; double x2; })cls_coordinateValue;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)gu_valueWithGrayColorResult:(struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })arg1;
+ (id)valueWithRGBResult:(struct { double x1[4]; })arg1;

- (struct { double x1[4]; })RGBResultValue;
- (struct { struct { double x_1_1_1[4]; } x1; struct { double x_2_1_1[4]; } x2; double x3; })gu_grayColorResultValue;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_valueWithMemoryFontsSpecIdentifier:(struct PXMemoryFontsSpecIdentifier { long long x1; long long x2; long long x3; double x4; })arg1;
+ (id)px_valueWithViewSpecDescriptor:(struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })arg1;
+ (id)valueWithPXAssetBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
+ (id)valueWithPXEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithPXTileGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1;
+ (id)valueWithPXTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;

- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })PXAssetBadgeInfoValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })PXEdgeInsetsValue;
- (struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })PXTileGeometryValue;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })PXTileIdentifierValue;
- (struct PXMemoryFontsSpecIdentifier { long long x1; long long x2; long long x3; double x4; })px_memoryFontsSpecIdentifierValue;
- (struct PXViewSpecDescriptor { long long x1; unsigned long long x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })px_viewSpecDescriptorValue;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;

- (struct CGPoint { double x1; double x2; })CGPointValue;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

+ (id)re_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })re_CGRectValue;
- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)valueWithCLLocationCoordinate2D:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (id)valueWithMKCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CLLocationCoordinate2D { double x1; double x2; })CLLocationCoordinate2DValue;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKCoordinateRegionValue;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)valueWithTSDEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })TSDEdgeInsetsValue;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_valueWithCellMetrics:(struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg1;
+ (id)tv_valueWithRowMetrics:(struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })arg1;

- (struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })tv_cellMetricsValue;
- (struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })tv_rowMetricsValue;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)valueWithCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)valueWithCGVector:(struct CGVector { double x1; double x2; })arg1;
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
+ (id)valueWithUIKBHandwritingPoint:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
+ (id)valueWithUIOffset:(struct UIOffset { double x1; double x2; })arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CGAffineTransformValue;
- (struct CGPoint { double x1; double x2; })CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (struct CGSize { double x1; double x2; })CGSizeValue;
- (struct CGVector { double x1; double x2; })CGVectorValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })UIEdgeInsetsValue;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })UIKBHandwritingPointValue;
- (struct UIOffset { double x1; double x2; })UIOffsetValue;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalEdgeInsetsValue;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_valueWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;

@end
