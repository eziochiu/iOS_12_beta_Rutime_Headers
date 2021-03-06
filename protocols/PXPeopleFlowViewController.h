/* made by EzioChiu.
 */

@protocol PXPeopleFlowViewController <NSObject>

@required

- (id)context;
- (void)setContext:(id)arg1;

@optional

- (<PXPeopleFlowViewControllerActionDelegate> *)actionDelegate;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setActionDelegate:(id <PXPeopleFlowViewControllerActionDelegate>)arg1;
- (void)willTransitionToNextInFlow;
- (void)willTransitionToPreviousInFlow;

@end
