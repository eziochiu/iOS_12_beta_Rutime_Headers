/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStylePreset : TSPObject <TSCHStyleSwapSupporting, TSKModel, TSPCopying, TSSCustomPresetMigration, TSSPreset> {
    NSArray * mCategoryAxisStylesList;
    TSCHChartStyle * mChartStyle;
    bool  mHasUpgradedFromFinalizeHandler;
    TSCHLegendStyle * mLegendStyle;
    NSArray * mParagraphStylesList;
    TSCHReferenceLineStyle * mRefLineStyle;
    NSArray * mSeriesStylesList;
    NSUUID * mUuid;
    NSArray * mValueAxisStylesList;
}

@property (nonatomic, readonly) NSArray *categoryAxisStyles;
@property (nonatomic, readonly) TSCHChartStyle *chartStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSCHLegendStyle *legendStyle;
@property (nonatomic, readonly) NSArray *paragraphStyles;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) TSCHReferenceLineStyle *refLineStyle;
@property (nonatomic, readonly) NSArray *seriesStyles;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSArray *valueAxisStyles;

+ (bool)needsObjectUUID;
+ (id)p_getDefaultErrorBarColor:(id)arg1 valueAxisStyles:(id)arg2;
+ (id)p_getDefaultTrendLineShadowColor:(id)arg1;
+ (id)p_getDefaultTrendLineStrokeColor:(id)arg1;
+ (void)p_replaceProperty:(int)arg1 inStyle:(id)arg2 withObject:(id)arg3;
+ (void)p_useProperty:(int)arg1 asProperty:(int)arg2 inStyle:(id)arg3;
+ (id)presetWithContext:(id)arg1 fromStyleState:(id)arg2 uuid:(id)arg3;
+ (void)upgradeCalloutLineStylesForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3;
+ (void)upgradeDonutStylesForSeriesPresets:(id)arg1;
+ (void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2;
+ (void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)arg1 seriesStyles:(id)arg2;
+ (void)upgradeShadowPropertyForParagraphStyles:(id)arg1;
+ (void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg1 valueAxisPresets:(id)arg2 paragraphPresets:(id)arg3;

- (id)allStyles;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)buildAxisNonStyle;
- (id)buildChartNonStyle;
- (id)buildLegendNonStyle;
- (id)buildSeriesNonStyle;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (id)chartStyleState;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 shallowCopyStyles:(bool)arg2;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 refLineStyle:(id)arg8;
- (id)initWithContext:(id)arg1 chartStyle:(id)arg2 legendStyle:(id)arg3 valueAxisStyles:(id)arg4 categoryAxisStyles:(id)arg5 seriesStyles:(id)arg6 paragraphStyles:(id)arg7 refLineStyle:(id)arg8 uuid:(id)arg9;
- (bool)isEquivalentToPreset:(id)arg1;
- (bool)isEquivalentToPreset:(id)arg1 outReasons:(id*)arg2;
- (id)legendStyle;
- (void)loadFromUnarchiver:(id)arg1;
- (id)migratedPresetInTheme:(id)arg1 followReplacements:(bool)arg2;
- (id)p_initWithContext:(id)arg1;
- (id)paragraphStyles;
- (id)presetByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)presetKind;
- (id)refLineStyle;
- (id)referencedStyles;
- (void)saveToArchiver:(id)arg1;
- (id)seriesStyles;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (id)stylesheet;
- (id)swatchImage;
- (void)upgradePresetIfNecessaryFromFinalizeHandlerWithOptionalPreUFFVersion:(const unsigned long long*)arg1;
- (id)uuid;
- (id)valueAxisStyles;

@end
