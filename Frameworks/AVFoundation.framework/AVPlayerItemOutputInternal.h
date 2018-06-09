/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemOutputInternal : NSObject {
    struct OpaqueCMTimebase { } * timebase;
    NSObject<OS_dispatch_queue> * timebaseReadWriteQueue;
    AVWeakReference * weakReference;
}

@end
