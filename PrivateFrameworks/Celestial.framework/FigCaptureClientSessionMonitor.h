/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureClientSessionMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    id /* block */  _applicationAndLayoutStateHandler;
    NSString * _applicationID;
    int  _applicationState;
    id  _applicationStateChangeNotificationToken;
    NSArray * _avconferenceClientApplicationIDs;
    unsigned int  _bksApplicationState;
    bool  _bksApplicationStateInitialized;
    NSString * _cachedApplicationIDToInheritAppStateFrom;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _clientCanInheritApplicationState;
    int  _clientType;
    FigCaptureDisplayLayoutMonitor * _displayLayoutMonitor;
    NSString * _extensionHostApplicationID;
    int  _extensionHostApplicationState;
    bool  _haveExternalCMSession;
    id /* block */  _interruptionHandler;
    id  _interruptionStateChangeNotificationToken;
    bool  _invalid;
    bool  _isForThirdPartyTorch;
    int  _layoutState;
    bool  _layoutStateInitialized;
    int  _pid;
    int  _pidToInheritAppStateFrom;
    int  _resolvedExtensionApplicationState;
    struct opaqueCMSession { } * _session;
    struct OpaqueFigSimpleMutex { } * _sessionLock;
    struct OpaqueFigSimpleMutex { } * _stateChangeLock;
}

@property (readonly) NSString *applicationID;
@property (readonly) int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct opaqueCMSession { }*session;
@property (readonly) Class superclass;

+ (int)_applicationStateForBKSApplicationState:(unsigned int)arg1 clientType:(int)arg2 applicationID:(id)arg3;
+ (int)_applicationStateForClientLayoutState:(int)arg1 clientType:(int)arg2;
+ (bool)_isSupportedExtensionClientType:(int)arg1;
+ (id)_stringForApplicationState:(int)arg1;
+ (id)_stringForBKSApplicationState:(unsigned int)arg1;
+ (id)_stringForClientLayoutState:(int)arg1;
+ (id)_stringForClientType:(int)arg1;
+ (void)initialize;
+ (void)startPrewarmingMonitor;
+ (void)stopPrewarmingMonitor;

- (int)_createAndObserveCMSession;
- (void)_deregisterAndReleaseCMSession;
- (void)_handleApplicationStateChange:(unsigned int)arg1;
- (void)_handleAudioInterruptionChange:(int)arg1;
- (void)_handleCMSessionManagerNofification:(id)arg1;
- (id)_initWithClientAuditToken:(id)arg1 forThirdPartyTorch:(bool)arg2 avconferenceClientApplicationIDs:(id)arg3 applicationAndLayoutStateHandler:(id /* block */)arg4 interruptionHandler:(id /* block */)arg5;
- (bool)_isApplicationStateMonitoringRequiredForClient;
- (bool)_isCMSessionInterruptionObservingRequiredForClient;
- (bool)_isDisplayLayoutMonitoringRequiredForClient;
- (id)_logString;
- (void)_notifyIfResolvedSupportedExtensionApplicationStateOrLayoutStateDidChangeUsingLayoutStateChanged:(bool)arg1;
- (int)_registerCMSessionForObservation;
- (id)_resolveApplicationID;
- (int)_resolveApplicationState;
- (void)_setUpApplicationInfo;
- (void)_updateApplicationState;
- (void)_updateClientStateCondition:(void*)arg1 newValue:(id)arg2;
- (id)applicationID;
- (int)clientType;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAVConferenceClientApplicationIDs:(id)arg1 applicationAndLayoutStateHandler:(id /* block */)arg2 interruptionHandler:(id /* block */)arg3;
- (id)initWithClientAuditToken:(id)arg1 forThirdPartyTorch:(bool)arg2 applicationAndLayoutStateHandler:(id /* block */)arg3 interruptionHandler:(id /* block */)arg4;
- (void)invalidate;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 layoutState:(int)arg3;
- (int)observeSession:(struct opaqueCMSession { }*)arg1;
- (struct opaqueCMSession { }*)session;

@end
