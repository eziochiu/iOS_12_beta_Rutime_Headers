/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFStopManagingAppRequest : DMFAppRequest

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
