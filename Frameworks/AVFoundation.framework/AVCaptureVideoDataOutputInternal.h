/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutputInternal : NSObject {
    bool  alwaysDiscardsLateVideoFrames;
    NSObject<OS_dispatch_queue> * bufferQueue;
    AVWeakReferencingDelegateStorage * delegateOverrideStorage;
    AVWeakReferencingDelegateStorage * delegateStorage;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  deprecatedMinFrameDuration;
    struct localQueueOpaque { } * localQueue;
    struct OpaqueFigSimpleMutex { } * queueMutex;
    struct remoteQueueReceiverOpaque { } * remoteQueueReceiver;
    NSDictionary * videoSettings;
    bool  videoSettingsDimensionsOverrideEnabled;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
