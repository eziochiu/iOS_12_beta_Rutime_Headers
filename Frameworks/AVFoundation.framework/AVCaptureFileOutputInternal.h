/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  maxRecordedDuration;
    long long  maxRecordedFileSize;
    long long  minFreeDiskSpaceLimit;
    bool  pausesRecordingOnInterruption;
}

- (id)init;

@end
