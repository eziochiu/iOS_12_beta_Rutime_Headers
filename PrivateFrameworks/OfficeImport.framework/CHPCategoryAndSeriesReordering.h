/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPCategoryAndSeriesReordering : EDProcessor

- (void)applyCategoryReorderingPreprocessor:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)applySeriesReorderingPreprocessor:(id)arg1;
- (bool)isObjectSupported:(id)arg1;
- (bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(bool)arg2;
- (void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(bool)arg3;
- (void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(bool)arg3;
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(bool)arg3;
- (long long)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2;
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(bool)arg3;
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2;

@end
