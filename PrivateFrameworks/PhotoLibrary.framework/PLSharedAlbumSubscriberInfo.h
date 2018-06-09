/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSharedAlbumSubscriberInfo : NSObject {
    NSString * _displayName;
    NSString * _email;
    NSString * _firstName;
    PLCloudSharedAlbumInvitationRecord * _invitationRecord;
    NSString * _lastName;
    NSString * _phone;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) bool isOwner;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *phone;

+ (id)_allSubscribersForAlbum:(id)arg1 photoLibrary:(id)arg2;
+ (id)allSubscribersForAlbum:(id)arg1;
+ (id)allSubscribersForAlbumWithObjectID:(id)arg1;

- (id)displayName;
- (id)email;
- (id)firstName;
- (id)init;
- (id)initWithInvitationRecord:(id)arg1 email:(id)arg2 phone:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 displayName:(id)arg6;
- (id)invitationRecord;
- (bool)isOwner;
- (id)lastName;
- (id)matchingContactWithKeysToFetch:(id)arg1 outMatchingKey:(id*)arg2 outMatchingIdentifier:(id*)arg3;
- (id)phone;

@end
