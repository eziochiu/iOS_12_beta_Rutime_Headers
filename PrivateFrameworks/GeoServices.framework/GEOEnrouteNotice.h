/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEnrouteNotice : PBCodable <NSCopying> {
    NSMutableArray * _guidances;
    struct { 
        unsigned int highlightDistance : 1; 
        unsigned int objectGroupId : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _highlightDistance;
    unsigned int  _objectGroupId;
    NSString * _objectIdentifier;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *guidances;
@property (nonatomic) bool hasHighlightDistance;
@property (nonatomic) bool hasObjectGroupId;
@property (nonatomic, readonly) bool hasObjectIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic) unsigned int objectGroupId;
@property (nonatomic, retain) NSString *objectIdentifier;
@property (nonatomic) int type;

+ (Class)guidanceType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addGuidance:(id)arg1;
- (void)clearGuidances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guidanceAtIndex:(unsigned long long)arg1;
- (id)guidances;
- (unsigned long long)guidancesCount;
- (bool)hasHighlightDistance;
- (bool)hasObjectGroupId;
- (bool)hasObjectIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)highlightDistance;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)objectGroupId;
- (id)objectIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setGuidances:(id)arg1;
- (void)setHasHighlightDistance:(bool)arg1;
- (void)setHasObjectGroupId:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHighlightDistance:(unsigned int)arg1;
- (void)setObjectGroupId:(unsigned int)arg1;
- (void)setObjectIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
