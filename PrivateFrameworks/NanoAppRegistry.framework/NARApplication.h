/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARApplication : NSObject <NSSecureCoding> {
    NARApplicationState * _appState;
    NSArray * _appTags;
    NSDictionary * _iTunesPlistStrings;
    NSDictionary * _infoPlist;
    NSString * _launchServicesBundleType;
    NSDictionary * _localizedStrings;
    NSString * _parentApplicationBundleIdentifier;
    unsigned long long  _sequenceNumber;
    bool  _supportsForegroundApplication;
}

@property (nonatomic, retain) NARApplicationState *appState;
@property (nonatomic, retain) NSArray *appTags;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *bundleName;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NARGlance *glance;
@property (nonatomic, retain) NSDictionary *iTunesPlistStrings;
@property (nonatomic, retain) NSDictionary *infoPlist;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, copy) NSString *launchServicesBundleType;
@property (nonatomic, readonly) NSArray *localizations;
@property (nonatomic, readonly) NSDictionary *localizedBundleNames;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSDictionary *localizedDisplayNames;
@property (nonatomic, retain) NSDictionary *localizedStrings;
@property (nonatomic, readonly, copy) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, readonly) NSArray *supportedSchemes;
@property (nonatomic) bool supportsForegroundApplication;
@property (nonatomic, readonly) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appState;
- (id)appTags;
- (id)applicationIdentifier;
- (id)bundleName;
- (id)bundleVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glance;
- (id)iTunesPlistStrings;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (bool)isHidden;
- (id)itemName;
- (id)launchServicesBundleType;
- (id)localizations;
- (id)localizedBundleNames;
- (id)localizedDisplayName;
- (id)localizedDisplayNames;
- (id)localizedStrings;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;
- (id)parentApplicationBundleIdentifier;
- (unsigned long long)sequenceNumber;
- (void)setAppState:(id)arg1;
- (void)setAppTags:(id)arg1;
- (void)setITunesPlistStrings:(id)arg1;
- (void)setInfoPlist:(id)arg1;
- (void)setLaunchServicesBundleType:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSupportsForegroundApplication:(bool)arg1;
- (id)supportedSchemes;
- (bool)supportsForegroundApplication;
- (id)vendorName;

@end
