/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBEventList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBEventList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    NSArray * _events;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *events;
@property (nonatomic, readonly) unsigned long long eventsCount;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventType;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearEvents;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned long long)arg1;
- (id)events;
- (unsigned long long)eventsCount;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
