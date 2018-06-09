/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcess : NSObject <BSDescriptionProviding, FBSProcessIdentity, FBSProcessInternal, FBUIProcess> {
    long long  _backgroundingPolicy;
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    <FBProcessDelegate> * _delegate;
    long long  _executableOnSystemPartition;
    NSString * _executablePath;
    BSProcessHandle * _handle;
    NSString * _jobLabel;
    NSString * _name;
    NSHashTable * _observers;
    int  _pid;
    BSProcessDeathWatcher * _processDeathObserver;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    FBProcessState * _state;
    bool  _supportsSuspendOnLock;
    bool  _updatingState;
    FBWorkspace * _workspace;
}

@property (nonatomic, readonly) long long backgroundingPolicy;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBProcessDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool executableLivesOnSystemPartition;
@property (getter=isForeground, nonatomic, readonly) bool foreground;
@property (nonatomic, readonly, retain) FBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=_queue_executablePath, setter=_queue_setExecutablePath:, nonatomic, copy) NSString *queue_executablePath;
@property (getter=_queue_jobLabel, setter=_queue_setJobLabel:, nonatomic, copy) NSString *queue_jobLabel;
@property (getter=_queue_name, setter=_queue_setName:, nonatomic, copy) NSString *queue_name;
@property (getter=_queue_pid, setter=_queue_setPid:, nonatomic) int queue_pid;
@property (getter=_queue_isRunning, setter=_queue_setRunning:, nonatomic) bool queue_running;
@property (getter=_queue_taskState, setter=_queue_setTaskState:, nonatomic) int queue_taskState;
@property (getter=_queue_visibility, setter=_queue_setVisibility:, nonatomic) int queue_visibility;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly, copy) FBProcessState *state;
@property (readonly) Class superclass;
@property (getter=_queue_supportsSuspendOnLock, setter=_queue_setSupportsSuspendOnLock:, nonatomic) bool supportsSuspendOnLock;
@property (nonatomic, readonly, retain) BSMachPortTaskNameRight *taskNameRight;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) FBWorkspace *workspace;

- (void).cxx_destruct;
- (id)_createWorkspace;
- (int)_effectiveVisibilityForSceneSettings:(id)arg1 underLock:(bool)arg2;
- (int)_effectiveVisibilityForVisibility:(int)arg1 underLock:(bool)arg2;
- (bool)_isEffectivelyForegroundForSceneSettings:(id)arg1 underLock:(bool)arg2;
- (id)_queue;
- (void)_queue_callExitObservers;
- (void)_queue_configureWithHandle:(id)arg1;
- (bool)_queue_consideredUnderLock;
- (int)_queue_effectiveVisibilityForVisibility:(int)arg1;
- (void)_queue_enumerateObserversWithBlock:(id /* block */)arg1;
- (bool)_queue_executableLivesOnSystemPartition;
- (id)_queue_executablePath;
- (bool)_queue_isForeground;
- (bool)_queue_isRunning;
- (id)_queue_jobLabel;
- (id)_queue_name;
- (id)_queue_newWatchdogForContext:(id)arg1 completion:(id /* block */)arg2;
- (int)_queue_pid;
- (void)_queue_processDidExit;
- (void)_queue_sceneLifecycleStateChanged:(id)arg1;
- (void)_queue_setExecutablePath:(id)arg1;
- (void)_queue_setJobLabel:(id)arg1;
- (void)_queue_setName:(id)arg1;
- (void)_queue_setPid:(int)arg1;
- (void)_queue_setRunning:(bool)arg1;
- (void)_queue_setSupportsSuspendOnLock:(bool)arg1;
- (void)_queue_setTaskState:(int)arg1;
- (void)_queue_setVisibility:(int)arg1;
- (bool)_queue_supportsSuspendOnLock;
- (int)_queue_taskState;
- (void)_queue_toggleProcessDeathObserver:(bool)arg1;
- (void)_queue_updateStateWithBlock:(id /* block */)arg1;
- (int)_queue_visibility;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)_workspace;
- (void)addObserver:(id)arg1;
- (long long)backgroundingPolicy;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)executableLivesOnSystemPartition;
- (id)handle;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3;
- (id)initWithProcessHandle:(id)arg1 callOutQueue:(id)arg2;
- (bool)isApplicationProcess;
- (bool)isExtensionProcess;
- (bool)isForeground;
- (bool)isRunning;
- (bool)isSystemApplicationProcess;
- (id)jobLabel;
- (id)name;
- (int)pid;
- (void)removeObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;
- (long long)type;
- (id)valueForEntitlement:(id)arg1;
- (id)workspace;

@end
