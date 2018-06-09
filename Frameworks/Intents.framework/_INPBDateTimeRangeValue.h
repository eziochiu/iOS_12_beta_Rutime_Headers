/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTimeRangeValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDateTimeRangeValue> {
    INCodableAttribute * _associatedCodableAttribute;
    long long  _endCalendar;
    _INPBDateTime * _endDateTime;
    struct { 
        unsigned int endCalendar : 1; 
        unsigned int startCalendar : 1; 
    }  _has;
    _INPBRecurrenceValue * _recurrence;
    long long  _startCalendar;
    _INPBDateTime * _startDateTime;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long endCalendar;
@property (nonatomic, retain) _INPBDateTime *endDateTime;
@property (nonatomic) bool hasEndCalendar;
@property (nonatomic, readonly) bool hasEndDateTime;
@property (nonatomic, readonly) bool hasRecurrence;
@property (nonatomic) bool hasStartCalendar;
@property (nonatomic, readonly) bool hasStartDateTime;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBRecurrenceValue *recurrence;
@property (nonatomic) long long startCalendar;
@property (nonatomic, retain) _INPBDateTime *startDateTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (long long)endCalendar;
- (id)endDateTime;
- (bool)hasEndCalendar;
- (bool)hasEndDateTime;
- (bool)hasRecurrence;
- (bool)hasStartCalendar;
- (bool)hasStartDateTime;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recurrence;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEndCalendar:(long long)arg1;
- (void)setEndDateTime:(id)arg1;
- (void)setHasEndCalendar:(bool)arg1;
- (void)setHasStartCalendar:(bool)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setStartCalendar:(long long)arg1;
- (void)setStartDateTime:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (long long)startCalendar;
- (id)startDateTime;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
