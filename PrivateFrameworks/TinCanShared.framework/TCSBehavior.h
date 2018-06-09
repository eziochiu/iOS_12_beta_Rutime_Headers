/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface TCSBehavior : NSObject {
    bool  _hasTelephonyCapability;
    bool  _isAppleInternalInstall;
    bool  _isM7Device;
    bool  _isM8Device;
}

@property (nonatomic, readonly) bool hasTelephonyCapability;
@property (nonatomic, readonly) bool isAppleInternalInstall;
@property (nonatomic, readonly) bool isM7Device;
@property (nonatomic, readonly) bool isM8Device;

+ (bool)_hasTelephonyCapability;
+ (bool)_isAppleInternalInstall;
+ (bool)_isM7Device;
+ (bool)_isM8Device;
+ (bool)hasTelephonyCapability;
+ (bool)isAppleInternalInstall;
+ (bool)isM7Device;
+ (bool)isM8Device;
+ (id)sharedBehavior;

- (bool)hasTelephonyCapability;
- (id)init;
- (bool)isAppleInternalInstall;
- (bool)isM7Device;
- (bool)isM8Device;

@end
