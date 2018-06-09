/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetCarLockStatusIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSetCarLockStatusIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBDataString * _carName;
    struct { 
        unsigned int locked : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _locked;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBDataString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasLocked;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool locked;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)carName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (bool)hasLocked;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCarName:(id)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
