/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUApplicationDefaults : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _applicationIdentifier;
    NSDictionary * _defaultValues;
    unsigned long long  _referenceCountForDefferringUpdates;
}

- (void).cxx_destruct;
- (void)_applyUpdates;
- (void)_defaultsDidChange;
- (id)_defaultsDidChangeNotificationName;
- (struct __CFString { }*)_defaultsDomain;
- (id)_objectForKey:(id)arg1 expectedTypeID:(unsigned long long)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)registerDefaults:(id)arg1;
- (void)removeValueForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;

@end
