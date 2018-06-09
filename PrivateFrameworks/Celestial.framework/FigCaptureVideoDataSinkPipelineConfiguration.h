/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {
    NSNumber * _clientPID;
    NSDictionary * _colorInfo;
    bool  _faceTrackingEnabled;
    int  _motionAttachmentsSource;
    bool  _offlineVISMotionDataEnabled;
    bool  _sourceHasAppliedAllZoom;
    unsigned int  _sourcePixelFormat;
    struct FigCaptureVideoTransform { 
        bool mirrored; 
        int rotationDegrees; 
        struct { 
            int width; 
            int height; 
        } dimensions; 
    }  _sourceVideoTransform;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    int  _videoStabilizationType;
}

@property (nonatomic, retain) NSNumber *clientPID;
@property (nonatomic, retain) NSDictionary *colorInfo;
@property (nonatomic) bool faceTrackingEnabled;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) bool offlineVISMotionDataEnabled;
@property (nonatomic) bool sourceHasAppliedAllZoom;
@property (nonatomic) unsigned int sourcePixelFormat;
@property (nonatomic) struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; } sourceVideoTransform;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic) int videoStabilizationType;

- (id)clientPID;
- (id)colorInfo;
- (void)dealloc;
- (bool)faceTrackingEnabled;
- (int)motionAttachmentsSource;
- (bool)offlineVISMotionDataEnabled;
- (void)setClientPID:(id)arg1;
- (void)setColorInfo:(id)arg1;
- (void)setFaceTrackingEnabled:(bool)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOfflineVISMotionDataEnabled:(bool)arg1;
- (void)setSourceHasAppliedAllZoom:(bool)arg1;
- (void)setSourcePixelFormat:(unsigned int)arg1;
- (void)setSourceVideoTransform:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg1;
- (void)setVideoDataConnectionConfiguration:(id)arg1;
- (void)setVideoStabilizationType:(int)arg1;
- (bool)sourceHasAppliedAllZoom;
- (unsigned int)sourcePixelFormat;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })sourceVideoTransform;
- (id)videoDataConnectionConfiguration;
- (int)videoStabilizationType;

@end
