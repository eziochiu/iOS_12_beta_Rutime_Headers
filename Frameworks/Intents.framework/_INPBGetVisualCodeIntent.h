/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetVisualCodeIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGetVisualCodeIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int visualCodeType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _visualCodeType;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasVisualCodeType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic) int visualCodeType;

- (void).cxx_destruct;
- (int)StringAsVisualCodeType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasVisualCodeType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasVisualCodeType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setVisualCodeType:(int)arg1;
- (int)visualCodeType;
- (id)visualCodeTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
