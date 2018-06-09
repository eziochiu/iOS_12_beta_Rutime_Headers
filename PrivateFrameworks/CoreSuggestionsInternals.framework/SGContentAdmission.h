/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGContentAdmission : NSObject {
    NSUserDefaults * _defaults;
    NSSet * _disabledBundleIdentifiers;
    SGContentAdmissionKVOObserver * _kvoObserver;
}

+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)arg1;
+ (void)initialize;
+ (id)sharedInstance;
+ (bool)shouldAdmitContentFromBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_clearTestSettings;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (bool)_shouldAdmitContentFromBundleIdentifier:(id)arg1;
- (id)init;

@end