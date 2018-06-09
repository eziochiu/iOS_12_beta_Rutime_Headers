/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetProfileInCarIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSetProfileInCarIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    bool  _defaultProfile;
    struct { 
        unsigned int defaultProfile : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBString * _profileName;
    _INPBInteger * _profileNumber;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defaultProfile;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDefaultProfile;
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
- (bool)defaultProfile;
- (id)dictionaryRepresentation;
- (bool)hasDefaultProfile;
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
- (void)setDefaultProfile:(bool)arg1;
- (void)setHasDefaultProfile:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setProfileNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
