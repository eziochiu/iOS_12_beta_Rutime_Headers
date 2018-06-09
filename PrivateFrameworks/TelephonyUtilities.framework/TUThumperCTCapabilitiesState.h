/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    bool  _approved;
    NSSet * _approvedSecondaryDeviceIDs;
    NSString * _localDeviceID;
}

@property (getter=isApproved, nonatomic) bool approved;
@property (nonatomic, copy) NSSet *approvedSecondaryDeviceIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localDeviceID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)approvedSecondaryDeviceIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isApproved;
- (id)localDeviceID;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setApproved:(bool)arg1;
- (void)setApprovedSecondaryDeviceIDs:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;

@end
