/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

@interface SOSLegacyContactsManager : NSObject {
    FKFriendsManager * _friendsManager;
}

@property (nonatomic, readonly) bool SOSLegacyContactsExist;
@property (nonatomic, retain) FKFriendsManager *friendsManager;

+ (bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;

- (void).cxx_destruct;
- (id)SOSLegacyContacts;
- (id)SOSLegacyContactsDestinations;
- (bool)SOSLegacyContactsExist;
- (id)_SOSDestinationsForFriend:(id)arg1;
- (id)_SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2;
- (id)_SOSFriends;
- (id)_contactFromFriend:(id)arg1;
- (void)contactStoreDidChange;
- (void)dealloc;
- (id)friendsManager;
- (id)init;
- (void)setFriendsManager:(id)arg1;

@end
