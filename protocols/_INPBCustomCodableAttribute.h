/* made by EzioChiu.
 */

@protocol _INPBCustomCodableAttribute <NSObject>

@required

- (int)StringAsCustomCodableAttributeClass:(NSString *)arg1;
- (int)StringAsModifier:(NSString *)arg1;
- (int)StringAsScalarType:(NSString *)arg1;
- (_INPBCustomCodableAttribute *)associatedAttribute;
- (int)customCodableAttributeClass;
- (NSString *)customCodableAttributeClassAsString:(int)arg1;
- (bool)hasAssociatedAttribute;
- (bool)hasCustomCodableAttributeClass;
- (bool)hasModifier;
- (bool)hasObjectClassName;
- (bool)hasPropertyName;
- (bool)hasRuntimeTag;
- (bool)hasScalarType;
- (bool)hasValueMetadata;
- (int)modifier;
- (NSString *)modifierAsString:(int)arg1;
- (NSString *)objectClassName;
- (NSString *)propertyName;
- (int)runtimeTag;
- (int)scalarType;
- (NSString *)scalarTypeAsString:(int)arg1;
- (void)setAssociatedAttribute:(_INPBCustomCodableAttribute *)arg1;
- (void)setCustomCodableAttributeClass:(int)arg1;
- (void)setHasCustomCodableAttributeClass:(bool)arg1;
- (void)setHasModifier:(bool)arg1;
- (void)setHasRuntimeTag:(bool)arg1;
- (void)setHasScalarType:(bool)arg1;
- (void)setModifier:(int)arg1;
- (void)setObjectClassName:(NSString *)arg1;
- (void)setPropertyName:(NSString *)arg1;
- (void)setRuntimeTag:(int)arg1;
- (void)setScalarType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
