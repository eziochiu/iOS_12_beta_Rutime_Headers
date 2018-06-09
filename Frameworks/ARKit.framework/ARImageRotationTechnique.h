/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageRotationTechnique : ARTechnique {
    struct __CVPixelBufferPool { } * _bufferPool;
    long long  _mirrorMode;
    long long  _rotationAngle;
    struct OpaqueVTImageRotationSession { } * _vtPixelTransferSession;
}

- (void)dealloc;
- (id)initWithRotation:(long long)arg1 mirror:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;

@end
