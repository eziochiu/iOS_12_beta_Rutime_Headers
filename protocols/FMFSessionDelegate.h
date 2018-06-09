/* made by EzioChiu.
 */

@protocol FMFSessionDelegate <NSObject>

@optional

- (void)connectionError:(NSError *)arg1;
- (void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (void)didFailToFetchLocationForHandle:(FMFHandle *)arg1 withError:(NSError *)arg2;
- (void)didFailToHandleMappingPacket:(NSString *)arg1 error:(NSError *)arg2;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (void)didReceiveLocation:(FMFLocation *)arg1;
- (void)didReceiveServerError:(NSError *)arg1;
- (void)didStartAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStartSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didStopAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStopSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (void)didUpdateFavoriteHandles:(NSArray *)arg1;
- (void)didUpdateFences:(NSSet *)arg1;
- (void)didUpdateHidingStatus:(bool)arg1;
- (void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (void)mappingPacketProcessingCompleted:(NSString *)arg1;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;

@end
