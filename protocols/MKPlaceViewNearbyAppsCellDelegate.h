/* made by EzioChiu.
 */

@protocol MKPlaceViewNearbyAppsCellDelegate <NSObject>

@required

- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg1 openAppWithBundleID:(NSString *)arg2 storeID:(NSNumber *)arg3;
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg1 showStorePageWithURL:(NSString *)arg2 storeID:(NSNumber *)arg3;

@end
