/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRecipient : NSObject <NSCopying, PXCMMInvitationParticipant> {
    NSArray * _allEmails;
    NSArray * _allPhones;
    CNContact * _contact;
    NSString * _displayName;
    NSString * _emailAddressString;
    NSString * _firstName;
    NSString * _invalidAddressString;
    NSString * _lastName;
    NSString * _phoneNumberString;
    PXRecipientTransport * _suggestedTransport;
}

@property (nonatomic, readonly) NSArray *allEmails;
@property (nonatomic, readonly) NSArray *allPhones;
@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, readonly, copy) NSString *emailAddressString;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *invalidAddressString;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (nonatomic, readonly, copy) NSString *phoneNumberString;
@property (nonatomic, retain) PXRecipientTransport *suggestedTransport;
@property (readonly) Class superclass;

+ (id)_contactForAddress:(id)arg1 recipientKind:(long long)arg2;
+ (id)displayNameForAddress:(id)arg1 recipientKind:(long long)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)allEmails;
- (id)allPhones;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)emailAddressString;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContact:(id)arg1 selectedAddress:(id)arg2 recipientKind:(long long)arg3;
- (id)initWithSelectedAddress:(id)arg1 recipientKind:(long long)arg2;
- (id)invalidAddressString;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)phoneNumberString;
- (void)setSuggestedTransport:(id)arg1;
- (id)suggestedTransport;

@end
