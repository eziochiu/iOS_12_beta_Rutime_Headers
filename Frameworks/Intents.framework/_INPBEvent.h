/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBEvent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBEvent> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _eventDescriptors;
    _INPBString * _eventType;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *eventDescriptors;
@property (nonatomic, readonly) unsigned long long eventDescriptorsCount;
@property (nonatomic, retain) _INPBString *eventType;
@property (nonatomic, readonly) bool hasEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)eventDescriptorsType;

- (void).cxx_destruct;
- (void)addEventDescriptors:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearEventDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)eventDescriptors;
- (id)eventDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventDescriptorsCount;
- (id)eventType;
- (bool)hasEventType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEventDescriptors:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
