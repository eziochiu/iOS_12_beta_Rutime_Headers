/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {
    NSData * _accessToken;
    NSDate * _expiration;
    NSData * _refreshToken;
    NSArray * _scope;
    NSString * _tokenType;
}

@property (nonatomic, readonly, copy) NSData *accessToken;
@property (nonatomic, readonly, copy) NSDate *expiration;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly, copy) NSData *refreshToken;
@property (nonatomic, readonly, copy) NSArray *scope;
@property (nonatomic, readonly, copy) NSString *scopeString;
@property (nonatomic, readonly, copy) NSString *tokenType;

+ (id)_scopeStringFromScope:(id)arg1;
+ (id)expirationFromTimeInterval:(double)arg1;
+ (id)scopeFromScopeString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_commonInitWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scope:(id)arg5;
- (id)accessToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scope:(id)arg5;
- (id)initWithAccessToken:(id)arg1 tokenType:(id)arg2 refreshToken:(id)arg3 expiration:(id)arg4 scopeString:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;
- (bool)isExpired;
- (id)refreshToken;
- (id)scope;
- (id)scopeString;
- (id)tokenType;

@end
