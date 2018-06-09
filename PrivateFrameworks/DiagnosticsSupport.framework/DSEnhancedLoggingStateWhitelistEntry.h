/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSEnhancedLoggingStateWhitelistEntry : NSObject {
    NSString * _bundleIdentifier;
    NSString * _descriptionLocalizationKey;
    NSString * _displayNameLocalizationKey;
    NSString * _parameterName;
    bool  _requiresFollowup;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *descriptionLocalizationKey;
@property (nonatomic, retain) NSString *displayNameLocalizationKey;
@property (nonatomic, retain) NSString *parameterName;
@property (nonatomic, readonly) bool requiresFollowup;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)descriptionLocalizationKey;
- (id)displayNameLocalizationKey;
- (id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 requiresFollowup:(bool)arg5;
- (id)parameterName;
- (bool)requiresFollowup;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDescriptionLocalizationKey:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setParameterName:(id)arg1;

@end
