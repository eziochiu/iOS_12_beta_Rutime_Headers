/* made by EzioChiu.
 */

@protocol PLCloudChangeTracker <NSObject>

@required

- (void)clearToken;
- (bool)connect;
- (<PLCloudChangeTrackerDelegate> *)delegate;
- (void)disconnect;
- (<PLCloudChangeEventsResult> *)fetchAllEvents;
- (<PLCloudChangeEventsResult> *)fetchDeletionEvents;
- (void)forceTokenToCurrent;
- (bool)hasChangeTrackerToken;
- (bool)isConnected;
- (NSString *)lastKnownDeletionTokenDescription;
- (NSString *)lastKnownTokenDescription;
- (NSString *)name;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)setDelegate:(id <PLCloudChangeTrackerDelegate>)arg1;
- (void)updateLastKnownDeletionTokenToResult:(id <PLCloudChangeEventsResult>)arg1;
- (void)updateLastKnownTokenToResult:(id <PLCloudChangeEventsResult>)arg1;

@end
