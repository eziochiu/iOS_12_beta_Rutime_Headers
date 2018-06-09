/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSharedAlbumParticipant : NSObject <NSCopying, PXCMMInvitationParticipant> {
    NSString * _displayName;
    NSString * _emailAddressString;
    NSString * _firstName;
    NSString * _phoneNumberString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *emailAddressString;
@property (nonatomic, readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *phoneNumberString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)emailAddressString;
- (id)firstName;
- (id)initWithRecord:(id)arg1;
- (id)phoneNumberString;

@end
