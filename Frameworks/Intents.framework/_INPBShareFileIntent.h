/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareFileIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBShareFileIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _entityNames;
    struct { 
        unsigned int shareMode : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _recipients;
    int  _shareMode;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasShareMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (readonly) Class superclass;

+ (Class)entityNameType;
+ (Class)recipientsType;

- (void).cxx_destruct;
- (int)StringAsShareMode:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addRecipients:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearEntityNames;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (bool)hasIntentMetadata;
- (bool)hasShareMode;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setHasShareMode:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setShareMode:(int)arg1;
- (int)shareMode;
- (id)shareModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
