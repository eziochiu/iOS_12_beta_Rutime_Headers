/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
 */

@interface FIActivitySettingsController : NSObject <NSCopying> {
    long long  _biologicalSex;
    NSDate * _dateOfBirth;
    NSMutableDictionary * _dirtyPropertiesMap;
    HKHealthStore * _healthStore;
    HKQuantity * _height;
    id /* block */  _updateHandler;
    HKQuantity * _weight;
    long long  _wheelchairUse;
}

@property (nonatomic) long long biologicalSex;
@property (nonatomic, retain) NSDate *dateOfBirth;
@property (nonatomic, retain) HKQuantity *height;
@property (nonatomic, readonly) HKQuantity *leanBodyMass;
@property (nonatomic, copy) id /* block */ updateHandler;
@property (nonatomic, retain) HKQuantity *weight;
@property (nonatomic) long long wheelchairUse;

- (void).cxx_destruct;
- (bool)_commitValue:(id)arg1 forPropertyKey:(id)arg2 error:(id*)arg3;
- (bool)_hasDirtyPropertyForPropertyKey:(id)arg1;
- (bool)_logAndNilError:(id*)arg1 operationDescription:(id)arg2;
- (void)_setUncommitedValue:(id)arg1 forPropertyKey:(id)arg2;
- (long long)biologicalSex;
- (bool)commmitWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfBirth;
- (id)height;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)leanBodyMass;
- (void)populateExistingCharacteristics;
- (void)setBiologicalSex:(long long)arg1;
- (void)setDateOfBirth:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)setWeight:(id)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (id /* block */)updateHandler;
- (id)weight;
- (long long)wheelchairUse;

@end
