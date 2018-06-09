/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalRecordChartDataSource : HKGraphSeriesDataSource {
    NSArray * _chartPoints;
    id /* block */  _userInfoCreationBlock;
}

@property (nonatomic, retain) NSArray *chartPoints;
@property (nonatomic, copy) id /* block */ userInfoCreationBlock;

- (void).cxx_destruct;
- (id)_chartPointsFromChartableValues:(id)arg1;
- (id)cachedBlockForPath:(struct { long long x1; long long x2; })arg1 context:(id)arg2;
- (id)chartPoints;
- (void)processChartableValues:(id)arg1;
- (void)setChartPoints:(id)arg1;
- (void)setUserInfoCreationBlock:(id /* block */)arg1;
- (id /* block */)userInfoCreationBlock;

@end
