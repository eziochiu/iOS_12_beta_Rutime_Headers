/* made by EzioChiu.
 */

@protocol TSSCustomPresetMigration <TSSPreset>

@required

- (NSObject<TSSPreset> *)migratedPresetInTheme:(TSSTheme *)arg1 followReplacements:(bool)arg2;

@end
