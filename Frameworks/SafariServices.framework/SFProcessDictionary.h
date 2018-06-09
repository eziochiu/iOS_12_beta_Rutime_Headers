/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFProcessDictionary : NSObject {
    unsigned long long  _cacheCapacity;
    NSMutableDictionary * _pidToBundleIdentifierMap;
    NSMutableSet * _pidsPendingTermination;
    NSMutableArray * _recentlyReferencedPIDs;
    NSCountedSet * _references;
    BKSApplicationStateMonitor * _stateMonitor;
    NSMutableDictionary * _values;
}

@property (nonatomic, readonly) unsigned long long cacheCapacity;

- (void).cxx_destruct;
- (void)_handleApplicationStateUpdate:(id)arg1;
- (void)_handleProcessTermination:(int)arg1;
- (void)_removeUnreferencedObjectsIfNeeded;
- (void)_removeValueForPID:(id)arg1;
- (void)_updateInterestedApplications;
- (unsigned long long)cacheCapacity;
- (void)dealloc;
- (void)decrementReferenceForPID:(int)arg1;
- (id)incrementReferenceForPID:(int)arg1 bundleIdentifier:(id)arg2 valueCreationBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithCacheCapacity:(unsigned long long)arg1;

@end