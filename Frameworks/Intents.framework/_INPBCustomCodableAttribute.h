/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCustomCodableAttribute : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCustomCodableAttribute> {
    _INPBCustomCodableAttribute * _associatedAttribute;
    INCodableAttribute * _associatedCodableAttribute;
    int  _customCodableAttributeClass;
    struct { 
        unsigned int customCodableAttributeClass : 1; 
        unsigned int modifier : 1; 
        unsigned int runtimeTag : 1; 
        unsigned int scalarType : 1; 
    }  _has;
    int  _modifier;
    NSString * _objectClassName;
    NSString * _propertyName;
    int  _runtimeTag;
    int  _scalarType;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBCustomCodableAttribute *associatedAttribute;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int customCodableAttributeClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAssociatedAttribute;
@property (nonatomic) bool hasCustomCodableAttributeClass;
@property (nonatomic) bool hasModifier;
@property (nonatomic, readonly) bool hasObjectClassName;
@property (nonatomic, readonly) bool hasPropertyName;
@property (nonatomic) bool hasRuntimeTag;
@property (nonatomic) bool hasScalarType;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic) int modifier;
@property (nonatomic, copy) NSString *objectClassName;
@property (nonatomic, copy) NSString *propertyName;
@property (nonatomic) int runtimeTag;
@property (nonatomic) int scalarType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (int)StringAsCustomCodableAttributeClass:(id)arg1;
- (int)StringAsModifier:(id)arg1;
- (int)StringAsScalarType:(id)arg1;
- (id)associatedAttribute;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)customCodableAttributeClass;
- (id)customCodableAttributeClassAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAssociatedAttribute;
- (bool)hasCustomCodableAttributeClass;
- (bool)hasModifier;
- (bool)hasObjectClassName;
- (bool)hasPropertyName;
- (bool)hasRuntimeTag;
- (bool)hasScalarType;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)modifier;
- (id)modifierAsString:(int)arg1;
- (id)objectClassName;
- (id)propertyName;
- (bool)readFrom:(id)arg1;
- (int)runtimeTag;
- (int)scalarType;
- (id)scalarTypeAsString:(int)arg1;
- (void)setAssociatedAttribute:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCustomCodableAttributeClass:(int)arg1;
- (void)setHasCustomCodableAttributeClass:(bool)arg1;
- (void)setHasModifier:(bool)arg1;
- (void)setHasRuntimeTag:(bool)arg1;
- (void)setHasScalarType:(bool)arg1;
- (void)setModifier:(int)arg1;
- (void)setObjectClassName:(id)arg1;
- (void)setPropertyName:(id)arg1;
- (void)setRuntimeTag:(int)arg1;
- (void)setScalarType:(int)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
