/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCondition : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCondition> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _conditionalOperator;
    struct { 
        unsigned int conditionalOperator : 1; 
    }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int conditionalOperator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConditionalOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsConditionalOperator:(id)arg1;
- (id)associatedCodableAttribute;
- (int)conditionalOperator;
- (id)conditionalOperatorAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasConditionalOperator;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setConditionalOperator:(int)arg1;
- (void)setHasConditionalOperator:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
