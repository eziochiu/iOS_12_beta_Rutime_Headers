/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboard : NSObject {
    NSRecursiveLock * _registrationLock;
    NSMutableDictionary * _rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary * _rootLocationToLocalPeerIDToPreviousEntries;
    NSMutableDictionary * _storeNameToLocalPeerIDToEntry;
}

+ (void)initialize;
+ (id)sharedSwitchboard;
+ (id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 inStore:(id)arg2;

- (void)_addFilePresenter:(id)arg1;
- (void)_quietlyMoveEntryToPreviousEntries:(id)arg1;
- (void)_removeFilePresenter:(id)arg1;
- (void)addEntryToPreviousEntries:(id)arg1;
- (bool)cacheFilePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)entryForStore:(id)arg1;
- (id)filePresenterForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)init;
- (bool)registerUbiquitizedPersistentStore:(id)arg1 withURL:(id)arg2 forLocalPeerID:(id)arg3 withLocalRootLocation:(id)arg4 andUbiquityRootLocation:(id)arg5 error:(id*)arg6;
- (void)releaseAllEntriesForStoreName:(id)arg1 andPeerID:(id)arg2;
- (void)removeEntryFromPreviousEntries:(id)arg1;
- (void)removeFilePresenterCachedForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)retainedEntryForStoreName:(id)arg1 andLocalPeerID:(id)arg2;
- (void)unregisterCoordinator:(id)arg1;
- (void)unregisterPersistentStore:(id)arg1;

@end
