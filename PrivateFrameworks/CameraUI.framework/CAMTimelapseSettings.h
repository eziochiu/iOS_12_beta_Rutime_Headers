/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseSettings : NSObject {
    double  _initialCaptureTimeInterval;
    double  _maxOutputFPS;
    double  _maxOutputLength;
}

@property (nonatomic, readonly) double initialCaptureTimeInterval;
@property (nonatomic, readonly) long long maxFailedStateReadAttempts;
@property (nonatomic, readonly) long long maxMovieWriteAttempts;
@property (nonatomic, readonly) double maxOutputFPS;
@property (nonatomic, readonly) long long maxOutputFrames;
@property (nonatomic, readonly) double maxOutputLength;

+ (id)sharedInstance;

- (long long)_averageMovieBitrateForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(bool)arg3;
- (id)_outputSettingsPresetForWidth:(long long)arg1 height:(long long)arg2;
- (id)init;
- (double)initialCaptureTimeInterval;
- (long long)maxFailedStateReadAttempts;
- (long long)maxMovieFileLengthForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(bool)arg3;
- (long long)maxMovieWriteAttempts;
- (double)maxOutputFPS;
- (long long)maxOutputFrames;
- (double)maxOutputLength;
- (long long)minAvailableBytesNeededForCaptureForWidth:(long long)arg1 height:(long long)arg2 useHEVC:(bool)arg3;
- (double)outputFPSForFrameCount:(long long)arg1;
- (id)outputSettingsForWidth:(long long)arg1 height:(long long)arg2 videoFormatDescription:(struct opaqueCMFormatDescription { }*)arg3 framesPerSecond:(long long)arg4 frameCount:(long long)arg5 useHEVC:(bool)arg6;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(long long)arg1;

@end
