/* made by EzioChiu.
 */

@protocol PXPeopleFlowViewControllerActionDelegate <NSObject>

@required

- (void)requestAdvanceToNextInFlow;
- (void)requestCancel;
- (void)setAdvanceButtonEnabled:(bool)arg1;

@end
