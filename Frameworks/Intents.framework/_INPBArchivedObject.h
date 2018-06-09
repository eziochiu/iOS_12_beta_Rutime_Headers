/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBArchivedObject : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBArchivedObject> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSData * _messageData;
    NSString * _typeName;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMessageData;
@property (nonatomic, readonly) bool hasTypeName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *messageData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeName;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasMessageData;
- (bool)hasTypeName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)messageData;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setMessageData:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)typeName;
- (void)writeTo:(id)arg1;

@end
