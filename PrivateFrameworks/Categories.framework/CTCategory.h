/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Categories.framework/Categories
 */

@interface CTCategory : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    CKContextClient * _client;
    NSString * _identifier;
    NSString * _resourceString;
    NSString * _secondaryIdentifier;
    NSArray * _webDomains;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) CKContextClient *client;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *primaryIdentifier;
@property (nonatomic, readonly, copy) NSString *primaryLocalizedName;
@property (nonatomic, copy) NSString *resourceString;
@property (nonatomic, copy) NSString *secondaryIdentifier;
@property (nonatomic, readonly, copy) NSString *secondaryLocalizedName;
@property (nonatomic, copy) NSArray *webDomains;

+ (id)_AppStoreIDToDHIDCategoriesMap;
+ (id)_AppStoreToDHIDCategoriesMap;
+ (id)_DHIDtoPrimaryCategoriesMap;
+ (id)_DHToAppStoreCategoriesMap;
+ (void)initialize;
+ (id)localizedNameForIdentifier:(id)arg1;
+ (id)primaryLocalizedNameForIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_ctCategoryCommonInitWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3;
- (void)_identifierUsingContextKit:(id)arg1 response:(id /* block */)arg2;
- (void)_lookupAppStoreUsing:(id)arg1 key:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_lookupDHIDInInfoPlist:(id)arg1 key:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)bundleIdentifier;
- (void)categoryForBundleID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)client;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithIdentifier:(id)arg1 webDomains:(id)arg2 bundleIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategory:(id)arg1;
- (id)localizedName;
- (id)primaryIdentifier;
- (id)primaryLocalizedName;
- (id)resourceString;
- (id)secondaryIdentifier;
- (id)secondaryLocalizedName;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setResourceString:(id)arg1;
- (void)setSecondaryIdentifier:(id)arg1;
- (void)setWebDomains:(id)arg1;
- (id)webDomains;

@end
