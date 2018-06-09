/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSGroupSession : NSObject <IDSBaseSocketPairConnectionDelegate, IDSDaemonListenerProtocol> {
    NSString * _accountID;
    bool  _alwaysSkipSelf;
    id  _boostContext;
    bool  _cfsJoinReply;
    bool  _cfsLeaveReply;
    struct cfs_client_s { } * _cfs_client;
    int  _cfs_requestID;
    NSString * _clientUUID;
    unsigned long long  _connectionCountHint;
    CUTWeakReference * _delegate;
    id  _delegateContext;
    NSSet * _destinations;
    bool  _didJoinCallback;
    bool  _didLeaveCallback;
    bool  _disallowCellularInterface;
    bool  _disallowWifiInterface;
    NSArray * _existingParticipants;
    NSString * _fromID;
    NSString * _groupID;
    NSError * _joinLeaveError;
    bool  _needsToWaitForPreConnectionData;
    NSDictionary * _participantInfo;
    bool  _preferCellularForCallSetup;
    NSMutableDictionary * _preferences;
    unsigned long long  _preferredAddressFamily;
    NSNumber * _previousError;
    NSNumber * _qrReason;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionConfig;
    unsigned int  _sessionEndedReason;
    NSString * _stableGroupID;
    unsigned int  _state;
    long long  _transportType;
    NSString * _uniqueID;
    IDSBaseSocketPairConnection * _unreliableSocketPairConnection;
    bool  _useConfServer;
}

@property (nonatomic, retain) id boostContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

- (void).cxx_destruct;
- (void)_broadcastNewSessionToDaemon;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)_cleanupSocketPairConnections;
- (id)boostContext;
- (void)daemonDisconnected;
- (void)dealloc;
- (void)groupSessionDidTerminate:(id)arg1;
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;
- (void)joinGroupSession;
- (void)joinWithOptions:(id)arg1;
- (void)leaveGroupSession;
- (void)requestActiveParticipants;
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(bool)arg3;
- (void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;
- (void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;
- (void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;
- (void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;
- (unsigned int)sessionEndedReason;
- (void)setBoostContext:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setParticipantInfo:(id)arg1;
- (void)setPreferences:(id)arg1;
- (unsigned int)state;
- (id)uniqueID;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(bool)arg3;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
