/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRestrictions : NSObject {
    long long  _buildVersionNumber;
    long long  _isExplicitContentAllowedOverride;
    bool  _testing;
}

@property (nonatomic) long long buildVersionNumber;
@property (nonatomic, readonly) bool isExplicitContentAllowed;
@property (nonatomic) long long isExplicitContentAllowedOverride;
@property (nonatomic) bool testing;

+ (long long)integerRepresentationOfShortVersionString:(id)arg1;
+ (id)sharedInstance;

- (long long)buildVersionNumber;
- (id)init;
- (bool)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (bool)isExplicitContentAllowed;
- (long long)isExplicitContentAllowedOverride;
- (bool)isNewsVersionAllowed:(long long)arg1;
- (void)setBuildVersionNumber:(long long)arg1;
- (void)setIsExplicitContentAllowedOverride:(long long)arg1;
- (void)setTesting:(bool)arg1;
- (void)t_startForcingExplicitContentDisallowed;
- (void)t_stopForcingExplicitContentDisallowed;
- (bool)testing;

@end
