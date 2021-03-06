/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchDeclarationCapabilitiesRequest : DMFTaskRequest

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

@end
