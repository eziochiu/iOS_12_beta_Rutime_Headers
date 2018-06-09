/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate> {
    MSMediaStreamDaemon * _daemon;
    <MSSharingManagerDelegate> * _delegate;
    NSMutableArray * _deleteQueue;
    NSMutableArray * _invitationQueue;
    NSMutableArray * _invitationResponseQueue;
    NSMutableDictionary * _manageShareByPersonID;
    NSTimer * _manageShareDebounceTimer;
    NSString * _manifestPath;
    NSString * _personID;
    MSSharingProtocol * _protocol;
    bool  _requestCurrentStateRequested;
    NSArray * _shares;
    NSMutableArray * _sharesWithLocalModifications;
    int  _state;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSSharingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, retain) NSArray *shares;
@property (readonly) Class superclass;

+ (id)_clearInstantiatedSharingManagersByPersonID;
+ (void)abortAllActivities;
+ (id)existingSharingManagerForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (id)sharingManagerForPersonID:(id)arg1;

- (void).cxx_destruct;
- (void)_performNextQueuedAction;
- (void)_requestCurrentShareState;
- (void)_sendNextDeletion;
- (void)_sendNextInvitation;
- (void)_sendNextInvitationResponse;
- (void)_sendNextManagedShare;
- (void)_shareDebounceTimerDidFire:(id)arg1;
- (id)_sharesWithLocalModifications;
- (void)abort;
- (id)daemon;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)modifyShare:(id)arg1;
- (id)personID;
- (void)refreshCurrentShareState;
- (void)removeShare:(id)arg1;
- (void)respondToInvitation:(id)arg1 accept:(bool)arg2;
- (void)sendInvitationsForShares:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShares:(id)arg1;
- (id)shares;
- (void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;

@end
