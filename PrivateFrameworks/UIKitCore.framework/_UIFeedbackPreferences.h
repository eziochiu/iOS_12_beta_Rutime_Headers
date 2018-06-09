/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackPreferences : NSObject {
    NSDictionary * _defaultFeedbackTypes;
    NSMutableDictionary * _enabledFeedbackTypes;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSDictionary *defaultFeedbackTypes;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (void)_accessibilityForceTouchChanged:(id)arg1;
- (id)_categoryForNullableCategory:(id)arg1;
- (id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1;
- (id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1;
- (void)_invalidate;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(bool)arg3;
- (void)_startObservingDefaults;
- (void)_updateEnabledFeedbackTypes:(unsigned long long*)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (id)defaultFeedbackTypes;
- (unsigned long long)enabledFeedbackTypesForCategory:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
