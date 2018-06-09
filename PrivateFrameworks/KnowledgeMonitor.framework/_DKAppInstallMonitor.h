/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKAppInstallMonitor : _DKMonitor <LSApplicationWorkspaceObserverProtocol> {
    LSApplicationWorkspace * _appWorkspace;
}

@property (nonatomic, retain) LSApplicationWorkspace *appWorkspace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dateFromProxy:(id)arg1;
+ (id)_eventWithAppProxy:(id)arg1 didInstall:(bool)arg2;
+ (id)_identifierFromProxy:(id)arg1;
+ (id)_metadataFromProxy:(id)arg1 didInstall:(bool)arg2;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1 didInstall:(bool)arg2;
- (id)appWorkspace;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (id)init;
- (void)setAppWorkspace:(id)arg1;

@end
