/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BFFPreferencesController : NSObject {
    NSMutableDictionary * _preferences;
}

+ (id)buddyPreferences;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)persist;
- (void)removeObjectForKey:(id)arg1;
- (void)reset;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
