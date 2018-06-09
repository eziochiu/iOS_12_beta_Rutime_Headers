/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis {
    TSCHChartAxisAnalysis * mInProgressAnalysisForErrorBarData;
}

- (void).cxx_destruct;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)dataFormatter;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (bool)editableFormatForValueStrings;
- (id)formattedStringForAxisValue:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 index:(unsigned long long)arg2;
- (double)interceptForAxis:(id)arg1;
- (bool)supportsReferenceLines;
- (double)totalForGroup:(unsigned long long)arg1;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 index:(unsigned long long)arg3;
- (double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (double*)unitSpaceValuesForSeries:(id)arg1 indexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 min:(double)arg3 max:(double)arg4;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (id)userMax;
- (id)userMin;
- (bool)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (id)valueForFormattedString:(id)arg1;

@end
