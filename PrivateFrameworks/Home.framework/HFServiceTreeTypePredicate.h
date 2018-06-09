/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching> {
    bool  _includeChildServices;
    NSSet * _serviceSubtypes;
    NSSet * _serviceTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeChildServices;
@property (nonatomic, readonly, copy) NSSet *serviceSubtypes;
@property (nonatomic, readonly, copy) NSSet *serviceTypes;
@property (readonly) Class superclass;

+ (id)anyServiceTypePredicate;
+ (id)anyServiceTypePredicateIncludingChildServices;
+ (id)na_identity;
+ (id)predicateWithServiceType:(id)arg1;
+ (id)predicateWithServiceType:(id)arg1 includeChildServices:(bool)arg2;

- (void).cxx_destruct;
- (bool)_matchesService:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)includeChildServices;
- (id)initWithServiceTypes:(id)arg1 serviceSubtypes:(id)arg2 includeChildServices:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)matchingServicesForRootService:(id)arg1;
- (id)serviceSubtypes;
- (id)serviceTypes;

@end
