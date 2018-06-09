/* made by EzioChiu.
 */

@protocol _INPBIntentMetadata <NSObject>

@required

+ (Class)parameterImagesType;

- (int)StringAsExecutionContext:(NSString *)arg1;
- (int)StringAsIntentCategory:(NSString *)arg1;
- (int)StringAsRequiredEntitlements:(NSString *)arg1;
- (int)StringAsTriggerMethod:(NSString *)arg1;
- (void)addParameterImages:(_INPBPair *)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (bool)backgroundLaunch;
- (NSString *)categoryVerb;
- (void)clearParameterImages;
- (void)clearRequiredEntitlements;
- (bool)confirmed;
- (int)executionContext;
- (NSString *)executionContextAsString:(int)arg1;
- (bool)hasBackgroundLaunch;
- (bool)hasCategoryVerb;
- (bool)hasConfirmed;
- (bool)hasExecutionContext;
- (bool)hasIntentCategory;
- (bool)hasIntentDescription;
- (bool)hasIntentId;
- (bool)hasLaunchId;
- (bool)hasNanoLaunchId;
- (bool)hasOriginatingDeviceIdsIdentifier;
- (bool)hasSuggestedInvocationPhrase;
- (bool)hasSystemExtensionBundleId;
- (bool)hasTriggerMethod;
- (bool)hasUserConfirmationRequired;
- (bool)hasUserUtterance;
- (int)intentCategory;
- (NSString *)intentCategoryAsString:(int)arg1;
- (NSString *)intentDescription;
- (NSString *)intentId;
- (NSString *)launchId;
- (NSString *)nanoLaunchId;
- (NSString *)originatingDeviceIdsIdentifier;
- (NSArray *)parameterImages;
- (_INPBPair *)parameterImagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterImagesCount;
- (int)requiredEntitlementAtIndex:(unsigned long long)arg1;
- (int*)requiredEntitlements;
- (NSString *)requiredEntitlementsAsString:(int)arg1;
- (unsigned long long)requiredEntitlementsCount;
- (void)setBackgroundLaunch:(bool)arg1;
- (void)setCategoryVerb:(NSString *)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setExecutionContext:(int)arg1;
- (void)setHasBackgroundLaunch:(bool)arg1;
- (void)setHasConfirmed:(bool)arg1;
- (void)setHasExecutionContext:(bool)arg1;
- (void)setHasIntentCategory:(bool)arg1;
- (void)setHasTriggerMethod:(bool)arg1;
- (void)setHasUserConfirmationRequired:(bool)arg1;
- (void)setIntentCategory:(int)arg1;
- (void)setIntentDescription:(NSString *)arg1;
- (void)setIntentId:(NSString *)arg1;
- (void)setLaunchId:(NSString *)arg1;
- (void)setNanoLaunchId:(NSString *)arg1;
- (void)setOriginatingDeviceIdsIdentifier:(NSString *)arg1;
- (void)setParameterImages:(NSArray *)arg1;
- (void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSuggestedInvocationPhrase:(NSString *)arg1;
- (void)setSystemExtensionBundleId:(NSString *)arg1;
- (void)setTriggerMethod:(int)arg1;
- (void)setUserConfirmationRequired:(bool)arg1;
- (void)setUserUtterance:(_INPBString *)arg1;
- (NSString *)suggestedInvocationPhrase;
- (NSString *)systemExtensionBundleId;
- (int)triggerMethod;
- (NSString *)triggerMethodAsString:(int)arg1;
- (bool)userConfirmationRequired;
- (_INPBString *)userUtterance;

@end
