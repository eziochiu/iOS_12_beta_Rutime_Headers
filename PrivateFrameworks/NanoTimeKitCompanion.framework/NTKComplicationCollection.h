/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationCollection : NSObject {
    NSString * _collectionIdentifier;
    NSXPCConnection * _connection;
    NSUUID * _deviceUUID;
    bool  _hasLoaded;
    NSMutableDictionary * _localizeableSampleDataTemplates;
    NSHashTable * _observers;
    NSLock * _observersLock;
    bool  _registrationNeeded;
    NSNumber * _seqId;
    NSLock * _templatesLock;
    NSMutableArray * _updatesEnqueuedWhileSuspended;
    bool  _updatesSuspended;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic, readonly) bool hasLoaded;

+ (id)sharedRemoteCollection;

- (void).cxx_destruct;
- (id)_bundleForWatchKitAppID:(id)arg1;
- (void)_handleConnectionInterrupted;
- (void)_notifyLoaded;
- (void)_notifyRemovedComplicationForClientIdentifier:(id)arg1;
- (void)_notifyUpdateComplicationSampleTemplateForClientIdentifier:(id)arg1;
- (void)_performOrEnqueueUpdate:(id /* block */)arg1;
- (void)_registerIfNeeded;
- (void)_removeComplicationForClientIdentifier:(id)arg1;
- (void)_sendToDaemonRemoveComplicationforClientIdentifier:(id)arg1;
- (void)_sendToDaemonUpdatedSampleDataTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (void)_setLocalizedSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)addObserver:(id)arg1;
- (id)clients;
- (id)clientsSupportingFamily:(long long)arg1;
- (id)collectionIdentifier;
- (void)dealloc;
- (id)deviceUUID;
- (bool)hasLoaded;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 seqId:(id)arg2;
- (void)removeAllComplicationsExceptThoseWithClientIdentifiers:(id)arg1;
- (void)removeComplicationForClientIdentifier:(id)arg1;
- (void)removeComplicationForClientIdentifier:(id)arg1 seqId:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)resumeUpdatesFromDaemon;
- (id)sampleTemplateForClientIdentifier:(id)arg1 applicationID:(id)arg2 family:(long long)arg3;
- (void)setLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (id)supportedTemplateFamiliesForClientIdentifier:(id)arg1;
- (void)suspendUpdatesFromDaemon;
- (void)updateLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3 seqId:(id)arg4;

@end
