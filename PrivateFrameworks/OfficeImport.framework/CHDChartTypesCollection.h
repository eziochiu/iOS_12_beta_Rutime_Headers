/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDChartTypesCollection : EDCollection {
    CHDChart * mChart;
}

- (unsigned long long)addObject:(id)arg1;
- (id)initWithChart:(id)arg1;
- (void)resetSeriesOrder;

@end