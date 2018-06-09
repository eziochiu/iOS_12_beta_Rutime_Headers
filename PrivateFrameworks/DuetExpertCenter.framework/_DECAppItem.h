/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECAppItem : _DECItem {
    id  _atxResponse;
    NSString * _bundleIdentifier;
    long long  _reason;
    long long  _sources;
}

@property (nonatomic, readonly) id atxResponse;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) long long reason;
@property (nonatomic, readonly) long long sources;

+ (id)appWithBundleIdentifier:(id)arg1;
+ (id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2;
+ (id)appWithBundleIdentifier:(id)arg1 sources:(long long)arg2 atxResponse:(id)arg3;
+ (unsigned long long)category;
+ (id)fromSearchResult:(id)arg1;
+ (bool)isSearchFoundationCompliant;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECAppItem:(id)arg1;
- (id)atxResponse;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 sources:(long long)arg2 atxResponse:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (long long)reason;
- (void)setReason:(long long)arg1;
- (long long)sources;
- (id)toSearchResult;

@end
