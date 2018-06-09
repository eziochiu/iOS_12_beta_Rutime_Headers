/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying> {
    AWDHomeKitCalendarEvent * _calendarEvent;
    AWDHomeKitCharacteristicEvent * _charEvent;
    AWDHomeKitCharacteristicThresholdEvent * _charThresholdEvent;
    AWDHomeKitDurationEvent * _durationEvent;
    bool  _endEvent;
    struct { 
        unsigned int endEvent : 1; 
    }  _has;
    AWDHomeKitLocationEvent * _locationEvent;
    AWDHomeKitPresenceEvent * _presenceEvent;
    AWDHomeKitSignificantTimeEvent * _significantTimeEvent;
    AWDHomeKitCharacteristicThresholdEvent * _thresholdEvent;
}

@property (nonatomic, retain) AWDHomeKitCalendarEvent *calendarEvent;
@property (nonatomic, retain) AWDHomeKitCharacteristicEvent *charEvent;
@property (nonatomic, retain) AWDHomeKitCharacteristicThresholdEvent *charThresholdEvent;
@property (nonatomic, retain) AWDHomeKitDurationEvent *durationEvent;
@property (nonatomic) bool endEvent;
@property (nonatomic, readonly) bool hasCalendarEvent;
@property (nonatomic, readonly) bool hasCharEvent;
@property (nonatomic, readonly) bool hasCharThresholdEvent;
@property (nonatomic, readonly) bool hasDurationEvent;
@property (nonatomic) bool hasEndEvent;
@property (nonatomic, readonly) bool hasLocationEvent;
@property (nonatomic, readonly) bool hasPresenceEvent;
@property (nonatomic, readonly) bool hasSignificantTimeEvent;
@property (nonatomic, readonly) bool hasThresholdEvent;
@property (nonatomic, retain) AWDHomeKitLocationEvent *locationEvent;
@property (nonatomic, retain) AWDHomeKitPresenceEvent *presenceEvent;
@property (nonatomic, retain) AWDHomeKitSignificantTimeEvent *significantTimeEvent;
@property (nonatomic, retain) AWDHomeKitCharacteristicThresholdEvent *thresholdEvent;

- (void).cxx_destruct;
- (id)calendarEvent;
- (id)charEvent;
- (id)charThresholdEvent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)durationEvent;
- (bool)endEvent;
- (bool)hasCalendarEvent;
- (bool)hasCharEvent;
- (bool)hasCharThresholdEvent;
- (bool)hasDurationEvent;
- (bool)hasEndEvent;
- (bool)hasLocationEvent;
- (bool)hasPresenceEvent;
- (bool)hasSignificantTimeEvent;
- (bool)hasThresholdEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationEvent;
- (void)mergeFrom:(id)arg1;
- (id)presenceEvent;
- (bool)readFrom:(id)arg1;
- (void)setCalendarEvent:(id)arg1;
- (void)setCharEvent:(id)arg1;
- (void)setCharThresholdEvent:(id)arg1;
- (void)setDurationEvent:(id)arg1;
- (void)setEndEvent:(bool)arg1;
- (void)setHasEndEvent:(bool)arg1;
- (void)setLocationEvent:(id)arg1;
- (void)setPresenceEvent:(id)arg1;
- (void)setSignificantTimeEvent:(id)arg1;
- (void)setThresholdEvent:(id)arg1;
- (id)significantTimeEvent;
- (id)thresholdEvent;
- (void)writeTo:(id)arg1;

@end
