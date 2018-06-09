/* made by EzioChiu.
 */

@protocol INRunVoiceCommandIntentResponseExport <NSObject, JSExport>

@required

- (NSString *)appBundleId;
- (long long)code;
- (NSNumber *)customResponsesDisabled;
- (long long)intentCategory;
- (NSString *)localizedAppName;
- (NSDictionary *)parameters;
- (NSString *)responseTemplate;
- (void)setAppBundleId:(NSString *)arg1;
- (void)setCustomResponsesDisabled:(NSNumber *)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setLocalizedAppName:(NSString *)arg1;
- (void)setParameters:(NSDictionary *)arg1;
- (void)setResponseTemplate:(NSString *)arg1;
- (void)setToggleState:(long long)arg1;
- (void)setUnderlyingIntent:(INArchivedObject *)arg1;
- (void)setUnderlyingIntentResponse:(INArchivedObject *)arg1;
- (void)setVerb:(NSString *)arg1;
- (long long)toggleState;
- (INArchivedObject *)underlyingIntent;
- (INArchivedObject *)underlyingIntentResponse;
- (NSString *)verb;

@end
