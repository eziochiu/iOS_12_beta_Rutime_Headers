/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMovieFileOutputInternal : NSObject {
    NSArray * availableVideoCodecs;
    NSString * bravoCameraSelectionBehaviorForRecording;
    NSMutableArray * connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    NSArray * metadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  movieFragmentInterval;
    bool  paused;
    bool  recording;
    NSMutableArray * recordingDelegatesArray;
    bool  sendLastVideoPreviewFrame;
    NSString * videoCodec;
    NSDictionary * videoCompressionProperties;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
