/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKPolygonCylinderTransformView : UIView {
    double  _exteriorAngle;
    double  _faceDistanceToCenter;
    NSMutableDictionary * _faceViews;
    double  _interiorAngle;
    unsigned long long  _numberOfFaces;
    unsigned long long  _numberOfVisibleFaces;
}

@property (nonatomic, readonly) double faceDistanceToCenter;
@property (nonatomic, readonly) unsigned long long numberOfFaces;
@property (nonatomic, readonly) unsigned long long numberOfVisibleFaces;
@property (nonatomic, readonly) double rotationAnglePerFace;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForFaceIndex:(unsigned long long)arg1;
- (void)enumerateFaceViewsWithBlock:(id /* block */)arg1;
- (double)faceDistanceToCenter;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithNumberOfFaces:(unsigned long long)arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfFaces;
- (unsigned long long)numberOfVisibleFaces;
- (double)rotationAnglePerFace;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1 forFaceAtIndex:(unsigned long long)arg2;
- (id)viewForFaceAtIndex:(unsigned long long)arg1;

@end