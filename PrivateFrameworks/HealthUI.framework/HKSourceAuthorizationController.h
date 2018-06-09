/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSourceAuthorizationController : NSObject {
    <HKSourceAuthorizationControllerDelegate> * _delegate;
    HKHealthStore * _healthStore;
    bool  _isUpdatingAllTypes;
    NSArray * _orderedTypesForReading;
    NSArray * _orderedTypesForSharing;
    NSDictionary * _requestedDocumentAuths;
    NSSet * _requestedTypesForReading;
    NSSet * _requestedTypesForSharing;
    HKSource * _source;
    NSMutableSet * _typesEnabledForReading;
    NSMutableSet * _typesEnabledForSharing;
}

@property (nonatomic, readonly) bool anyTypeRequested;
@property (nonatomic) <HKSourceAuthorizationControllerDelegate> *delegate;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic) bool isUpdatingAllTypes;
@property (nonatomic, retain) NSArray *orderedTypesForReading;
@property (nonatomic, retain) NSArray *orderedTypesForSharing;
@property (nonatomic, retain) NSDictionary *requestedDocumentAuths;
@property (nonatomic, retain) NSSet *requestedTypesForReading;
@property (nonatomic, retain) NSSet *requestedTypesForSharing;
@property (nonatomic, readonly) HKSource *source;
@property (nonatomic, retain) NSMutableSet *typesEnabledForReading;
@property (nonatomic, retain) NSMutableSet *typesEnabledForSharing;

- (void).cxx_destruct;
- (long long)_authorizationStatusWithType:(id)arg1;
- (id)_enabledSubTypesForType:(id)arg1 inSection:(long long)arg2;
- (id)_enabledTypesInSection:(long long)arg1;
- (bool)_parentTypeDisabledForType:(id)arg1 inSection:(long long)arg2;
- (void)_reloadDocumentAuthorizationRecords;
- (void)_reloadTypeAuthorizationRecords;
- (void)_setAuthorizationStatuses:(id)arg1;
- (id)_sortedTypes:(id)arg1;
- (void)_updateAuthorizationStatusWithTypes:(id)arg1;
- (bool)allTypesEnabled;
- (bool)anyTypeEnabled;
- (bool)anyTypeRequested;
- (void)commitAuthorizationStatuses;
- (void)commitObjectAuthorizationStatuses:(id)arg1;
- (unsigned long long)countOfTypesInSection:(long long)arg1;
- (id)delegate;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4;
- (bool)isRequestingDocumentAuthorization;
- (bool)isTypeEnabled:(id)arg1 inSection:(long long)arg2;
- (bool)isUpdatingAllTypes;
- (id)objectAuthorizationStatusesForDocuments;
- (id)orderedTypesForReading;
- (id)orderedTypesForSharing;
- (void)reload;
- (id)requestedDocumentAuths;
- (id)requestedTypesForReading;
- (id)requestedTypesForSharing;
- (void)resetObjectAuthorizationStatuses;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1 forAllTypesInSection:(long long)arg2 commit:(bool)arg3;
- (void)setEnabled:(bool)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(bool)arg4;
- (void)setIsUpdatingAllTypes:(bool)arg1;
- (void)setOrderedTypesForReading:(id)arg1;
- (void)setOrderedTypesForSharing:(id)arg1;
- (void)setRequestedDocumentAuths:(id)arg1;
- (void)setRequestedTypesForReading:(id)arg1;
- (void)setRequestedTypesForSharing:(id)arg1;
- (void)setTypesEnabledForReading:(id)arg1;
- (void)setTypesEnabledForSharing:(id)arg1;
- (id)source;
- (id)typesEnabledForReading;
- (id)typesEnabledForSharing;
- (id)typesInSection:(long long)arg1;

@end
