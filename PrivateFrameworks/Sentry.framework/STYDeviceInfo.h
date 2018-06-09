/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
 */

@interface STYDeviceInfo : NSObject

+ (unsigned long long)_determineBootVolumeType;
+ (id)_determineHardwareModel;
+ (unsigned long long)bootVolumeType;
+ (id)hardwareModel;
+ (bool)isAppleInternal;
+ (id)osBuild;

@end
