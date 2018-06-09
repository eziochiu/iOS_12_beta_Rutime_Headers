/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamDebugMovieController : NSObject {
    AVAssetWriter * _assetWriter;
    AVAssetWriterInputMetadataAdaptor * _assetWriterMetadataAdaptor;
    AVAssetWriterInput * _assetWriterMetadataIn;
    AVAssetWriterInput * _assetWriterVideoIn;
    unsigned long long  _backgroundRecordingID;
    bool  _canRecordFrames;
    <ICDocCamDebugMovieControllerDelegate> * _delegate;
    NSURL * _movieURL;
    NSObject<OS_dispatch_queue> * _movieWritingQueue;
    AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor;
    bool  _readyToRecordMetadata;
    bool  _readyToRecordVideo;
    bool  _recording;
    bool  _recordingWillBeStarted;
    bool  _recordingWillBeStopped;
    long long  _referenceOrientation;
    AVCaptureConnection * _videoConnection;
    long long  _videoOrientation;
}

@property (nonatomic, retain) AVAssetWriter *assetWriter;
@property (nonatomic, retain) AVAssetWriterInputMetadataAdaptor *assetWriterMetadataAdaptor;
@property (nonatomic, retain) AVAssetWriterInput *assetWriterMetadataIn;
@property (nonatomic, retain) AVAssetWriterInput *assetWriterVideoIn;
@property (nonatomic) unsigned long long backgroundRecordingID;
@property (nonatomic) bool canRecordFrames;
@property (nonatomic) <ICDocCamDebugMovieControllerDelegate> *delegate;
@property (nonatomic, retain) NSURL *movieURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *movieWritingQueue;
@property (nonatomic, retain) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor;
@property (nonatomic) bool readyToRecordMetadata;
@property (nonatomic) bool readyToRecordVideo;
@property (getter=isRecording) bool recording;
@property (nonatomic) bool recordingWillBeStarted;
@property (nonatomic) bool recordingWillBeStopped;
@property (nonatomic) long long referenceOrientation;
@property (nonatomic) AVCaptureConnection *videoConnection;
@property long long videoOrientation;

- (void).cxx_destruct;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;
- (id)assetWriter;
- (id)assetWriterMetadataAdaptor;
- (id)assetWriterMetadataIn;
- (id)assetWriterVideoIn;
- (unsigned long long)backgroundRecordingID;
- (bool)canRecordFrames;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 videoConnection:(id)arg2 referenceOrientation:(long long)arg3;
- (bool)inputsReadyToRecord;
- (bool)isRecording;
- (id)movieURL;
- (id)movieWritingQueue;
- (void)pauseCaptureSessionForMovieRecording;
- (id)pixelBufferAdaptor;
- (bool)readyToRecordMetadata;
- (bool)readyToRecordVideo;
- (void)recordFrame:(struct opaqueCMSampleBuffer { }*)arg1 fromConnection:(id)arg2;
- (void)recordingDidStart;
- (void)recordingDidStop;
- (bool)recordingWillBeStarted;
- (bool)recordingWillBeStopped;
- (void)recordingWillStart;
- (void)recordingWillStop;
- (long long)referenceOrientation;
- (void)removeFile:(id)arg1;
- (void)resumeCaptureSessionForMovieRecording;
- (void)saveMovieToCameraRoll;
- (void)setAssetWriter:(id)arg1;
- (void)setAssetWriterMetadataAdaptor:(id)arg1;
- (void)setAssetWriterMetadataIn:(id)arg1;
- (void)setAssetWriterVideoIn:(id)arg1;
- (void)setBackgroundRecordingID:(unsigned long long)arg1;
- (void)setCanRecordFrames:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMovieURL:(id)arg1;
- (void)setMovieWritingQueue:(id)arg1;
- (void)setPixelBufferAdaptor:(id)arg1;
- (void)setReadyToRecordMetadata:(bool)arg1;
- (void)setReadyToRecordVideo:(bool)arg1;
- (void)setRecording:(bool)arg1;
- (void)setRecordingWillBeStarted:(bool)arg1;
- (void)setRecordingWillBeStopped:(bool)arg1;
- (void)setReferenceOrientation:(long long)arg1;
- (void)setVideoConnection:(id)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (bool)setupAssetWriterMetadataInputAndMetadataAdaptor;
- (bool)setupAssetWriterVideoInput:(struct opaqueCMFormatDescription { }*)arg1;
- (void)startRecording;
- (void)stopRecording;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromCurrentVideoOrientationToOrientation:(long long)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (id)videoConnection;
- (long long)videoOrientation;
- (bool)writeMetaDataAtFrame:(long long)arg1 intrinsicMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 ofType:(id)arg2 atFrame:(long long)arg3;

@end