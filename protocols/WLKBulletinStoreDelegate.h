/* made by EzioChiu.
 */

@protocol WLKBulletinStoreDelegate <NSObject>

@required

- (void)bulletinStore:(WLKBulletinStore *)arg1 didRemoveBulletinWithCoalescingIDs:(NSSet *)arg2;

@end
