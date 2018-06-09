/* made by EzioChiu.
 */

@protocol ACHEarnedInstanceStoreObserving <NSObject>

@required

- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didAddNewEarnedInstances:(NSArray *)arg2;
- (void)earnedInstanceStore:(ACHEarnedInstanceStore *)arg1 didRemoveEarnedInstances:(NSArray *)arg2;

@end
