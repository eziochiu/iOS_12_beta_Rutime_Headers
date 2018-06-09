/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPSuggestionEntry : PBCodable <NSCopying> {
    NSMutableArray * _displayLines;
    struct { 
        unsigned int serverSearchCompletionEntryIndex : 1; 
        unsigned int serverSearchCompletionSectionIndex : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _serverSearchCompletionEntryIndex;
    unsigned int  _serverSearchCompletionSectionIndex;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *displayLines;
@property (nonatomic) bool hasServerSearchCompletionEntryIndex;
@property (nonatomic) bool hasServerSearchCompletionSectionIndex;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int serverSearchCompletionEntryIndex;
@property (nonatomic) unsigned int serverSearchCompletionSectionIndex;
@property (nonatomic) int type;

+ (Class)displayLineType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addDisplayLine:(id)arg1;
- (void)clearDisplayLines;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (id)displayLines;
- (unsigned long long)displayLinesCount;
- (bool)hasServerSearchCompletionEntryIndex;
- (bool)hasServerSearchCompletionSectionIndex;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverSearchCompletionEntryIndex;
- (unsigned int)serverSearchCompletionSectionIndex;
- (void)setDisplayLines:(id)arg1;
- (void)setHasServerSearchCompletionEntryIndex:(bool)arg1;
- (void)setHasServerSearchCompletionSectionIndex:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setServerSearchCompletionEntryIndex:(unsigned int)arg1;
- (void)setServerSearchCompletionSectionIndex:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
