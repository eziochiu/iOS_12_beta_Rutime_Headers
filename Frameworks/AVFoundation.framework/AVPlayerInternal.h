/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerInternal : NSObject {
    void * IAPDCallbackToken;
    bool  IOwnTheFigPlayer;
    bool  PIPModePossible;
    long long  actionAtItemEnd;
    bool  airPlayVideoActive;
    bool  allowsExternalPlayback;
    bool  allowsOutOfBandTextTrackRendering;
    bool  allowsPixelBufferPoolSharing;
    NSString * ancillaryPerformanceInformationForDisplay;
    bool  appliesMediaSelectionCriteriaAutomatically;
    NSString * audioOutputDeviceUniqueID;
    AVAudioSession * audioSession;
    AVAudioSessionMediaPlayerOnly * audioSessionMediaPlayerOnly;
    bool  autoSwitchStreamVariants;
    bool  automaticallyWaitsToMinimizeStalling;
    NSHashTable * avPlayerLayers;
    NSDictionary * cachedFigMediaSelectionCriteriaProperty;
    NSString * captionPipelineStrategy;
    NSString * captionRenderingStrategy;
    NSString * clientName;
    long long  clientPriority;
    bool  closedCaptionDisplayEnabled;
    NSMutableArray * closedCaptionLayers;
    NSObject<OS_dispatch_queue> * configurationQueue;
    AVPlayerItem * currentItem;
    bool  currentItemNonForcedSubtitlesEnabled;
    <AVCallbackCancellation><AVKVOIntrospection> * currentItemPreferredPixelBufferAttributesCallbackInvoker;
    struct CGSize { 
        double width; 
        double height; 
    }  currentItemPresentationSize;
    NSObject<OS_dispatch_queue> * currentItemPropertyUpdateQueue;
    <AVCallbackCancellation><AVKVOIntrospection> * currentItemSuppressesVideoLayersCallbackInvoker;
    struct CGSize { 
        double width; 
        double height; 
    }  dimensionsOfReservedVideoMemory;
    bool  disallowsAMRAudio;
    bool  disallowsHardwareAcceleratedVideoDecoder;
    bool  disallowsVideoLayerDisplayCompositing;
    NSArray * displaysUsedForPlayback;
    bool  dynamicallyChoosesInitialVariant;
    NSError * error;
    NSArray * expectedAssetTypes;
    bool  externalPlaybackActive;
    NSString * externalPlaybackVideoGravity;
    NSObject<OS_dispatch_queue> * figConfigurationQueue;
    struct OpaqueCMClock { } * figMasterClock;
    struct OpaqueFigPlaybackItem { } * figPlaybackItemToIdentifyNextCurrentItem;
    struct OpaqueFigPlayer { } * figPlayer;
    bool  hadAssociatedOnscreenPlayerLayerWhenSuspended;
    NSMutableArray * handlersToCallWhenReadyToPlay;
    bool  hostApplicationInForeground;
    bool  isDisplayingClosedCaptions;
    NSMutableSet * items;
    NSArray * itemsInFigPlayQueue;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * lastItem;
    bool  layerDestinationIsTVOut;
    NSObject<OS_dispatch_queue> * layerInteractionQueue;
    NSObject<OS_dispatch_queue> * layersQ;
    bool  limitsBandwidthForCellularAccess;
    bool  logPerformanceData;
    <AVLoggingIdentifier> * loggingIdentifier;
    float  maxRateForAudioPlayback;
    float  minRateForAudioPlayback;
    NSString * multichannelAudioStrategy;
    bool  muted;
    bool  needsToCreateFigPlayer;
    int  nextPrerollIDToGenerate;
    AVOutputContext * outputContext;
    bool  outputObscuredDueToInsufficientExternalProtection;
    NSMutableDictionary * pendingFigPlayerProperties;
    int  pendingPrerollID;
    AVPixelBufferAttributeMediator * pixelBufferAttributeMediator;
    NSString * playerRole;
    unsigned long long  preferredVideoDecoderGPURegistryID;
    bool  preparesItemsForPlaybackAsynchronously;
    id /* block */  prerollCompletionHandler;
    struct OpaqueFigSimpleMutex { } * prerollIDMutex;
    bool  preventsDisplaySleepDuringVideoPlayback;
    AVPropertyStorage * propertyStorage;
    struct OpaqueCMTimebase { } * proxyTimebase;
    NSArray * queueModifications;
    float  rate;
    NSString * reasonForWaitingToPlay;
    bool  reevaluateBackgroundPlayback;
    bool  shouldReduceResourceUsage;
    NSObject<OS_dispatch_queue> * stateDispatchQueue;
    long long  status;
    NSMutableArray * subtitleLayers;
    long long  timeControlStatus;
    float  userVolume;
    bool  usesAudioOnlyModeForExternalPlayback;
    bool  usesDedicatedNotificationQueueForMediaServices;
    bool  usesExternalPlaybackWhileExternalScreenIsActive;
    bool  usesLegacyAutomaticWaitingBehavior;
    NSDictionary * vibrationPattern;
    struct __CFDictionary { } * videoLayers;
    float  volume;
    AVWeakReference * weakReference;
}

@end
