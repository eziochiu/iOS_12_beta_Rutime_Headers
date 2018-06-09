/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {
    unsigned int  _leaderIP;
}

@property (nonatomic, readonly) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic, readonly) unsigned int leaderIP;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2;
- (id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned int)arg3;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToControlSessionIdentifier:(id)arg1;
- (unsigned int)leaderIP;
- (id)stringValue;

@end
