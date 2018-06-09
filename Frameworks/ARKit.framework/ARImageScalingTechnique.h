/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageScalingTechnique : ARTechnique {
    unsigned char  _downscaleFactor;
    struct __CVPixelBufferPool { } * _scaledPixelBufferPool;
    struct OpaqueVTPixelTransferSession { } * _vtPixelTransferSession;
}

@property (nonatomic, readonly) unsigned char downscaleFactor;

- (void)dealloc;
- (unsigned char)downscaleFactor;
- (id)initWithDownscaleFactor:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;

@end
