/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying> {
    TSCHChartStyleState * _themeChartStyleState;
}

@property (nonatomic, copy) NSMutableArray *categoryAxisStyles;
@property (nonatomic, retain) TSCHChartStyle *chartStyle;
@property (nonatomic, retain) TSCHLegendStyle *legendStyle;
@property (nonatomic, copy) NSMutableArray *paragraphStyles;
@property (nonatomic, copy) NSMutableDictionary *referenceLineStyles;
@property (nonatomic, retain) TSCHReferenceLineStyle *referenceLineThemeStyle;
@property (nonatomic, copy) NSMutableArray *seriesPrivateStyles;
@property (nonatomic, copy) NSMutableArray *seriesThemeStyles;
@property (nonatomic, readonly, retain) TSCHChartStyleState *stateForParentStyleLookup;
@property (nonatomic, retain) TSCHChartStyleState *themeChartStyleState;
@property (nonatomic, copy) NSMutableArray *valueAxisStyles;

+ (id)styleState;

- (void).cxx_destruct;
- (id)allStyles;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(bool)arg2;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (void)checkParagraphStyleIndicies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateSemanticTagsAndUsagesWithPropertySetType:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)fallbackSemanticTagForSemanticTag:(id)arg1;
- (id)fallbackSemanticUsageForSemanticUsage:(id)arg1;
- (id)legendStyle;
- (id)listOfStyles;
- (bool)otherStateIsEquivalent:(id)arg1;
- (bool)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(bool)arg2;
- (void)p_addParagraphStyleForSemanticUsage:(id)arg1 mappedStyle:(id)arg2 mappedState:(id)arg3 fromPriorStyle:(id)arg4 andPriorState:(id)arg5 maintainPriorIndex:(bool)arg6 withStyleMapper:(id)arg7 withStylesheet:(id)arg8 toNewParagraphStylesTable:(id)arg9 andStyleMap:(id)arg10;
- (id)p_formatSemanticTag:(id)arg1;
- (id)p_locationOfStyleInNetwork:(id)arg1;
- (id)p_propertySetWithPropertySetType:(long long)arg1 forStyle:(id)arg2;
- (bool)paragraphStyleIndexesAreValid;
- (id)paragraphStyles;
- (id)referenceLineStyles;
- (id)referenceLineThemeStyle;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (void)replaceStylesUsingBlock:(id /* block */)arg1;
- (id)semanticTagToStyleMap;
- (id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)semanticUsagesToParagraphStyleMapWithPropertySetType:(long long)arg1 filteredBySemanticUsages:(id)arg2;
- (id)seriesPrivateStyles;
- (id)seriesThemeStyles;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setParagraphStyles:(id)arg1;
- (void)setReferenceLineStyles:(id)arg1;
- (void)setReferenceLineThemeStyle:(id)arg1;
- (void)setSeriesPrivateStyles:(id)arg1;
- (void)setSeriesThemeStyles:(id)arg1;
- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (void)setThemeChartStyleState:(id)arg1;
- (void)setValueAxisStyles:(id)arg1;
- (id)stateByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)stateForParentStyleLookup;
- (id)styleForSemanticTag:(id)arg1;
- (id)styleLookupSemanticTagForSemanticTag:(id)arg1;
- (id)styleNetworkDescription;
- (id)styleToSemanticTagsMap;
- (id)styleToUseForSemanticTag:(id)arg1;
- (id)stylesheet;
- (id)themeChartStyleState;
- (id)usesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)valueAxisStyles;

@end
