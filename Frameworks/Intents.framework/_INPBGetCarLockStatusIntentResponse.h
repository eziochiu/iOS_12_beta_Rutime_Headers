/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetCarLockStatusIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGetCarLockStatusIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int locked : 1; 
    }  _has;
    bool  _locked;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasLocked;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locked;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasLocked;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
