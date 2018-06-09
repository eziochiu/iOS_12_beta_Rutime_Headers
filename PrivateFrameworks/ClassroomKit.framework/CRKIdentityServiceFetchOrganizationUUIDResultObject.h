/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchOrganizationUUIDResultObject : CATTaskResultObject {
    NSUUID * _organizationUUID;
}

@property (nonatomic, copy) NSUUID *organizationUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationUUID;
- (void)setOrganizationUUID:(id)arg1;

@end
