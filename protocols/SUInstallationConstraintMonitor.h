/* made by EzioChiu.
 */

@protocol SUInstallationConstraintMonitor

@required

- (<SUInstallationConstraintMonitorDelegate> *)delegate;
- (bool)isSatisfied;
- (unsigned long long)representedConstraints;
- (void)setDelegate:(id <SUInstallationConstraintMonitorDelegate>)arg1;
- (unsigned long long)unsatisfiedConstraints;

@end
