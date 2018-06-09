/* made by EzioChiu.
 */

@protocol PLCloudSharedAlbumProtocol <PLAlbumProtocol>

@required

- (NSOrderedSet *)cloudAlbumSubscriberRecords;
- (NSDate *)cloudCreationDate;
- (NSDate *)cloudFirstRecentBatchDate;
- (NSString *)cloudGUID;
- (NSDate *)cloudLastContributionDate;
- (NSDate *)cloudLastInterestingChangeDate;
- (NSDictionary *)cloudMetadata;
- (NSNumber *)cloudMultipleContributorsEnabled;
- (NSNumber *)cloudMultipleContributorsEnabledLocal;
- (bool)cloudNotificationsEnabled;
- (NSString *)cloudOwnerDisplayNameIncludingEmail:(bool)arg1 allowsEmail:(bool)arg2;
- (NSString *)cloudOwnerEmail;
- (NSString *)cloudOwnerFirstName;
- (NSString *)cloudOwnerFullName;
- (NSString *)cloudOwnerHashedPersonID;
- (bool)cloudOwnerIsWhitelisted;
- (NSString *)cloudOwnerLastName;
- (NSString *)cloudPersonID;
- (NSNumber *)cloudPublicURLEnabled;
- (NSNumber *)cloudPublicURLEnabledLocal;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (NSDate *)cloudSubscriptionDate;
- (void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(bool*)arg3;
- (NSOrderedSet *)invitationRecords;
- (NSString *)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (NSString *)localizedSharedWithLabel;
- (NSString *)publicURL;
- (void)setCloudCreationDate:(NSDate *)arg1;
- (void)setCloudGUID:(NSString *)arg1;
- (void)setCloudLastContributionDate:(NSDate *)arg1;
- (void)setCloudLastInterestingChangeDate:(NSDate *)arg1;
- (void)setCloudMetadata:(NSDictionary *)arg1;
- (void)setCloudMultipleContributorsEnabled:(NSNumber *)arg1;
- (void)setCloudMultipleContributorsEnabledLocal:(NSNumber *)arg1;
- (void)setCloudNotificationsEnabled:(bool)arg1;
- (void)setCloudOwnerEmail:(NSString *)arg1;
- (void)setCloudOwnerFirstName:(NSString *)arg1;
- (void)setCloudOwnerFullName:(NSString *)arg1;
- (void)setCloudOwnerHashedPersonID:(NSString *)arg1;
- (void)setCloudOwnerIsWhitelisted:(bool)arg1;
- (void)setCloudOwnerLastName:(NSString *)arg1;
- (void)setCloudPersonID:(NSString *)arg1;
- (void)setCloudPublicURLEnabled:(NSNumber *)arg1;
- (void)setCloudPublicURLEnabledLocal:(NSNumber *)arg1;
- (void)setCloudSubscriptionDate:(NSDate *)arg1;
- (void)setInvitationRecords:(NSOrderedSet *)arg1;
- (void)setPublicURL:(NSString *)arg1;
- (void)setUnseenAssetsCount:(NSNumber *)arg1;
- (void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
- (NSNumber *)unseenAssetsCount;
- (unsigned long long)unseenAssetsCountIntegerValue;
- (void)updateCloudLastContributionDateWithDate:(NSDate *)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(NSDate *)arg1;
- (void)userDeleteSubscriberRecord:(PLCloudSharedAlbumInvitationRecord *)arg1;

@end
