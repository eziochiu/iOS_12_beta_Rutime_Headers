/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoUtilities : NSObject

+ (id)bestOutputSettingsPresetForTargetVideoSize:(struct { long long x1; long long x2; })arg1;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })conformRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 inRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
+ (id)deepMutableCopyVideoComposition:(id)arg1;
+ (id)defaultVideoSettingsForAVAssetReader;
+ (id)firstEnabledVideoTrackInAsset:(id)arg1 error:(out id*)arg2;
+ (id)metadataTrackWithStillImageDisplayTimeMarkerInLivePhotoAsset:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDurationForAsset:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumFrameDurationForAssetTrack:(id)arg1;
+ (id)newPixelBufferOfSize:(struct { long long x1; long long x2; })arg1 format:(unsigned int)arg2;
+ (bool)readFromReader:(id)arg1 andWriteToWriter:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
+ (void)readNextPixelBuffer:(id)arg1 output:(id)arg2 block:(id /* block */)arg3;
+ (void)readNextSampleBuffer:(id)arg1 output:(id)arg2 block:(id /* block */)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })readStillImageTimeFromVideoAsset:(id)arg1;
+ (struct __CVBuffer { }*)readVideoFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromAsset:(id)arg2 outputSettings:(id)arg3 videoComposition:(id)arg4 error:(out id*)arg5;
+ (id)readerOutputForAsset:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 error:(out id*)arg4;
+ (id)repeatAudio:(id)arg1 count:(long long)arg2 error:(out id*)arg3;
+ (id)repeatVideo:(id)arg1 count:(long long)arg2 error:(out id*)arg3;
+ (id)repeatVideoComposition:(id)arg1 count:(long long)arg2 error:(out id*)arg3;
+ (id)rgbVideoSettingsForAVAssetReader;
+ (bool)updateVideoMetadataAtURL:(id)arg1 withItems:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
+ (id)videoCompositionDescription:(id)arg1;
+ (id)videoDescription:(id)arg1;
+ (long long)videoOrientationForAsset:(id)arg1 videoComposition:(id)arg2;

@end
