/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface ANFDDetectedObject : VNEspressoFaceDetectedObject {
    float  _rotationAngle;
    float  _yawAngle;
}

@property float rotationAngle;
@property float yawAngle;

- (float)rotationAngle;
- (void)setRotationAngle:(float)arg1;
- (void)setYawAngle:(float)arg1;
- (float)yawAngle;

@end
