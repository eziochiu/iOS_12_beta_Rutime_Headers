/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRefinementItem : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRefinementItem> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBSelectionItem * _item;
    NSString * _subKeyPath;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasItem;
@property (nonatomic, readonly) bool hasSubKeyPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBSelectionItem *item;
@property (nonatomic, copy) NSString *subKeyPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasItem;
- (bool)hasSubKeyPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)item;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSubKeyPath:(id)arg1;
- (id)subKeyPath;
- (void)writeTo:(id)arg1;

@end
