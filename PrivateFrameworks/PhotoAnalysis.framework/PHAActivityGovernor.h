/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAActivityGovernor : NSObject {
    NSObject<OS_xpc_object> * _backgroundActivity;
    char * _backgroundActivityName;
    NSObject<OS_dispatch_source> * _backgroundDeferCheckTimer;
    <PHAActivityGovernorDelegate> * _delegate;
    NSObject<OS_xpc_object> * _foregroundActivity;
    char * _foregroundActivityName;
    NSObject<OS_dispatch_source> * _foregroundDeferCheckTimer;
    bool  _hasBackgroundAccess;
    bool  _hasForegroundAccess;
    bool  _overrideAccess;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _simulatedNeverHasAccess;
    bool  _simulatedWantsDefer;
    double  _timeOfLastForegroundGrant;
    double  _timeOfLastForegroundWantRequest;
    double  _timeSpentForegroundGranted;
    double  _timeSpentWantingForeground;
    bool  _wantsBackgroundAccess;
    bool  _wantsForegroundAccess;
}

@property (retain) NSObject<OS_xpc_object> *backgroundActivity;
@property (retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer;
@property (nonatomic) <PHAActivityGovernorDelegate> *delegate;
@property (retain) NSObject<OS_xpc_object> *foregroundActivity;
@property (retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer;
@property (nonatomic) bool hasBackgroundAccess;
@property (nonatomic) bool hasForegroundAccess;
@property (nonatomic) bool overrideAccess;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool simulatedNeverHasAccess;
@property (nonatomic) bool simulatedWantsDefer;
@property (nonatomic) double timeOfLastForegroundGrant;
@property (nonatomic) double timeOfLastForegroundWantRequest;
@property (nonatomic) double timeSpentForegroundGranted;
@property (nonatomic) double timeSpentWantingForeground;
@property (nonatomic) bool wantsBackgroundAccess;
@property (nonatomic) bool wantsForegroundAccess;

- (void).cxx_destruct;
- (const char *)_activityNameForLevel:(unsigned long long)arg1;
- (void)_generateActivityNames;
- (void)_inq_finishActivity:(id*)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3;
- (void)_inq_handleRequestChangeForAccessLevel:(unsigned long long)arg1;
- (bool)_inq_hasAccessForLevel:(unsigned long long)arg1;
- (void)_inq_installDeferMonitorForActivity:(id)arg1 accessLevel:(unsigned long long)arg2;
- (void)_inq_registerActivityNamed:(const char *)arg1 withCriteria:(id)arg2 accessLevel:(unsigned long long)arg3;
- (void)_inq_removeDeferTimer:(id)arg1;
- (void)_inq_teardownActivity:(id*)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3;
- (bool)_inq_wantsAccessForLevel:(unsigned long long)arg1;
- (id)backgroundActivity;
- (id)backgroundDeferCheckTimer;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)foregroundActivity;
- (id)foregroundDeferCheckTimer;
- (bool)hasBackgroundAccess;
- (bool)hasForegroundAccess;
- (id)init;
- (bool)overrideAccess;
- (id)queue;
- (void)setBackgroundActivity:(id)arg1;
- (void)setBackgroundDeferCheckTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundActivity:(id)arg1;
- (void)setForegroundDeferCheckTimer:(id)arg1;
- (void)setHasBackgroundAccess:(bool)arg1;
- (void)setHasForegroundAccess:(bool)arg1;
- (void)setOverrideAccess:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSimulatedNeverHasAccess:(bool)arg1;
- (void)setSimulatedWantsDefer:(bool)arg1;
- (void)setTimeOfLastForegroundGrant:(double)arg1;
- (void)setTimeOfLastForegroundWantRequest:(double)arg1;
- (void)setTimeSpentForegroundGranted:(double)arg1;
- (void)setTimeSpentWantingForeground:(double)arg1;
- (void)setWantsBackgroundAccess:(bool)arg1;
- (void)setWantsForegroundAccess:(bool)arg1;
- (bool)simulatedNeverHasAccess;
- (bool)simulatedWantsDefer;
- (id)statusAsDictionary;
- (double)timeOfLastForegroundGrant;
- (double)timeOfLastForegroundWantRequest;
- (double)timeSpentForegroundGranted;
- (double)timeSpentWantingForeground;
- (bool)wantsBackgroundAccess;
- (bool)wantsForegroundAccess;

@end
