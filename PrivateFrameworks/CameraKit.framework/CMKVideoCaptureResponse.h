/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKVideoCaptureResponse : CMKCaptureResponse {
    short  _assetSubtype;
    bool  _didCompleteUnexpectedly;
    double  _duration;
    int  _recordingStoppedReason;
    bool  _unplayable;
    NSString * _videoCapturePath;
    UIImage * _videoPreviewImage;
}

@property (nonatomic) short assetSubtype;
@property (nonatomic) bool didCompleteUnexpectedly;
@property (nonatomic) double duration;
@property (nonatomic) int recordingStoppedReason;
@property (getter=isSuccessful, nonatomic, readonly) bool successful;
@property (getter=isUnplayable, nonatomic) bool unplayable;
@property (nonatomic, copy) NSString *videoCapturePath;
@property (nonatomic, retain) UIImage *videoPreviewImage;

+ (double)minimumVideoCaptureDuration;

- (void).cxx_destruct;
- (short)assetSubtype;
- (bool)didCompleteUnexpectedly;
- (double)duration;
- (id)init;
- (bool)isSuccessful;
- (bool)isUnplayable;
- (int)recordingStoppedReason;
- (void)setAssetSubtype:(short)arg1;
- (void)setDidCompleteUnexpectedly:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setRecordingStoppedReason:(int)arg1;
- (void)setUnplayable:(bool)arg1;
- (void)setVideoCapturePath:(id)arg1;
- (void)setVideoPreviewImage:(id)arg1;
- (id)videoCapturePath;
- (id)videoPreviewImage;

@end
