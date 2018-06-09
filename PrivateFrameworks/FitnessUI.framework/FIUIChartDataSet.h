/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartDataSet : NSObject {
    <FIUIChartDataSetDataSource> * _dataSource;
    NSArray * _labels;
    NSArray * _points;
    long long  _tag;
}

@property (nonatomic) <FIUIChartDataSetDataSource> *dataSource;
@property (nonatomic) long long tag;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (id)labelsForSet;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (id)points;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setTag:(long long)arg1;
- (long long)tag;

@end
