/* made by EzioChiu.
 */

@protocol VCEffectsManagerDelegate <NSObject>

@required

- (void)encodeProcessedPixelBuffer:(struct __CVBuffer { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 imageData:(NSData *)arg3;
- (bool)faceMeshTrackingEnabled;
- (void)setFaceMeshTrackingEnabled:(bool)arg1;

@end
