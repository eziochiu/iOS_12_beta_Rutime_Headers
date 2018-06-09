/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSection : NSObject <PTRowObserver, PTSettingsKeyPathObserver> {
    NSMutableArray * _allRows;
    NSArray * _appearanceConditions;
    NSMutableArray * _enabledRows;
    id /* block */  _footerTextGetter;
    NSHashTable * _observers;
    NSArray * _rows;
    PTSettings * _settings;
    NSString * _submoduleKeyPath;
    NSString * _title;
    id /* block */  _unregisterBlock;
}

@property (nonatomic, retain) NSArray *appearanceConditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ footerTextGetter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTSettings *settings;
@property (nonatomic, retain) NSString *submoduleKeyPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, copy) id /* block */ unregisterBlock;

- (void).cxx_destruct;
- (void)_reloadEnabledRows;
- (void)_sendInserts:(id)arg1 deletes:(id)arg2;
- (void)_sendReload;
- (bool)_shouldEnableRow:(id)arg1;
- (void)_updateEnabledRows;
- (void)addObserver:(id)arg1;
- (id)appearanceConditions;
- (void)dealloc;
- (void)enumerateAllRowsUsingBlock:(id /* block */)arg1;
- (void)enumerateEnabledRowsUsingBlock:(id /* block */)arg1;
- (id /* block */)footerTextGetter;
- (unsigned long long)indexOfRow:(id)arg1;
- (id)initWithRows:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)reloadSection;
- (void)removeObserver:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1;
- (void)rowDidReload:(id)arg1;
- (void)setAppearanceConditions:(id)arg1;
- (void)setFooterTextGetter:(id /* block */)arg1;
- (void)setSettings:(id)arg1;
- (void)setSubmoduleKeyPath:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnregisterBlock:(id /* block */)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)submoduleKeyPath;
- (id)title;
- (id /* block */)unregisterBlock;

@end
