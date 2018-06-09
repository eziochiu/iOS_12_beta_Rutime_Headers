/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSpatialEventTrigger : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSpatialEventTrigger> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _event;
    struct { 
        unsigned int event : 1; 
    }  _has;
    _INPBLocationValue * _location;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int event;
@property (nonatomic) bool hasEvent;
@property (nonatomic, readonly) bool hasLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocationValue *location;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsEvent:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)event;
- (id)eventAsString:(int)arg1;
- (bool)hasEvent;
- (bool)hasLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)writeTo:(id)arg1;

@end
