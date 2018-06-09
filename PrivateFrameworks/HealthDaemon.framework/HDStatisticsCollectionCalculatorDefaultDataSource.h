/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {
    NSNumber * _anchor;
    HDSQLitePredicate * _fullPredicate;
    HDSQLitePredicate * _predicate;
    HDProfile * _profile;
    HKQuantityType * _quantityType;
    NSSet * _restrictedSourceEntities;
    long long  _shouldContinueFrequency;
    id /* block */  _shouldContinueHandler;
}

@property (nonatomic, copy) NSNumber *anchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) HDSQLitePredicate *predicate;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (nonatomic, copy) NSSet *restrictedSourceEntities;
@property (nonatomic) long long shouldContinueFrequency;
@property (nonatomic, copy) id /* block */ shouldContinueHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_addValueForQuantitySample:(id)arg1 calculator:(id)arg2 error:(id*)arg3;
- (bool)_addValueForQuantitySeriesSample:(id)arg1 calculator:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)_addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 error:(id*)arg3;
- (bool)_addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 includeSeries:(bool)arg3 error:(id*)arg4;
- (id)anchor;
- (bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(id /* block */)arg4;
- (id)initForProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4;
- (id)predicate;
- (id)profile;
- (id)quantityType;
- (id)restrictedSourceEntities;
- (void)setAnchor:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRestrictedSourceEntities:(id)arg1;
- (void)setShouldContinueFrequency:(long long)arg1;
- (void)setShouldContinueHandler:(id /* block */)arg1;
- (long long)shouldContinueFrequency;
- (id /* block */)shouldContinueHandler;

@end
