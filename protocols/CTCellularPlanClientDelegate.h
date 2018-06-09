/* made by EzioChiu.
 */

@protocol CTCellularPlanClientDelegate <NSObject>

@required

- (void)carrierInfoDidUpdate;
- (void)planInfoDidUpdate;
- (void)remoteProvisioningDidBecomeAvailable;

@end
