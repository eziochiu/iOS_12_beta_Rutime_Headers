/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureStillImageSinkPipelineConfiguration : NSObject {
    bool  _allowsMultipleInflightCaptures;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    NSNumber * _clientPID;
    NSDictionary * _colorInfo;
    int  _motionAttachmentsSource;
    FigVideoCaptureConnectionConfiguration * _movieFileVideoConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    bool  _stillImageOutputDerivesFromVideoCaptureOutput;
    unsigned int  _stillImageSourcePixelFormat;
}

@property (nonatomic) bool allowsMultipleInflightCaptures;
@property (nonatomic, retain) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, retain) NSNumber *clientPID;
@property (nonatomic, retain) NSDictionary *colorInfo;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;
@property (nonatomic, retain) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic) bool stillImageOutputDerivesFromVideoCaptureOutput;
@property (nonatomic) unsigned int stillImageSourcePixelFormat;

- (bool)allowsMultipleInflightCaptures;
- (id)cameraConfiguration;
- (id)clientPID;
- (id)colorInfo;
- (void)dealloc;
- (int)motionAttachmentsSource;
- (id)movieFileVideoConnectionConfiguration;
- (void)setAllowsMultipleInflightCaptures:(bool)arg1;
- (void)setCameraConfiguration:(id)arg1;
- (void)setClientPID:(id)arg1;
- (void)setColorInfo:(id)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setMovieFileVideoConnectionConfiguration:(id)arg1;
- (void)setStillImageConnectionConfiguration:(id)arg1;
- (void)setStillImageOutputDerivesFromVideoCaptureOutput:(bool)arg1;
- (void)setStillImageSourcePixelFormat:(unsigned int)arg1;
- (id)stillImageConnectionConfiguration;
- (bool)stillImageOutputDerivesFromVideoCaptureOutput;
- (unsigned int)stillImageSourcePixelFormat;

@end
