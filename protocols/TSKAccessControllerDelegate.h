/* made by EzioChiu.
 */

@protocol TSKAccessControllerDelegate <NSObject>

@optional

- (void)didAcquireReadLock;
- (void)willRelinquishReadLock;

@end
