/* made by EzioChiu.
 */

@protocol SUICProgressIndicatorViewControllerDataSource <NSProgressReporting>

@required

- (SUICProgressStateMachine *)stateMachineForProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg1;

@end
