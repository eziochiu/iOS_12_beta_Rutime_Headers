/* made by EzioChiu.
 */

@protocol PUOneUpAccessoryViewControllersManagerDelegate <NSObject>

@optional

- (bool)oneUpAccessoryViewControllersManager:(PUOneUpAccessoryViewControllersManager *)arg1 preventRevealInMomentActionForAssetReference:(PUAssetReference *)arg2;
- (bool)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(PUOneUpAccessoryViewControllersManager *)arg1;

@end
