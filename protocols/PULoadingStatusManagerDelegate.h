/* made by EzioChiu.
 */

@protocol PULoadingStatusManagerDelegate <NSObject>

@optional

- (void)loadingStatusManager:(PULoadingStatusManager *)arg1 didUpdateLoadingStatus:(PUOperationStatus *)arg2 forItem:(id)arg3;

@end
