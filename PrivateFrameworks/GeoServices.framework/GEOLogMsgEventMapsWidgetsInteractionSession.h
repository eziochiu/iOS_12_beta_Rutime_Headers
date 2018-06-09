/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {
    int  _duration;
    int  _endState;
    struct { 
        unsigned int duration : 1; 
        unsigned int endState : 1; 
        unsigned int localDayOfWeek : 1; 
        unsigned int localHour : 1; 
        unsigned int mapsWidgetType : 1; 
        unsigned int lockedMode : 1; 
    }  _has;
    int  _localDayOfWeek;
    int  _localHour;
    bool  _lockedMode;
    GEOMapsDestinationsWidget * _mapsDestinationsWidget;
    GEOMapsNearbyWidget * _mapsNearbyWidget;
    GEOMapsTransitWidget * _mapsTransitWidget;
    int  _mapsWidgetType;
}

@property (nonatomic) int duration;
@property (nonatomic) int endState;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndState;
@property (nonatomic) bool hasLocalDayOfWeek;
@property (nonatomic) bool hasLocalHour;
@property (nonatomic) bool hasLockedMode;
@property (nonatomic, readonly) bool hasMapsDestinationsWidget;
@property (nonatomic, readonly) bool hasMapsNearbyWidget;
@property (nonatomic, readonly) bool hasMapsTransitWidget;
@property (nonatomic) bool hasMapsWidgetType;
@property (nonatomic) int localDayOfWeek;
@property (nonatomic) int localHour;
@property (nonatomic) bool lockedMode;
@property (nonatomic, retain) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (nonatomic, retain) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (nonatomic, retain) GEOMapsTransitWidget *mapsTransitWidget;
@property (nonatomic) int mapsWidgetType;

- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsMapsWidgetType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (bool)hasDuration;
- (bool)hasEndState;
- (bool)hasLocalDayOfWeek;
- (bool)hasLocalHour;
- (bool)hasLockedMode;
- (bool)hasMapsDestinationsWidget;
- (bool)hasMapsNearbyWidget;
- (bool)hasMapsTransitWidget;
- (bool)hasMapsWidgetType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)localDayOfWeek;
- (int)localHour;
- (bool)lockedMode;
- (id)mapsDestinationsWidget;
- (id)mapsNearbyWidget;
- (id)mapsTransitWidget;
- (int)mapsWidgetType;
- (id)mapsWidgetTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setEndState:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndState:(bool)arg1;
- (void)setHasLocalDayOfWeek:(bool)arg1;
- (void)setHasLocalHour:(bool)arg1;
- (void)setHasLockedMode:(bool)arg1;
- (void)setHasMapsWidgetType:(bool)arg1;
- (void)setLocalDayOfWeek:(int)arg1;
- (void)setLocalHour:(int)arg1;
- (void)setLockedMode:(bool)arg1;
- (void)setMapsDestinationsWidget:(id)arg1;
- (void)setMapsNearbyWidget:(id)arg1;
- (void)setMapsTransitWidget:(id)arg1;
- (void)setMapsWidgetType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
