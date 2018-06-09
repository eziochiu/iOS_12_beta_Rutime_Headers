/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadNeedsValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPayloadNeedsValue> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _promptItems;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *promptItems;
@property (nonatomic, readonly) unsigned long long promptItemsCount;
@property (readonly) Class superclass;

+ (Class)promptItemsType;

- (void).cxx_destruct;
- (void)addPromptItems:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearPromptItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)promptItems;
- (id)promptItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)promptItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setPromptItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
