/* made by EzioChiu.
 */

@protocol _INPBRunVoiceCommandIntentResponse <NSObject>

@required

- (int)StringAsIntentCategory:(NSString *)arg1;
- (int)StringAsToggleState:(NSString *)arg1;
- (NSString *)appBundleId;
- (bool)customResponsesDisabled;
- (bool)hasAppBundleId;
- (bool)hasCustomResponsesDisabled;
- (bool)hasIntentCategory;
- (bool)hasLocalizedAppName;
- (bool)hasParameters;
- (bool)hasResponseTemplate;
- (bool)hasToggleState;
- (bool)hasUnderlyingIntent;
- (bool)hasUnderlyingIntentResponse;
- (bool)hasVerb;
- (int)intentCategory;
- (NSString *)intentCategoryAsString:(int)arg1;
- (NSString *)localizedAppName;
- (_INPBDictionary *)parameters;
- (NSString *)responseTemplate;
- (void)setAppBundleId:(NSString *)arg1;
- (void)setCustomResponsesDisabled:(bool)arg1;
- (void)setHasCustomResponsesDisabled:(bool)arg1;
- (void)setHasIntentCategory:(bool)arg1;
- (void)setHasToggleState:(bool)arg1;
- (void)setIntentCategory:(int)arg1;
- (void)setLocalizedAppName:(NSString *)arg1;
- (void)setParameters:(_INPBDictionary *)arg1;
- (void)setResponseTemplate:(NSString *)arg1;
- (void)setToggleState:(int)arg1;
- (void)setUnderlyingIntent:(_INPBArchivedObject *)arg1;
- (void)setUnderlyingIntentResponse:(_INPBArchivedObject *)arg1;
- (void)setVerb:(NSString *)arg1;
- (int)toggleState;
- (NSString *)toggleStateAsString:(int)arg1;
- (_INPBArchivedObject *)underlyingIntent;
- (_INPBArchivedObject *)underlyingIntentResponse;
- (NSString *)verb;

@end
