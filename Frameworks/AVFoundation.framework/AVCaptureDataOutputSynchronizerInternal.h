/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDataOutputSynchronizerInternal : NSObject {
    NSObject<OS_dispatch_queue> * dataOutputQueue;
    NSArray * dataOutputs;
    NSArray * dataOutputsStorage;
    struct OpaqueFigSimpleMutex { } * dataOutputsStorageMutex;
    AVWeakReferencingDelegateStorage * delegateStorage;
    int  masterSynchronizedDataQueueMaxDepth;
    bool  synchronizingVideoAndDepth;
    AVWeakReference * weakReference;
}

@end
