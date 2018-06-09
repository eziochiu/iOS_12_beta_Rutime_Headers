/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int timeSinceRouteResponse : 1; 
        unsigned int resultIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int isNearCurrentlyDisplayedStep : 1; 
        unsigned int isNearRoute : 1; 
        unsigned int isUserTrackingOn : 1; 
    }  _has;
    bool  _isNearCurrentlyDisplayedStep;
    bool  _isNearRoute;
    bool  _isUserTrackingOn;
    int  _resultIndex;
    unsigned int  _stepID;
    double  _timeSinceRouteResponse;
}

@property (nonatomic) bool hasIsNearCurrentlyDisplayedStep;
@property (nonatomic) bool hasIsNearRoute;
@property (nonatomic) bool hasIsUserTrackingOn;
@property (nonatomic) bool hasResultIndex;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTimeSinceRouteResponse;
@property (nonatomic) bool isNearCurrentlyDisplayedStep;
@property (nonatomic) bool isNearRoute;
@property (nonatomic) bool isUserTrackingOn;
@property (nonatomic) int resultIndex;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) double timeSinceRouteResponse;

+ (id)routeDetailsWithResultIndex:(int)arg1;
+ (id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2;
+ (id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(bool)arg3 nearCurrentlyDisplayedStep:(bool)arg4 userTrackingOn:(bool)arg5 timeSinceResponse:(double)arg6;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNearCurrentlyDisplayedStep;
- (bool)hasIsNearRoute;
- (bool)hasIsUserTrackingOn;
- (bool)hasResultIndex;
- (bool)hasStepID;
- (bool)hasTimeSinceRouteResponse;
- (unsigned long long)hash;
- (id)initWithResultIndex:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNearCurrentlyDisplayedStep;
- (bool)isNearRoute;
- (bool)isUserTrackingOn;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultIndex;
- (void)setHasIsNearCurrentlyDisplayedStep:(bool)arg1;
- (void)setHasIsNearRoute:(bool)arg1;
- (void)setHasIsUserTrackingOn:(bool)arg1;
- (void)setHasResultIndex:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTimeSinceRouteResponse:(bool)arg1;
- (void)setIsNearCurrentlyDisplayedStep:(bool)arg1;
- (void)setIsNearRoute:(bool)arg1;
- (void)setIsUserTrackingOn:(bool)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeSinceRouteResponse:(double)arg1;
- (unsigned int)stepID;
- (double)timeSinceRouteResponse;
- (void)writeTo:(id)arg1;

@end
