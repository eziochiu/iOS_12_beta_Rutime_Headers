/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVWeakReferencingDelegateStorage * delegateOverrideStorage;
    AVWeakReferencingDelegateStorage * delegateStorage;
    bool  faceTrackingMetadataObjectTypesAvailable;
    struct localQueueOpaque { } * localQueue;
    NSArray * metadataObjectTypes;
    NSObject<OS_dispatch_queue> * objectQueue;
    bool  offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    struct OpaqueFigSimpleMutex { } * queueMutex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rectOfInterest;
    struct remoteQueueReceiverOpaque { } * remoteQueueReceiver;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
