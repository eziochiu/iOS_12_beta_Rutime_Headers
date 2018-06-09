/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKClinicalSourceAuthorizationController : NSObject {
    bool  _anyDeterminedTypeAllowsReading;
    long long  _authorizationModeForSource;
    NSDate * _displayReadAuthorizationAnchorDate;
    NSError * _fetchError;
    HKHealthStore * _healthStore;
    NSArray * _orderedTypesForReading;
    HKSource * _source;
    NSMutableSet * _typesEnabledForReading;
    NSSet * _typesForReading;
    NSSet * _typesRequestedForReading;
}

@property (nonatomic) bool anyDeterminedTypeAllowsReading;
@property (nonatomic, readonly) bool anyTypeRequested;
@property (nonatomic) long long authorizationModeForSource;
@property (nonatomic, copy) NSDate *displayReadAuthorizationAnchorDate;
@property (nonatomic, copy) NSError *fetchError;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) NSArray *orderedTypesForReading;
@property (nonatomic, readonly, copy) HKSource *source;
@property (nonatomic, readonly) NSMutableSet *typesEnabledForReading;
@property (nonatomic, copy) NSSet *typesForReading;
@property (nonatomic, readonly, copy) NSSet *typesRequestedForReading;

- (void).cxx_destruct;
- (id)_authorizationModesWithMode:(long long)arg1 types:(id)arg2;
- (long long)_authorizationStatusWithType:(id)arg1;
- (id)_authorizationStatusesWithTypes:(id)arg1;
- (id)_orderTypes:(id)arg1;
- (void)_setAuthorizationStatuses:(id)arg1 modes:(id)arg2 shouldUpdateAnchor:(bool)arg3;
- (bool)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)arg1;
- (void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)arg1;
- (bool)allTypesEnabled;
- (bool)anyDeterminedTypeAllowsReading;
- (bool)anyTypeEnabled;
- (bool)anyTypeRequested;
- (long long)authorizationModeForSource;
- (void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)arg1;
- (id)displayReadAuthorizationAnchorDate;
- (id)fetchError;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2 typesRequestedForReading:(id)arg3;
- (bool)isTypeEnabled:(id)arg1;
- (id)orderedTypesForReading;
- (void)reload;
- (void)setAnyDeterminedTypeAllowsReading:(bool)arg1;
- (void)setAuthorizationModeForSource:(long long)arg1;
- (void)setDisplayReadAuthorizationAnchorDate:(id)arg1;
- (void)setEnabled:(bool)arg1 forType:(id)arg2 commit:(bool)arg3;
- (void)setEnabledForAllTypes:(bool)arg1;
- (void)setFetchError:(id)arg1;
- (void)setTypesForReading:(id)arg1;
- (id)source;
- (id)typesEnabledForReading;
- (id)typesForReading;
- (id)typesRequestedForReading;

@end
