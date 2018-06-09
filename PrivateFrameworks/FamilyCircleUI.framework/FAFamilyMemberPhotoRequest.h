/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilyMemberPhotoRequest : AAFamilyRequest {
    NSNumber * _familyMemberDSID;
    SSAccount * _iTunesAccount;
    NSString * _serverCacheTag;
}

@property (nonatomic, copy) NSNumber *familyMemberDSID;
@property (setter=setiTunesAccount:, nonatomic, retain) SSAccount *iTunesAccount;
@property (nonatomic, copy) NSString *serverCacheTag;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)familyMemberDSID;
- (id)iTunesAccount;
- (id)serverCacheTag;
- (void)setFamilyMemberDSID:(id)arg1;
- (void)setServerCacheTag:(id)arg1;
- (void)setiTunesAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
