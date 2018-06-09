/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSettings : NSObject <NSCopying, PTSettingsKeyPathObserver> {
    NSSet * _internal_childKeys;
    bool  _internal_isObservingChildren;
    bool  _internal_isObservingProperties;
    NSDictionary * _internal_keyClasses;
    NSHashTable * _internal_keyObservers;
    NSHashTable * _internal_keyPathObservers;
    NSDictionary * _internal_keyStructs;
    NSSet * _internal_leafKeys;
    bool  _internal_observationEnabled;
    NSSet * _internal_outletKeys;
    <_PTSettingsRestoreDefaultsObserver> * _internal_restoreDefaultsObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (bool)_supportsArchivingCustomClass:(Class)arg1;
+ (bool)_supportsArchivingStructType:(id)arg1;
+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;
+ (id)settingsFromArchiveDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (id)_allKeys;
- (void)_applyArchiveDictionary:(id)arg1;
- (bool)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (bool)_applyArchiveValue:(id)arg1 forLeafKey:(id)arg2 error:(id*)arg3;
- (id)_archiveValueForKeyPath:(id)arg1;
- (id)_archiveValueForLeafKey:(id)arg1;
- (void)_enumerateChildrenWithBlock:(id /* block */)arg1;
- (void)_enumerateOutletsWithBlock:(id /* block */)arg1;
- (bool)_getChild:(id*)arg1 leafKey:(id*)arg2 forKeyPath:(id)arg3 error:(id*)arg4;
- (bool)_hasKeyPathObservers;
- (bool)_hasObservers;
- (id)_initWithArchiveDictionary:(id)arg1;
- (void)_introspectKeys;
- (id)_keyForChild:(id)arg1;
- (void)_sendKeyChanged:(id)arg1;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_setObservationEnabled:(bool)arg1;
- (void)_setRestoreDefaultsObserver:(id)arg1;
- (bool)_shouldOmitKeyFromArchive:(id)arg1;
- (void)_startObservingChildren;
- (void)_startObservingProperties;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_stopObservingChildren;
- (void)_stopObservingProperties;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)applySettings:(id)arg1;
- (id)archiveDictionary;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)drillDownSummary;
- (id)init;
- (id)initWithDefaultValues;
- (void)invalidateValueForKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)setDefaultValues;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

@end
