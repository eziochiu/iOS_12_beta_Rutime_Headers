/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentResponsePayloadSuccess : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBIntentResponsePayloadSuccess> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int shouldOpenContainingApplication : 1; 
    }  _has;
    NSData * _responseMessageData;
    NSString * _responseTypeName;
    bool  _shouldOpenContainingApplication;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasResponseMessageData;
@property (nonatomic, readonly) bool hasResponseTypeName;
@property (nonatomic) bool hasShouldOpenContainingApplication;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *responseMessageData;
@property (nonatomic, copy) NSString *responseTypeName;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasResponseMessageData;
- (bool)hasResponseTypeName;
- (bool)hasShouldOpenContainingApplication;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseMessageData;
- (id)responseTypeName;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasShouldOpenContainingApplication:(bool)arg1;
- (void)setResponseMessageData:(id)arg1;
- (void)setResponseTypeName:(id)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;
- (void)writeTo:(id)arg1;

@end
