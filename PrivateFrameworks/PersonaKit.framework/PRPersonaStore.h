/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

@interface PRPersonaStore : NSObject {
    NSLock * _connectionLock;
    NSLock * _dataVendingFlagLock;
    bool  _hasVendedData;
    NSXPCConnection * _personaServiceConnection;
    NSObject<OS_dispatch_queue> * _replyHandlingQueue;
    NSXPCListenerEndpoint * _serviceListenerEndpoint;
}

@property (nonatomic, readonly) bool hasVendedData;

- (void).cxx_destruct;
- (void)_setHasVendedData:(bool)arg1;
- (void)_startListeningForCacheChangeNotifications;
- (void)_stopListeningForCacheChangeNotifications;
- (void)allLikenessesForPrimaryiCloudAccountWithCompletion:(id /* block */)arg1;
- (void)changeCurrentSelfLikenessToLikenessWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)currentLikenessForPrimaryiCloudAccountWithCompletion:(id /* block */)arg1;
- (void)currentLikenessForPrimaryiCloudAccountWithDesiredFreshness:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)donateLikeness:(id)arg1 forEmailAddress:(id)arg2 completion:(id /* block */)arg3;
- (void)donateLikeness:(id)arg1 forPhoneNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)donateLikenessData:(id)arg1 forSenderID:(id)arg2 isPhoneNumber:(bool)arg3;
- (void)handleAppleIDEvent:(unsigned long long)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasVendedData;
- (id)init;
- (id)initWithServiceListenerEndpoint:(id)arg1;
- (id)likenessDataForPropagationToRecipient:(id)arg1 lastContactDate:(id)arg2;
- (void)likenessForEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)likenessForEmailAddress:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)likenessForPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)likenessForPhoneNumber:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (unsigned char)likenessVersionDigestForEmail:(id)arg1;
- (unsigned char)likenessVersionDigestForPhoneNumber:(id)arg1;
- (id)likenessWithUniqueID:(id)arg1;
- (void)likenessesWithExternalIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllLikenessForPrimaryiCloudAccountWithCompletion:(id /* block */)arg1;
- (void)removeLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(id /* block */)arg2;
- (void)saveLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(id /* block */)arg2;
- (void)screenNameForAppleIDWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)screenNameForEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)screenNameForPhoneNumber:(id)arg1 completion:(id /* block */)arg2;
- (void)screenNameForPrimaryiCloudAccountWithCompletion:(id /* block */)arg1;
- (void)setLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(id /* block */)arg2;
- (void)setLikenessVersionDigest:(unsigned char)arg1 forEmail:(id)arg2;
- (void)setLikenessVersionDigest:(unsigned char)arg1 forPhoneNumber:(id)arg2;
- (void)setScreenName:(id)arg1 forAppleIDWithAltDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)setScreenName:(id)arg1 forPrimaryiCloudAccountWithCompletion:(id /* block */)arg2;

@end
