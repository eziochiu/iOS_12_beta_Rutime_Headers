/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoExportJob : NUExportJob {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _livePhotoKeyFrameTime;
}

- (struct { long long x1; long long x2; })_evenPixelSizeFromPixelSize:(struct { long long x1; long long x2; })arg1;
- (void)_setCleanApertureInSettings:(id)arg1 withSize:(struct { long long x1; long long x2; })arg2 horizontalOffset:(long long)arg3 verticalOffset:(long long)arg4;
- (id)generateVideoComposition:(out id*)arg1;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithVideoExportRequest:(id)arg1;
- (bool)prepare:(out id*)arg1;
- (bool)render:(out id*)arg1;
- (bool)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer { }*)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 colorSpace:(id)arg4 error:(out id*)arg5;
- (bool)requiresVideoComposition;
- (id)scalePolicy;
- (id)videoExportRequest;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputVideo;
- (bool)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;

@end
