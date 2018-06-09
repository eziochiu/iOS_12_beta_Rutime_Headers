/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFProcessStatusRequest : DMFTaskRequest {
    NSString * _organizationIdentifier;
}

@property (nonatomic, copy) NSString *organizationIdentifier;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (void)setOrganizationIdentifier:(id)arg1;

@end
