/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * __prettyNameInternal;
    NSArray * _aliasServerIds;
    NSNumber * _dsid;
    NSDictionary * _expiresByGroupId;
    NSNumber * _favoriteOrder;
    NSString * _hashedDSID;
    NSString * _identifier;
    long long  _idsStatus;
    NSArray * _invitationSentToIds;
    bool  _isFamilyMember;
    bool  _pending;
    NSString * _qualifiedIdentifier;
    bool  _reachable;
    NSString * _serverId;
    NSNumber * _trackingTimestamp;
}

@property (nonatomic, copy) NSString *_prettyNameInternal;
@property (nonatomic, copy) NSArray *aliasServerIds;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, copy) NSDictionary *expiresByGroupId;
@property (nonatomic, copy) NSNumber *favoriteOrder;
@property (nonatomic, copy) NSString *hashedDSID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long idsStatus;
@property (nonatomic, copy) NSArray *invitationSentToIds;
@property (nonatomic) bool isFamilyMember;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic, copy) NSString *qualifiedIdentifier;
@property (nonatomic) bool reachable;
@property (nonatomic, copy) NSString *serverId;
@property (nonatomic, copy) NSNumber *trackingTimestamp;

+ (id)familyHandleWithId:(id)arg1 dsid:(id)arg2;
+ (id)handleWithId:(id)arg1;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_prettyNameInternal;
- (void)abPreferencesDidChange;
- (void)addressBookDidChange;
- (id)aliasServerIds;
- (void)clearFavoriteOrder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresByGroupId;
- (id)favoriteOrder;
- (unsigned long long)hash;
- (id)hashedDSID;
- (id)identifier;
- (long long)idsStatus;
- (id)initWithCoder:(id)arg1;
- (id)invitationSentToIds;
- (bool)isEqual:(id)arg1;
- (bool)isFamilyMember;
- (bool)isPending;
- (bool)isPhoneNumber;
- (bool)isSharingThroughGroupId:(id)arg1;
- (id)prettyName;
- (long long)prettyNameCompare:(id)arg1;
- (id)qualifiedIdentifier;
- (bool)reachable;
- (id)recordId;
- (id)serverId;
- (void)setAliasServerIds:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setExpiresByGroupId:(id)arg1;
- (void)setFavoriteOrder:(id)arg1;
- (void)setHashedDSID:(id)arg1;
- (void)setICloudId:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsStatus:(long long)arg1;
- (void)setInvitationSentToIds:(id)arg1;
- (void)setIsFamilyMember:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)setQualifiedIdentifier:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setServerId:(id)arg1;
- (void)setTrackingTimestamp:(id)arg1;
- (void)set_prettyNameInternal:(id)arg1;
- (id)trackingTimestamp;

@end
