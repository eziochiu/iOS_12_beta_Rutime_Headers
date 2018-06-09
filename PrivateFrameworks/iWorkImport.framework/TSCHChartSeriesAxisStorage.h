/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesAxisStorage : NSObject {
    TSCHChartGridAdapter * adapter;
    TSCHChartAxisID * axisID;
}

@property (nonatomic, retain) TSCHChartGridAdapter *adapter;
@property (nonatomic, retain) TSCHChartAxisID *axisID;

- (void).cxx_destruct;
- (id)adapter;
- (id)axisID;
- (unsigned long long)numberOfValues;
- (void)setAdapter:(id)arg1;
- (void)setAxisID:(id)arg1;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id)valueAtIndex:(unsigned long long)arg1 multiDataSetIndex:(unsigned long long)arg2;
- (id*)valuesAtIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 multiDataSetIndex:(unsigned long long)arg2;

@end
