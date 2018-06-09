/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartVideoCallIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBStartVideoCallIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _audioRoute;
    struct { 
        unsigned int audioRoute : 1; 
    }  _has;
    _INPBCallMetrics * _metrics;
    NSString * _status;
    NSArray * _targetContacts;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int audioRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic, readonly) bool hasMetrics;
@property (nonatomic, readonly) bool hasStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBCallMetrics *metrics;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (void)addTargetContacts:(id)arg1;
- (id)associatedCodableAttribute;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (void)clearTargetContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAudioRoute;
- (bool)hasMetrics;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setMetrics:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTargetContacts:(id)arg1;
- (id)status;
- (id)targetContacts;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;
- (void)writeTo:(id)arg1;

@end
