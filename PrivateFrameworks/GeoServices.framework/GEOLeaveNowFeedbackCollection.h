/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {
    int  _actionType;
    int  _alertType;
    double  _currentTimestamp;
    double  _eventTimestamp;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int currentTimestamp : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int travelDuration : 1; 
        unsigned int actionType : 1; 
        unsigned int alertType : 1; 
        unsigned int travelState : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    double  _travelDuration;
    int  _travelState;
}

@property (nonatomic) int actionType;
@property (nonatomic) int alertType;
@property (nonatomic) double currentTimestamp;
@property (nonatomic) double eventTimestamp;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasAlertType;
@property (nonatomic) bool hasCurrentTimestamp;
@property (nonatomic) bool hasEventTimestamp;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasTravelDuration;
@property (nonatomic) bool hasTravelState;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) double travelDuration;
@property (nonatomic) int travelState;

- (int)StringAsActionType:(id)arg1;
- (int)StringAsAlertType:(id)arg1;
- (int)StringAsTravelState:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (int)alertType;
- (id)alertTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTimestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eventTimestamp;
- (bool)hasActionType;
- (bool)hasAlertType;
- (bool)hasCurrentTimestamp;
- (bool)hasEventTimestamp;
- (bool)hasSessionID;
- (bool)hasTravelDuration;
- (bool)hasTravelState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setActionType:(int)arg1;
- (void)setAlertType:(int)arg1;
- (void)setCurrentTimestamp:(double)arg1;
- (void)setEventTimestamp:(double)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasCurrentTimestamp:(bool)arg1;
- (void)setHasEventTimestamp:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasTravelDuration:(bool)arg1;
- (void)setHasTravelState:(bool)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTravelDuration:(double)arg1;
- (void)setTravelState:(int)arg1;
- (double)travelDuration;
- (int)travelState;
- (id)travelStateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
