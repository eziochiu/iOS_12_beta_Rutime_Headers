/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUFaceDetectionJob : NURenderJob {
    NSArray * _faces;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (void).cxx_destruct;
- (void)cleanUp;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer { }*)arg1 withFaceRects:(id)arg2 error:(out id*)arg3;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer { }*)arg1 maxResultCount:(unsigned long long)arg2 error:(out id*)arg3;
- (id)faceDetectionRequest;
- (id)initWithFaceDetectionRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (bool)wantsCompleteStage;
- (bool)wantsOutputImage;

@end
