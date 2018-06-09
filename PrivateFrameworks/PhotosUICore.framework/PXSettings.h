/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSettings : _UISettings {
    NSMutableSet * _archivedSettings;
    NSSet * _cachedTransientProperties;
    long long  _version;
}

@property (nonatomic) long long version;

+ (id)_defaultsKey;
+ (id)_signatureDictionaryWithDefaultSettings:(id*)arg1;
+ (id)_userDefaults;
+ (id)createSharedInstance;
+ (void)setSuiteName:(id)arg1;
+ (id)sharedInstance;
+ (id)suiteName;
+ (id)transientProperties;

- (void).cxx_destruct;
- (bool)_isTransientKey:(id)arg1;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3;
- (void)_validateArchivableValue:(id)arg1 forKey:(id)arg2;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)save;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
