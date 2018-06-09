/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForFilesIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForFilesIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _entities;
    struct { 
        unsigned int success : 1; 
    }  _has;
    _INPBInteger * _numResults;
    _INPBString * _query;
    bool  _success;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entities;
@property (nonatomic, readonly) unsigned long long entitiesCount;
@property (nonatomic, readonly) bool hasNumResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBInteger *numResults;
@property (nonatomic, retain) _INPBString *query;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (Class)entitiesType;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasNumResults;
- (bool)hasQuery;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)numResults;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setNumResults:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
