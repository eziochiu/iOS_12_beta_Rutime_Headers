/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcess : NSObject <BSDescriptionProviding, FBSProcessInternal> {
    NSString * _bundleIdentifier;
    NSString * _launchdLabel;
    NSString * _name;
    int  _pid;
    BSMachPortTaskNameRight * _taskNameRight;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) FBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *jobLabel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) int pid;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) BSMachPortTaskNameRight *taskNameRight;
@property (nonatomic, readonly) long long type;

+ (id)currentProcess;

- (void).cxx_destruct;
- (id)_initForCurrentProcess;
- (id)_initWithPID:(int)arg1 bundleID:(id)arg2;
- (void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2;
- (bool)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2;
- (id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3;
- (void)_watchdogStarted:(id)arg1;
- (void)_watchdogStopped:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)handle;
- (id)init;
- (bool)isRunning;
- (id)jobLabel;
- (id)name;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)taskNameRight;
- (long long)type;

@end
