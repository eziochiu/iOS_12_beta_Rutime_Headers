/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDeleteFilePermanentlyIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDeleteFilePermanentlyIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    bool  _confirm;
    struct { 
        unsigned int confirm : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _success;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) bool confirm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirm;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (bool)confirm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasConfirm;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setConfirm:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
