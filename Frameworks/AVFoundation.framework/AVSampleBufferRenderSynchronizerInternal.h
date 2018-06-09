/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {
    struct OpaqueFigSampleBufferRenderSynchronizer { } * figSynchronizer;
    NSObject<OS_dispatch_queue> * figSynchronizerAccessQueue;
    float  rate;
    struct OpaqueCMTimebase { } * readOnlyTimebase;
    NSObject<OS_dispatch_queue> * rendererListQueue;
    NSMutableArray * renderers;
    NSMutableArray * timedRenderRemovals;
}

@end
