/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayerInternal : NSObject {
    NSSet * KVOInvokers;
    AVPlayerLayer * associatedPIPLayer;
    NSDictionary * clientLayers;
    FigBaseCALayer * closedCaptionLayer;
    NSObject<OS_dispatch_queue> * configurationQueue;
    AVKeyPathDependencyManager * dependencyManager;
    AVNetworkPlaybackPerfHUDLayer * hudLayer;
    bool  isPIPModeEnabled;
    bool  isPresentationLayer;
    bool  isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } * isReadyForDisplayMutex;
    bool  lanczosDownscalingEnabled;
    long long  lanczosDownscalingFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  latestAppliedPresentationSize;
    FigBaseCALayer * maskLayer;
    NSDictionary * pixelBufferAttributes;
    CALayer * placeholderContentLayerDuringPIPMode;
    AVPlayer * player;
    AVPlayer * playerBeingObserved;
    <AVCallbackCancellation> * playerCurrentItemHasVideoFrameEnqueuedKVOInvoker;
    bool  preventsChangesToSublayerHierarchy;
    NSObject<OS_dispatch_queue> * serialQueue;
    bool  shouldObservePlayer;
    NSString * subtitleGravity;
    FigSubtitleCALayer * subtitleLayer;
    NSString * videoGravity;
    FigVideoContainerLayer * videoLayer;
    bool  willManageSublayersAsSwappedLayers;
}

@end
