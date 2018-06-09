/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTimer : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBTimer> {
    INCodableAttribute * _associatedCodableAttribute;
    double  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int remainingTime : 1; 
        unsigned int state : 1; 
    }  _has;
    NSString * _identifier;
    _INPBDataString * _label;
    double  _remainingTime;
    int  _state;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasRemainingTime;
@property (nonatomic) bool hasState;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBDataString *label;
@property (nonatomic) double remainingTime;
@property (nonatomic) int state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsState:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasDuration;
- (bool)hasIdentifier;
- (bool)hasLabel;
- (bool)hasRemainingTime;
- (bool)hasState;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)readFrom:(id)arg1;
- (double)remainingTime;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasRemainingTime:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)stateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
