/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchMapItem : SADomainObject

@property (nonatomic, copy) NSArray *attributions;
@property (nonatomic, retain) <SAAceSerializable> *detail;
@property (nonatomic, copy) NSString *detailType;
@property (nonatomic, copy) NSString *directionRole;
@property (nonatomic, retain) SADistance *distance;
@property (nonatomic, copy) NSNumber *distanceInMiles;
@property (nonatomic, copy) NSString *extSessionGuid;
@property (nonatomic, copy) NSDate *extSessionGuidCreatedTimestamp;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *localSearchProviderId;
@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSData *placeData;
@property (nonatomic, copy) NSData *placeData2;
@property (nonatomic, copy) NSNumber *placeId;
@property (nonatomic, copy) NSData *resultDetourInfoData;
@property (nonatomic, copy) NSString *spokenAddress;
@property (nonatomic, copy) NSString *spokenName;
@property (nonatomic, copy) NSString *suggestionsEntryType;

+ (id)mapItem;
+ (id)mapItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributions;
- (id)detail;
- (id)detailType;
- (id)directionRole;
- (id)distance;
- (id)distanceInMiles;
- (id)encodedClassName;
- (id)extSessionGuid;
- (id)extSessionGuidCreatedTimestamp;
- (id)groupIdentifier;
- (id)label;
- (id)localSearchProviderId;
- (id)location;
- (id)placeData;
- (id)placeData2;
- (id)placeId;
- (id)resultDetourInfoData;
- (void)setAttributions:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setDetailType:(id)arg1;
- (void)setDirectionRole:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setDistanceInMiles:(id)arg1;
- (void)setExtSessionGuid:(id)arg1;
- (void)setExtSessionGuidCreatedTimestamp:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalSearchProviderId:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPlaceData2:(id)arg1;
- (void)setPlaceData:(id)arg1;
- (void)setPlaceId:(id)arg1;
- (void)setResultDetourInfoData:(id)arg1;
- (void)setSpokenAddress:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (void)setSuggestionsEntryType:(id)arg1;
- (id)spokenAddress;
- (id)spokenName;
- (id)suggestionsEntryType;

@end
