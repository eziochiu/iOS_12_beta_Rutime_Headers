/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetDefrosterSettingsInCarIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSetDefrosterSettingsInCarIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _defroster;
    bool  _enable;
    struct { 
        unsigned int defroster : 1; 
        unsigned int enable : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int defroster;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enable;
@property (nonatomic) bool hasDefroster;
@property (nonatomic) bool hasEnable;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsDefroster:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)defroster;
- (id)defrosterAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)enable;
- (bool)hasDefroster;
- (bool)hasEnable;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDefroster:(int)arg1;
- (void)setEnable:(bool)arg1;
- (void)setHasDefroster:(bool)arg1;
- (void)setHasEnable:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
