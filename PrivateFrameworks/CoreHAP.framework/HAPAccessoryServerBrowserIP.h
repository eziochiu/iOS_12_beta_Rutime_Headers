/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPWACScanControlDelegate, HMFTimerDelegate> {
    struct BonjourBrowser { } * _bonjourBrowser;
    HMFTimer * _bonjourEventTimer;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableSet * _discoveredAccessoryServers;
    NSMutableSet * _pendingBonjourEvents;
    HAPWACScanInstance * _scanInstance;
    NSArray * _scanResults;
}

@property (nonatomic, retain) HMFTimer *bonjourEventTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *discoveredAccessoryServers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *pendingBonjourEvents;
@property (nonatomic, retain) HAPWACScanInstance *scanInstance;
@property (nonatomic, copy) NSArray *scanResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDevice:(id)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (int)_initializeAndStartBonjourBrowser;
- (void)_invalidateAccessoryServers:(bool)arg1;
- (void)_invalidateAndRemoveAccessoryServer:(id)arg1;
- (void)_invalidateWACServers;
- (void)_matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (void)_processPendingBonjourEvent:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(bool)arg2;
- (void)_removeDevice:(id)arg1;
- (void)_reprovisionDevice:(id)arg1;
- (int)_server:(id*)arg1 forBonjourDevice:(id)arg2;
- (int)_server:(id*)arg1 forWACDevice:(id)arg2;
- (void)_setReachability:(bool)arg1 forServer:(id)arg2;
- (void)_timerDidExpire:(id)arg1;
- (id)bonjourEventTimer;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (id)initWithQueue:(id)arg1;
- (long long)linkType;
- (void)matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mergeScanResults:(id)arg1;
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2;
- (id)pendingBonjourEvents;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (id)scanInstance;
- (id)scanResults;
- (void)setBonjourEventTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscoveredAccessoryServers:(id)arg1;
- (void)setPendingBonjourEvents:(id)arg1;
- (void)setScanInstance:(id)arg1;
- (void)setScanResults:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startDiscoveringWACAccessoryServers;
- (void)startWACScanWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)stopDiscoveringWACAccessoryServers;
- (void)stopWACScan;
- (void)timerDidFire:(id)arg1;
- (void)updateWACAccessoryServerAgeOut:(long long)arg1;

@end
