/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFenceSet : SADomainCommand

@property (nonatomic, copy) NSNumber *enable;
@property (nonatomic, copy) NSString *fenceType;
@property (nonatomic, retain) SAPerson *friend;
@property (nonatomic, copy) NSString *geoFenceTrigger;
@property (nonatomic, copy) NSNumber *oneTimeOnly;
@property (nonatomic, retain) SALocation *requestedLocation;

+ (id)geoFenceSet;
+ (id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;

- (id)enable;
- (id)encodedClassName;
- (id)fenceType;
- (id)friend;
- (id)geoFenceTrigger;
- (id)groupIdentifier;
- (id)oneTimeOnly;
- (id)requestedLocation;
- (bool)requiresResponse;
- (void)setEnable:(id)arg1;
- (void)setFenceType:(id)arg1;
- (void)setFriend:(id)arg1;
- (void)setGeoFenceTrigger:(id)arg1;
- (void)setOneTimeOnly:(id)arg1;
- (void)setRequestedLocation:(id)arg1;

@end
