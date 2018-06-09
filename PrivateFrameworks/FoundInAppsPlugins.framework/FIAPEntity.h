/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FoundInAppsPlugins.framework/FoundInAppsPlugins
 */

@interface FIAPEntity : NSObject <NSSecureCoding> {
    NSString * _activityType;
    NSString * _bundleIdentifier;
    NSDate * _contentCreationDate;
    NSDate * _detectionDate;
    NSString * _domainIdentifier;
    NSString * _languageIdentifier;
    NSString * _name;
    NSString * _pluginIdentifier;
    unsigned char  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *contentCreationDate;
@property (nonatomic, copy) NSDate *detectionDate;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *pluginIdentifier;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)entityWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityType;
- (id)bundleIdentifier;
- (id)contentCreationDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detectionDate;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(unsigned char)arg2 languageIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntity:(id)arg1;
- (id)languageIdentifier;
- (id)name;
- (id)pluginIdentifier;
- (void)setActivityType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentCreationDate:(id)arg1;
- (void)setDetectionDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setPluginIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (unsigned char)type;
- (id)uniqueIdentifier;

@end
