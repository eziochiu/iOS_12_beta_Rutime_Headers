/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRouteDetectorInternal : NSObject {
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    bool  multipleRoutesDetected;
    AVOutputDeviceDiscoverySession * outputDeviceDiscoverySession;
}

@end
