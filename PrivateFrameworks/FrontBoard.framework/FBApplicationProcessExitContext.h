/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessExitContext : NSObject <BSDescriptionProviding> {
    unsigned long long  _exitReason;
    FBProcessState * _stateBeforeExiting;
    long long  _terminationReason;
    FBSProcessTerminationRequest * _terminationRequest;
    FBProcessWatchdogEventContext * _watchdogContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int exitCode;
@property (nonatomic, readonly) unsigned long long exitReason;
@property (nonatomic, readonly) long long exitStatus;
@property (nonatomic, readonly) bool exitedNormally;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FBProcessState *stateBeforeExiting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long terminationReason;
@property (nonatomic, retain) FBSProcessTerminationRequest *terminationRequest;
@property (nonatomic, readonly) int terminationSignal;
@property (nonatomic, retain) FBProcessWatchdogEventContext *watchdogContext;

+ (id)descriptionForExitReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)consideredJetsam;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (int)exitCode;
- (unsigned long long)exitReason;
- (long long)exitStatus;
- (bool)exitedNormally;
- (bool)fairPlayFailure;
- (id)initWithExitReason:(unsigned long long)arg1 terminationReason:(long long)arg2;
- (void)setStateBeforeExiting:(id)arg1;
- (void)setTerminationRequest:(id)arg1;
- (void)setWatchdogContext:(id)arg1;
- (id)stateBeforeExiting;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)terminationReason;
- (id)terminationRequest;
- (int)terminationSignal;
- (id)watchdogContext;

@end
