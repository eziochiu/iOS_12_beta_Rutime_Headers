/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForTimersIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForTimersIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    double  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int state : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _label;
    int  _state;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBDataString *label;
@property (nonatomic) int state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasDuration;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (bool)hasState;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
