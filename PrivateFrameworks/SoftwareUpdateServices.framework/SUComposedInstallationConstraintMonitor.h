/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitor, SUInstallationConstraintMonitorDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    <SUInstallationConstraintMonitorDelegate> * _queue_delegate;
    NSSet * _queue_installationConstraintMonitors;
    unsigned long long  _queue_representedConstraints;
}

@property (nonatomic, readonly, retain) NSSet *constraintMonitors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUInstallationConstraintMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long representedConstraints;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unsatisfiedConstraints;

- (void).cxx_destruct;
- (void)_queue_clearDelegate;
- (id)_queue_delegate;
- (void)_queue_invalidateChildConstraintMonitors;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (unsigned long long)_queue_representedConstraints;
- (void)_queue_setDelegate:(id)arg1;
- (unsigned long long)_queue_unsatisfiedConstraints;
- (id)constraintMonitors;
- (void)dealloc;
- (id)delegate;
- (id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (bool)isSatisfied;
- (unsigned long long)representedConstraints;
- (void)setDelegate:(id)arg1;
- (unsigned long long)unsatisfiedConstraints;

@end
