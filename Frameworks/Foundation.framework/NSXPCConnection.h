/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    id  _dCache;
    id  _eCache;
    NSXPCListenerEndpoint * _endpoint;
    id  _exportInfo;
    id  _importInfo;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    id  _lock;
    <NSObject> * _otherInfo;
    NSXPCInterface * _remoteObjectInterface;
    id  _repliesExpected;
    id  _repliesRequested;
    id  _reserved1;
    NSString * _serviceName;
    unsigned int  _state;
    unsigned int  _state2;
    NSObject<OS_dispatch_queue> * _userQueue;
    void * _xconnection;
}

@property (readonly) int auditSessionIdentifier;
@property (nonatomic, readonly) bool cls_isAppExtension;
@property (nonatomic, readonly, copy) NSString *cls_signingIdentifier;
@property (nonatomic, readonly, copy) NSString *cx_applicationIdentifier;
@property (nonatomic, readonly, copy) NSString *cx_bundleIdentifier;
@property (nonatomic, readonly, copy) NSSet *cx_capabilities;
@property (nonatomic, readonly, copy) NSString *cx_developerTeamIdentifier;
@property (nonatomic, readonly, copy) NSString *cx_processName;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) id exportedObject;
@property (nonatomic, readonly) bool hk_isAppExtension;
@property (nonatomic, readonly, copy) NSString *hk_signingIdentifier;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly, copy) NSString *processBundleIdentifier;
@property (readonly) int processIdentifier;
@property (nonatomic, readonly, copy) NSString *processName;
@property (retain) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain) id remoteObjectProxy;
@property (readonly, copy) NSString *serviceName;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_currentBoost;
+ (void)beginTransaction;
+ (id)currentConnection;
+ (void)endTransaction;

- (void)_addClassToDecodeCache:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (void)_addImportedProxy:(id)arg1;
- (id /* block */)_additionalInvalidationHandler;
- (void)_cancelProgress:(unsigned long long)arg1;
- (void)_decodeAndInvokeMessageWithEvent:(id)arg1 flags:(unsigned long long)arg2;
- (void)_decodeAndInvokeReplyBlockWithEvent:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3;
- (bool)_decodeCacheContainsClass:(Class)arg1;
- (void)_decodeProgressMessageWithData:(id)arg1 flags:(unsigned long long)arg2;
- (bool)_encodeCacheContainsClass:(Class)arg1;
- (id)_errorDescription;
- (id)_exportTable;
- (unsigned long long)_generationCount;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (void)_killConnection:(int)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (id)_queue;
- (Class)_remoteObjectInterfaceClass;
- (void)_removeImportedProxy:(id)arg1;
- (void)_resumeProgress:(unsigned long long)arg1;
- (void)_sendDesistForProxy:(id)arg1;
- (void)_sendInvocation:(id)arg1 orArguments:(id*)arg2 count:(unsigned long long)arg3 methodSignature:(id)arg4 selector:(SEL)arg5 withProxy:(id)arg6;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2;
- (void)_sendProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5;
- (void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 arg4:(id)arg6;
- (void)_setQueue:(id)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (id)_unboostingRemoteObjectProxy;
- (id)_xpcConnection;
- (void)addBarrierBlock:(id /* block */)arg1;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)endpoint;
- (id)exportedInterface;
- (id)exportedObject;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id /* block */)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_additionalInvalidationHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)userInfo;
- (id)valueForEntitlement:(id)arg1;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (id)cx_applicationIdentifier;
- (id)cx_bundleIdentifier;
- (id)cx_capabilities;
- (id)cx_developerTeamIdentifier;
- (id)cx_processName;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (bool)cls_isAppExtension;
- (id)cls_signingIdentifier;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (id)fp_bundleIdentifier;
- (bool)fp_hasOneOfEntitlements:(id)arg1;
- (bool)fp_hasOneOfEntitlements:(id)arg1 logLevel:(unsigned long long)arg2;
- (bool)fp_hasSandboxAccessToFile:(id)arg1;
- (bool)fp_hasSandboxAccessToFile:(id)arg1 accessType:(const char *)arg2 logLevel:(unsigned long long)arg3;
- (bool)fp_hasSandboxAccessToFile:(id)arg1 logLevel:(unsigned long long)arg2;
- (bool)fp_isNonSandboxedConnection;
- (id)fp_valueForEntitlement:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (bool)hk_isAppExtension;
- (id)hk_signingIdentifier;

// Image: /System/Library/Frameworks/Social.framework/Social

- (id)_clientBundleID;
- (bool)sl_clientHasEntitlement:(id)arg1;
- (id)sl_localizedClientName;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)cp_bundleIdentifier;

// Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager

- (id)initCellularPlanDatabaseClient;
- (id)initVinylTestClient;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKValueForEntitlements:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices

- (bool)ccs_hasEntitlementForModuleIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)sgd_clientName;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (bool)_dnds_isSettingsProcess;
- (id)_dnds_safeStringArrayEntitlementForKey:(id)arg1;
- (bool)dnds_hasAnyValidEntitlement;
- (bool)dnds_hasBehaviorResolutionEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeAssertionEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasModeAssertionEntitlementsToRequestLifetime:(id)arg1 forClientIdentifier:(id)arg2;
- (bool)dnds_hasSettingsModificationEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasSettingsRequestEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasSettingsUpdatesEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasStateRequestEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasStateUpdatesEntitlementForClientIdentifier:(id)arg1;
- (bool)dnds_hasUserRequestedModeAssertionEntitlementForClientIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1;
- (id)PG_remoteObjectProxyWithDebugMethodAndPointerProem:(id)arg1 errorHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)callServicesClientXPCInterface;
+ (id)callServicesDaemonDelegateXPCInterface;

- (id)processBundleIdentifier;
- (id)processName;

// Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement

- (bool)hasEntitlement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_clientBundleProxy;
- (bool)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;

// Image: /usr/lib/libnfshared.dylib

- (id)NF_userInfo;

@end
