/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBUncompressFileIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBUncompressFileIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBString * _entityName;
    struct { 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *entityName;
@property (nonatomic, readonly) bool hasEntityName;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)entityName;
- (bool)hasEntityName;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
