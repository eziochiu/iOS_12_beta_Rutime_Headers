/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTime : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDateTime> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _calendarSystem;
    _INPBLocalDate * _date;
    struct { 
        unsigned int calendarSystem : 1; 
    }  _has;
    _INPBLocalTime * _time;
    NSString * _timeZoneID;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int calendarSystem;
@property (nonatomic, retain) _INPBLocalDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCalendarSystem;
@property (nonatomic, readonly) bool hasDate;
@property (nonatomic, readonly) bool hasTime;
@property (nonatomic, readonly) bool hasTimeZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBLocalTime *time;
@property (nonatomic, copy) NSString *timeZoneID;

- (void).cxx_destruct;
- (int)StringAsCalendarSystem:(id)arg1;
- (id)associatedCodableAttribute;
- (int)calendarSystem;
- (id)calendarSystemAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dictionaryRepresentation;
- (bool)hasCalendarSystem;
- (bool)hasDate;
- (bool)hasTime;
- (bool)hasTimeZoneID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCalendarSystem:(int)arg1;
- (void)setDate:(id)arg1;
- (void)setHasCalendarSystem:(bool)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeZoneID:(id)arg1;
- (id)time;
- (id)timeZoneID;
- (void)writeTo:(id)arg1;

@end
