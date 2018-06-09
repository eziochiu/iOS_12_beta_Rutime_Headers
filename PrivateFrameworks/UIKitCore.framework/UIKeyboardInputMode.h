/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {
    bool  _extensionInputModeHasDictation;
    NSString * _languageWithRegion;
    NSArray * _multilingualLanguages;
    NSString * hardwareLayout;
    NSString * identifier;
    bool  isDisplayed;
    NSString * normalizedIdentifier;
    NSString * primaryLanguage;
    NSString * softwareLayout;
}

@property (nonatomic, readonly) NSString *automaticHardwareLayout;
@property (nonatomic, readonly) NSBundle *containingBundle;
@property (nonatomic, readonly) NSString *containingBundleDisplayName;
@property (nonatomic, readonly) bool defaultLayoutIsASCIICapable;
@property (nonatomic, readonly) NSString *dictationDisplayName;
@property (nonatomic, retain) NSString *dictationLanguage;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *extendedDisplayName;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic) bool extensionInputModeHasDictation;
@property (nonatomic, retain) NSString *hardwareLayout;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *identifierWithLayouts;
@property (nonatomic, readonly) bool isDefaultRightToLeft;
@property (nonatomic) bool isDisplayed;
@property (nonatomic, readonly) bool isExtensionInputMode;
@property (nonatomic, readonly) bool isStalledExtensionInputMode;
@property (nonatomic, retain) NSString *languageWithRegion;
@property (nonatomic, retain) NSArray *multilingualLanguages;
@property (nonatomic, retain) NSString *normalizedIdentifier;
@property (nonatomic, readonly, retain) NSArray *normalizedIdentifierLevels;
@property (nonatomic, retain) NSString *primaryLanguage;
@property (nonatomic, retain) NSString *softwareLayout;

+ (id)autofillFallbackInputMode;
+ (id)autofillSignupInputMode;
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)dictationInputMode;
+ (id)hardwareLayoutFromIdentifier:(id)arg1;
+ (id)intlInputMode;
+ (id)keyboardInputModeWithIdentifier:(id)arg1;
+ (id)softwareLayoutFromIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)automaticHardwareLayout;
- (id)containingBundle;
- (id)containingBundleDisplayName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)defaultLayoutIsASCIICapable;
- (id)dictationDisplayName;
- (id)dictationLanguage;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedDisplayName;
- (id)extension;
- (bool)extensionInputModeHasDictation;
- (id)hardwareLayout;
- (id)identifier;
- (id)identifierWithLayouts;
- (bool)includeBarHeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isDesiredForTraits:(id)arg1;
- (bool)isDisplayed;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionInputMode;
- (bool)isStalledExtensionInputMode;
- (id)languageWithRegion;
- (id)multilingualLanguages;
- (id)normalizedIdentifier;
- (id)normalizedIdentifierLevels;
- (id)primaryLanguage;
- (void)setDictationLanguage:(id)arg1;
- (void)setExtensionInputModeHasDictation:(bool)arg1;
- (void)setHardwareLayout:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDisplayed:(bool)arg1;
- (void)setLanguageWithRegion:(id)arg1;
- (void)setLastUsedDictationLanguage;
- (void)setMultilingualLanguages:(id)arg1;
- (void)setNormalizedIdentifier:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setSoftwareLayout:(id)arg1;
- (id)softwareLayout;

@end
