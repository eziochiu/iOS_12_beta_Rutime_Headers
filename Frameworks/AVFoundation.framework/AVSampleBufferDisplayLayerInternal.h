/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferDisplayLayerInternal : NSObject {
    bool  aboveHighWaterLevel;
    bool  addedToSynchronizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    CALayer * contentLayer;
    struct OpaqueCMTimebase { } * controlTimebaseSetByUser;
    bool  controlTimebaseSetByUserIsInUse;
    NSError * error;
    NSObject<OS_dispatch_queue> * flushCallbackListQueue;
    NSObject<OS_dispatch_queue> * flushCallbackQueue;
    NSMutableArray * flushCallbacks;
    bool  isRequestingMediaData;
    AVMediaDataRequester * mediaDataRequester;
    bool  outputObscured;
    struct CGSize { 
        double width; 
        double height; 
    }  presentationSize;
    struct OpaqueCMTimebase { } * readOnlyRenderingTimebase;
    struct OpaqueCMTimebase { } * readOnlyVideoQueueTimebase;
    NSObject<OS_dispatch_queue> * serialQueue;
    long long  status;
    NSString * videoGravity;
    struct OpaqueFigVideoQueue { } * videoQueue;
    AVWeakReference * weakReferenceToSelf;
    AVWeakReference * weakReferenceToSynchronizer;
}

@end