/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate> {
    MSASAlbum * _album;
    IDSService * _idsService;
    NSMutableDictionary * _sendMessageIdentifierToPhone;
    MSASStateMachine * _stateMachine;
}

@property (nonatomic, retain) MSASAlbum *album;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property (nonatomic, retain) NSMutableDictionary *sendMessageIdentifierToPhone;
@property (nonatomic, retain) MSASStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3;
- (id)album;
- (id)idsService;
- (id)init;
- (void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2;
- (id)sendMessageIdentifierToPhone;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setAlbum:(id)arg1;
- (void)setIdsService:(id)arg1;
- (void)setSendMessageIdentifierToPhone:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (id)stateMachine;

@end
