/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMTimingCollection : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _timings;
}

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)dealloc;
- (id)description;
- (bool)hasKey:(id)arg1;
- (id)init;
- (void)removeTimingForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (void)stopTimingForKey:(id)arg1;
- (double)totalTimeForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)activeGlobalTimingCollections;
+ (id)globalTimingCollectionForKey:(id)arg1;
+ (void)invalidateGlobalTimingCollectionForKey:(id)arg1;
+ (void)invalidateGlobalTimingCollections;
+ (void)logTimingCollectionForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)IMCoreSetupTimingCollection;
+ (void)IMCoreSetupTimingCollectionEnd;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

+ (id)IMDaemonCoreMessageReceivedTimingCollection;

@end
