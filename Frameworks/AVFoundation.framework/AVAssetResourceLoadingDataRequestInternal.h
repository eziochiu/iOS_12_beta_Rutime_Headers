/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingDataRequestInternal : NSObject {
    bool  canSupplyIncrementalDataImmediately;
    long long  currentOffset;
    NSObject<OS_dispatch_queue> * dataResponseQueue;
    long long  requestedLength;
    long long  requestedOffset;
    bool  requestsAllDataToEndOfResource;
    AVWeakReference * weakReferenceToLoadingRequest;
}

@end
