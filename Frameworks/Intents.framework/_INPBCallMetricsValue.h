/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCallMetricsValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCallMetricsValue> {
    INCodableAttribute * _associatedCodableAttribute;
    double  _callDuration;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int timeToEstablish : 1; 
    }  _has;
    double  _timeToEstablish;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) double callDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasTimeToEstablish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeToEstablish;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (double)callDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCallDuration;
- (bool)hasTimeToEstablish;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCallDuration:(double)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasTimeToEstablish:(bool)arg1;
- (void)setTimeToEstablish:(double)arg1;
- (double)timeToEstablish;
- (void)writeTo:(id)arg1;

@end
