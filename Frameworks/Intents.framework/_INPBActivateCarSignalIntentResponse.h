/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBActivateCarSignalIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBActivateCarSignalIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _signals;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int*signals;
@property (nonatomic, readonly) unsigned long long signalsCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsSignals:(id)arg1;
- (void)addSignals:(int)arg1;
- (id)associatedCodableAttribute;
- (void)clearSignals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setSignals:(int*)arg1 count:(unsigned long long)arg2;
- (int*)signals;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)signalsCount;
- (void)writeTo:(id)arg1;

@end
