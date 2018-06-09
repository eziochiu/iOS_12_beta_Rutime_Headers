/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaQuery : PBCodable <NSCopying> {
    int  _entityOrder;
    NSMutableArray * _filterPredicates;
    bool  _filteringDisabled;
    int  _groupingType;
    struct { 
        unsigned int entityOrder : 1; 
        unsigned int groupingType : 1; 
        unsigned int staticEntityType : 1; 
        unsigned int filteringDisabled : 1; 
        unsigned int includeNonLibraryEntities : 1; 
    }  _has;
    bool  _includeNonLibraryEntities;
    NSMutableArray * _staticEntityIdentifiers;
    int  _staticEntityType;
}

@property (nonatomic) int entityOrder;
@property (nonatomic, retain) NSMutableArray *filterPredicates;
@property (nonatomic) bool filteringDisabled;
@property (nonatomic) int groupingType;
@property (nonatomic) bool hasEntityOrder;
@property (nonatomic) bool hasFilteringDisabled;
@property (nonatomic) bool hasGroupingType;
@property (nonatomic) bool hasIncludeNonLibraryEntities;
@property (nonatomic) bool hasStaticEntityType;
@property (nonatomic) bool includeNonLibraryEntities;
@property (nonatomic, retain) NSMutableArray *staticEntityIdentifiers;
@property (nonatomic) int staticEntityType;

+ (Class)filterPredicatesType;
+ (Class)staticEntityIdentifiersType;

- (void).cxx_destruct;
- (int)StringAsEntityOrder:(id)arg1;
- (int)StringAsGroupingType:(id)arg1;
- (int)StringAsStaticEntityType:(id)arg1;
- (void)addFilterPredicates:(id)arg1;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)clearFilterPredicates;
- (void)clearStaticEntityIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)entityOrder;
- (id)entityOrderAsString:(int)arg1;
- (id)filterPredicates;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterPredicatesCount;
- (bool)filteringDisabled;
- (int)groupingType;
- (id)groupingTypeAsString:(int)arg1;
- (bool)hasEntityOrder;
- (bool)hasFilteringDisabled;
- (bool)hasGroupingType;
- (bool)hasIncludeNonLibraryEntities;
- (bool)hasStaticEntityType;
- (unsigned long long)hash;
- (bool)includeNonLibraryEntities;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityOrder:(int)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setFilteringDisabled:(bool)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setHasEntityOrder:(bool)arg1;
- (void)setHasFilteringDisabled:(bool)arg1;
- (void)setHasGroupingType:(bool)arg1;
- (void)setHasIncludeNonLibraryEntities:(bool)arg1;
- (void)setHasStaticEntityType:(bool)arg1;
- (void)setIncludeNonLibraryEntities:(bool)arg1;
- (void)setStaticEntityIdentifiers:(id)arg1;
- (void)setStaticEntityType:(int)arg1;
- (id)staticEntityIdentifiers;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)staticEntityIdentifiersCount;
- (int)staticEntityType;
- (id)staticEntityTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
