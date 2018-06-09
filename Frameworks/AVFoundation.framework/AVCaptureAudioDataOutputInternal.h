/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioDataOutputInternal : NSObject {
    NSObject<OS_dispatch_queue> * bufferQueue;
    AVWeakReferencingDelegateStorage * delegateOverrideStorage;
    AVWeakReferencingDelegateStorage * delegateStorage;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    struct remoteQueueReceiverOpaque { } * remoteQueueReceiver;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
