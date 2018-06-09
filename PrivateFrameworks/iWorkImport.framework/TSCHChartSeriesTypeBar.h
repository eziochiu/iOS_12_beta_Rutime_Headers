/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesTypeBar : TSCHChartSeriesType

- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (id)axisTypesForValueLabels;
- (bool)chunkedBuildsIncludeInterceptValues;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (id)g_genericToSpecificPropertyMapBar;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (bool)isVertical;
- (id)legalChartLabelPositions;
- (id)supportedValueLabelsAxisCombinations;
- (bool)supportsBarGap;
- (bool)supportsRoundedCorners;
- (bool)supportsSetGap;
- (bool)useInBarGapCalculations;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (unsigned long long)valueDimensions;

@end
