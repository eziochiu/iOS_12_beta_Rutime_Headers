/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {
    unsigned long long  changeSeed;
    BOOL  count;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  creationTime;
    AVCaptureOutput * dataOutputs;
    NSArray * possibleDataOutputs;
    AVCaptureSynchronizedData * synchronizedData;
}

@end
