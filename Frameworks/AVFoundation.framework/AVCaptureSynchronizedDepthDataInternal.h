/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSynchronizedDepthDataInternal : NSObject {
    AVDepthData * depthData;
    bool  depthDataWasDropped;
    long long  droppedReason;
}

@end
