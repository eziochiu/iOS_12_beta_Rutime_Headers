/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMPreferencesUtil : NSObject

+ (id)arrayForKey:(id)arg1 inDomain:(id)arg2;
+ (id)arrayForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (bool)boolForKey:(id)arg1 inDomain:(id)arg2;
+ (bool)boolForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)dataForKey:(id)arg1 inDomain:(id)arg2;
+ (id)dataForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)dateForKey:(id)arg1 inDomain:(id)arg2;
+ (id)dateForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)dictionaryForKey:(id)arg1 inDomain:(id)arg2;
+ (id)dictionaryForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (long long)integerForKey:(id)arg1 inDomain:(id)arg2;
+ (long long)integerForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (void)removeKey:(id)arg1 inDomain:(id)arg2;
+ (void)setArray:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setBool:(bool)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setData:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setDate:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setDictionary:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)stringForKey:(id)arg1 inDomain:(id)arg2;
+ (id)stringForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (void)synchronizeDomain:(id)arg1;
+ (void)synchronizeDomain:(id)arg1 user:(id)arg2;

@end
