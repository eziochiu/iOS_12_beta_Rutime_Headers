/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLevelCategoryDataSource : HKHealthQueryChartCacheDataSource {
    id /* block */  _pointStyleBlock;
    HKSampleType * _sampleType;
    id /* block */  _userInfoCreationBlock;
    NSArray * _valueOrder;
}

@property (nonatomic, copy) id /* block */ pointStyleBlock;
@property (nonatomic, retain) HKSampleType *sampleType;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;
@property (nonatomic, retain) NSArray *valueOrder;

- (void).cxx_destruct;
- (void)_handleSamples:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)pointStyleBlock;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)sampleType;
- (void)setPointStyleBlock:(id /* block */)arg1;
- (void)setSampleType:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (void)setValueOrder:(id)arg1;
- (id /* block */)userInfoCreationBlock;
- (id)valueOrder;

@end
