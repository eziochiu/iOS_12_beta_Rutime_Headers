/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    NSString * _actionUrl;
    unsigned long long  _animationID;
    unsigned long long  _businessID;
    NSString * _destinationApp;
    struct { 
        unsigned int animationID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int targetID : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
    }  _has;
    int  _localSearchProviderID;
    NSString * _photoId;
    long long  _placeID;
    int  _resultIndex;
    NSString * _richProviderId;
    double  _searchResponseRelativeTimestamp;
    unsigned long long  _targetID;
    GEOTransitPlaceCard * _transitPlaceCard;
}

@property (nonatomic, retain) NSString *actionUrl;
@property (nonatomic) unsigned long long animationID;
@property (nonatomic) unsigned long long businessID;
@property (nonatomic, retain) NSString *destinationApp;
@property (nonatomic, readonly) bool hasActionUrl;
@property (nonatomic) bool hasAnimationID;
@property (nonatomic) bool hasBusinessID;
@property (nonatomic, readonly) bool hasDestinationApp;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic, readonly) bool hasPhotoId;
@property (nonatomic) bool hasPlaceID;
@property (nonatomic) bool hasResultIndex;
@property (nonatomic, readonly) bool hasRichProviderId;
@property (nonatomic) bool hasSearchResponseRelativeTimestamp;
@property (nonatomic) bool hasTargetID;
@property (nonatomic, readonly) bool hasTransitPlaceCard;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic, retain) NSString *photoId;
@property (nonatomic) long long placeID;
@property (nonatomic) int resultIndex;
@property (nonatomic, retain) NSString *richProviderId;
@property (nonatomic) double searchResponseRelativeTimestamp;
@property (nonatomic) unsigned long long targetID;
@property (nonatomic, retain) GEOTransitPlaceCard *transitPlaceCard;

+ (id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2;
+ (id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
+ (id)actionDetailsWithTargetID:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)actionUrl;
- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationApp;
- (id)dictionaryRepresentation;
- (bool)hasActionUrl;
- (bool)hasAnimationID;
- (bool)hasBusinessID;
- (bool)hasDestinationApp;
- (bool)hasLocalSearchProviderID;
- (bool)hasPhotoId;
- (bool)hasPlaceID;
- (bool)hasResultIndex;
- (bool)hasRichProviderId;
- (bool)hasSearchResponseRelativeTimestamp;
- (bool)hasTargetID;
- (bool)hasTransitPlaceCard;
- (unsigned long long)hash;
- (id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (id)photoId;
- (long long)placeID;
- (bool)readFrom:(id)arg1;
- (int)resultIndex;
- (id)richProviderId;
- (double)searchResponseRelativeTimestamp;
- (void)setActionUrl:(id)arg1;
- (void)setAnimationID:(unsigned long long)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setDestinationApp:(id)arg1;
- (void)setHasAnimationID:(bool)arg1;
- (void)setHasBusinessID:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasPlaceID:(bool)arg1;
- (void)setHasResultIndex:(bool)arg1;
- (void)setHasSearchResponseRelativeTimestamp:(bool)arg1;
- (void)setHasTargetID:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPhotoId:(id)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setRichProviderId:(id)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (void)setTargetID:(unsigned long long)arg1;
- (void)setTransitPlaceCard:(id)arg1;
- (unsigned long long)targetID;
- (id)transitPlaceCard;
- (void)writeTo:(id)arg1;

@end
