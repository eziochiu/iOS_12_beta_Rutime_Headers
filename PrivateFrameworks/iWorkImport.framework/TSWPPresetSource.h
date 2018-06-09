/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPPresetSource : NSObject <TSSPresetSource>

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)p_bootstrapLinePresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (void)p_bootstrapListPresetsInTheme:(id)arg1 alternate:(int)arg2;
+ (void)p_bootstrapShapePresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (id)p_bootstrapStrokeInTheme:(id)arg1 alternate:(int)arg2 index:(unsigned long long)arg3;
+ (void)p_bootstrapTextStylePresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (void)p_bootstrapTextboxPresetsInTheme:(id)arg1 alternate:(int)arg2 reservedCount:(unsigned long long)arg3;
+ (id)presetKinds;

@end
