/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISUIActivityConfiguration : NSObject <NSSecureCoding> {
    long long  _activityCategory;
    NSString * _activityClassName;
    UISUIActivityImageConfiguration * _activityImageConfiguration;
    UISUIActivityImageConfiguration * _activitySettingsImageConfiguration;
    bool  _activitySupportsPromiseURLs;
    NSString * _activityType;
    NSUUID * _activityUUID;
    bool  _appIsDocumentTypeOwner;
    NSString * _defaultActivityTitle;
    long long  _defaultSortGroup;
    long long  _encodingType;
    NSString * _fallbackActivityType;
    unsigned long long  _indexInApplicationDefinedActivities;
    NSString * _overrideTitle;
    NSString * _positionBeforeActivityType;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredThumbnailSize;
}

@property (nonatomic, readonly) long long activityCategory;
@property (nonatomic, retain) NSString *activityClassName;
@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, retain) UISUIActivityImageConfiguration *activityImageConfiguration;
@property (nonatomic, retain) UISUIActivityImageConfiguration *activitySettingsImageConfiguration;
@property (nonatomic, readonly) bool activitySupportsPromiseURLs;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic, readonly) bool appIsDocumentTypeOwner;
@property (nonatomic, readonly) NSString *defaultActivityTitle;
@property (nonatomic, readonly) long long defaultSortGroup;
@property (nonatomic) long long encodingType;
@property (nonatomic, readonly) NSString *fallbackActivityType;
@property (nonatomic, readonly) unsigned long long indexInApplicationDefinedActivities;
@property (nonatomic, retain) NSString *overrideTitle;
@property (nonatomic, readonly) NSString *positionBeforeActivityType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredThumbnailSize;
@property (nonatomic, readonly) UIImage *settingsImage;

+ (id)configurationForActivity:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg1;
- (void)_decodeBasicPropertiesWithCoder:(id)arg1;
- (void)_decodeForEncodingByClassNameWithCoder:(id)arg1;
- (void)_decodeForEncodingByPropertiesWithCoder:(id)arg1;
- (void)_encodeBasicPropertiesWithCoder:(id)arg1;
- (void)_encodeByClassNameWithCoder:(id)arg1;
- (void)_encodeByPropertiesWithCoder:(id)arg1;
- (id)_init;
- (void)_validateProperties;
- (long long)activityCategory;
- (id)activityClassName;
- (id)activityImage;
- (id)activityImageConfiguration;
- (id)activitySettingsImageConfiguration;
- (bool)activitySupportsPromiseURLs;
- (id)activityTitle;
- (id)activityType;
- (id)activityUUID;
- (bool)appIsDocumentTypeOwner;
- (id)defaultActivityTitle;
- (long long)defaultSortGroup;
- (void)encodeWithCoder:(id)arg1;
- (long long)encodingType;
- (id)fallbackActivityType;
- (unsigned long long)indexInApplicationDefinedActivities;
- (id)initWithActivity:(id)arg1 encodingType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)overrideTitle;
- (id)positionBeforeActivityType;
- (struct CGSize { double x1; double x2; })preferredThumbnailSize;
- (void)setActivityClassName:(id)arg1;
- (void)setActivityImageConfiguration:(id)arg1;
- (void)setActivitySettingsImageConfiguration:(id)arg1;
- (void)setEncodingType:(long long)arg1;
- (void)setOverrideTitle:(id)arg1;
- (id)settingsImage;
- (void)updateConfigurationWithOverrideTitle:(id)arg1;

@end
