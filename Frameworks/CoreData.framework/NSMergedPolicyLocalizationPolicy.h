/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
    NSSet * _mergedPolicies;
}

- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)_localizedStringForKey:(id)arg1 value:(void*)arg2;
- (void)addPolicy:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;

@end
