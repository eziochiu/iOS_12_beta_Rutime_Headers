/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSATheme : TSSTheme

+ (id)localizedNameForPresetKind:(id)arg1;
+ (id)localizedNameForStylePickerTitle:(id)arg1;
+ (id)localizedTitleForApplyStyleMenuItem:(id)arg1;
+ (id)localizedTitleForCreateStyleMenuItem:(id)arg1;
+ (void)registerPresetSourceClasses;

- (void)loadFromArchive:(const struct ThemeArchive { }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ThemeArchive { }*)arg1 archiver:(id)arg2;

@end
