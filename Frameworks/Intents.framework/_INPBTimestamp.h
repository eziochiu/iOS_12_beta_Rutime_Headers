/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTimestamp : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBTimestamp> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int nanos : 1; 
        unsigned int seconds : 1; 
    }  _has;
    int  _nanos;
    long long  _seconds;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNanos;
@property (nonatomic) bool hasSeconds;
@property (readonly) unsigned long long hash;
@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasNanos;
- (bool)hasSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)nanos;
- (bool)readFrom:(id)arg1;
- (long long)seconds;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasNanos:(bool)arg1;
- (void)setHasSeconds:(bool)arg1;
- (void)setNanos:(int)arg1;
- (void)setSeconds:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
