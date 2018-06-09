/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVisionLandmarkDetector : NSObject {
    BWPixelBufferPool * _faceDetectionBufferPool;
    FigM2MController * _m2mController;
}

+ (void)initialize;

- (id)_detectLandmarksUsingInputPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int*)arg3 includePoseAndQuality:(bool)arg4;
- (void)dealloc;
- (int)detectFaceLandmarksUsingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachingToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 includePoseAndQuality:(bool)arg3;
- (id)init;
- (int)prepareForDetectionWithInputVideoFormat:(id)arg1;
- (void)prewarmForDetection;

@end
