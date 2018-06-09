/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {
    bool  _invitationsSentViaThirdPartyService;
    long long  _numberOfInvitations;
    long long  _operation;
    bool  _publicShare;
    NSString * _sharedContentType;
}

@property bool invitationsSentViaThirdPartyService;
@property long long numberOfInvitations;
@property long long operation;
@property bool publicShare;
@property (copy) NSString *sharedContentType;

+ (bool)supportsSecureCoding;

- (id)_variantSubstrings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)invitationsSentViaThirdPartyService;
- (long long)numberOfInvitations;
- (long long)operation;
- (bool)publicShare;
- (void)setInvitationsSentViaThirdPartyService:(bool)arg1;
- (void)setNumberOfInvitations:(long long)arg1;
- (void)setOperation:(long long)arg1;
- (void)setPublicShare:(bool)arg1;
- (void)setSharedContentType:(id)arg1;
- (id)sharedContentType;

@end
