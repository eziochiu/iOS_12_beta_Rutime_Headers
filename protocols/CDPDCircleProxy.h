/* made by EzioChiu.
 */

@protocol CDPDCircleProxy <NSObject>

@required

+ (bool)canAuthenticate;

- (bool)anyPeerHasEnabledViewsInSet:(NSSet *)arg1 error:(id*)arg2;
- (CDPContext *)cdpContext;
- (int)circleStatus:(id*)arg1;
- (NSString *)generateRecoveryKeyWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)generateVerifierWithRcoveryKey:(NSString *)arg1 error:(id*)arg2;
- (bool)hasNonViewAwarePeers;
- (id)initWithContext:(CDPContext *)arg1;
- (bool)isLastBackupMakingPeer:(id*)arg1;
- (unsigned long long)peerCount;
- (NSDictionary *)peerDeviceNamesByPeerID;
- (NSString *)peerId;
- (bool)removeNonViewAwarePeers:(id*)arg1;
- (bool)removeThisDeviceFromCircle:(id*)arg1;
- (bool)requestToJoinCircle:(id*)arg1;
- (bool)requestToJoinCircleAfterRestore:(id*)arg1;
- (bool)requestToResetCircle:(id*)arg1;
- (bool)requestToResetCloudKitData:(id*)arg1;
- (void)setCdpContext:(CDPContext *)arg1;
- (bool)setViewsWithEnableSet:(NSSet *)arg1 disableSet:(NSSet *)arg2;
- (bool)synchronizeCircleViews;
- (bool)viewMemberForAutofillPasswords:(id*)arg1;
- (bool)viewMemberForPCSMaster:(id*)arg1;

@end
