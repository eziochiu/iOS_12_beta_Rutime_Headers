/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying> {
    long long  _anchor;
    HDCodableEntityIdentifier * _entityIdentifier;
    struct { 
        unsigned int anchor : 1; 
        unsigned int objectType : 1; 
    }  _has;
    int  _objectType;
}

@property (nonatomic) long long anchor;
@property (nonatomic, retain) HDCodableEntityIdentifier *entityIdentifier;
@property (nonatomic) bool hasAnchor;
@property (nonatomic, readonly) bool hasEntityIdentifier;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) int objectType;

- (void).cxx_destruct;
- (int)StringAsObjectType:(id)arg1;
- (long long)anchor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityIdentifier;
- (bool)hasAnchor;
- (bool)hasEntityIdentifier;
- (bool)hasObjectType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (int)objectType;
- (id)objectTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnchor:(long long)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setHasAnchor:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setObjectType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
