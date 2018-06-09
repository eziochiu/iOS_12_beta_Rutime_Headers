/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRecurrenceValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRecurrenceValue> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _frequency;
    struct { 
        unsigned int frequency : 1; 
        unsigned int interval : 1; 
        unsigned int ordinal : 1; 
    }  _has;
    unsigned long long  _interval;
    long long  _ordinal;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frequency;
@property (nonatomic) bool hasFrequency;
@property (nonatomic) bool hasInterval;
@property (nonatomic) bool hasOrdinal;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) long long ordinal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsFrequency:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)frequency;
- (id)frequencyAsString:(int)arg1;
- (bool)hasFrequency;
- (bool)hasInterval;
- (bool)hasOrdinal;
- (unsigned long long)hash;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;
- (long long)ordinal;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setHasFrequency:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setOrdinal:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
