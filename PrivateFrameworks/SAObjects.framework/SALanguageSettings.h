/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALanguageSettings : SABaseClientBoundCommand

@property (nonatomic, copy) NSDictionary *configuredLocales;

+ (id)languageSettings;
+ (id)languageSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)configuredLocales;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setConfiguredLocales:(id)arg1;

@end
