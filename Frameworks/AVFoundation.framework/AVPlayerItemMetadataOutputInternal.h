/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemMetadataOutputInternal : NSObject {
    struct __CFDictionary { } * accumulatedMetadataGroups;
    NSObject<OS_dispatch_queue> * accumulationQueue;
    double  advanceInterval;
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    NSArray * metadataIdentifiers;
    AVWeakReference * weakReferenceToHost;
}

@end
