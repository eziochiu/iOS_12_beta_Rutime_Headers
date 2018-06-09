/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDLocalDevice : NSObject

+ (id)deviceName;
+ (bool)hasLocalSecret;
+ (id)modelClass;
+ (id)serialNumber;

@end
