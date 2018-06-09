/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAppContainerIntersectionMetadata : NSObject {
    long long  _darkWakeEnabled;
    long long  _tokenRegistered;
    long long  _usesAPSPublicToken;
}

@property (nonatomic) long long darkWakeEnabled;
@property (nonatomic) long long tokenRegistered;
@property (nonatomic) long long usesAPSPublicToken;

- (long long)darkWakeEnabled;
- (id)init;
- (void)setDarkWakeEnabled:(long long)arg1;
- (void)setTokenRegistered:(long long)arg1;
- (void)setUsesAPSPublicToken:(long long)arg1;
- (long long)tokenRegistered;
- (long long)usesAPSPublicToken;

@end
