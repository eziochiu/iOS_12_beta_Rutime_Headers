/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol> {
    FMFSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) FMFSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)abDidChange;
- (oneway void)abPreferencesDidChange;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didUpdateFences:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(bool)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (id)initWithFMFSession:(id)arg1;
- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(bool)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)session;
- (oneway void)setLocations:(id)arg1;
- (void)setSession:(id)arg1;

@end
