/* made by EzioChiu.
 */

@protocol PXPeopleFlowController <NSObject>

@required

- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (bool)hasNextViewController;
- (bool)hasPreviousViewController;
- (UIViewController<PXPeopleFlowViewController> *)nextViewController;
- (UIViewController<PXPeopleFlowViewController> *)previousViewController;

@end
