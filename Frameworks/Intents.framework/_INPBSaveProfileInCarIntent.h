/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSaveProfileInCarIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSaveProfileInCarIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBString * _profileName;
    _INPBInteger * _profileNumber;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasProfileName;
@property (nonatomic, readonly) bool hasProfileNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBString *profileName;
@property (nonatomic, retain) _INPBInteger *profileNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasProfileName;
- (bool)hasProfileNumber;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)profileName;
- (id)profileNumber;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setProfileNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
