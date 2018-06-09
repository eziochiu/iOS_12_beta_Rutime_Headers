/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppInstallationWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSMutableArray * _installations;
    NSMutableArray * _observers;
    bool  _observingApplicationWorkspace;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inProgressInstallations;
@property (nonatomic, retain) NSMutableArray *installations;
@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic) bool observingApplicationWorkspace;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_applicationWorkspace;
- (void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)arg1 added:(bool)arg2 updated:(bool)arg3;
- (void)_loadBundleIdentifiersFromDiskLocked;
- (void)_saveBundleIdentifiersToDiskLocked;
- (void)_updateAppProgressWithKnownChangedProxies:(id)arg1;
- (void)_updateAppProgressWithKnownChangedProxiesLocked:(id)arg1;
- (void)_updateObservingApplicationWorkspaceLocked;
- (void)addObserver:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)dealloc;
- (void)fetchAllAppInstallations:(id /* block */)arg1;
- (id)inProgressInstallations;
- (id)init;
- (id)installations;
- (id)observers;
- (bool)observingApplicationWorkspace;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setInstallations:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setObservingApplicationWorkspace:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)startListeningForAppBundleIdentifier:(id)arg1;

@end
