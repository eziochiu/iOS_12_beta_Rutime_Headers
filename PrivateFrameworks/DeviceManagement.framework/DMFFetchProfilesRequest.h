/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchProfilesRequest : DMFTaskRequest {
    unsigned long long  _filterFlags;
}

@property (nonatomic) unsigned long long filterFlags;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterFlags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setFilterFlags:(unsigned long long)arg1;

@end
