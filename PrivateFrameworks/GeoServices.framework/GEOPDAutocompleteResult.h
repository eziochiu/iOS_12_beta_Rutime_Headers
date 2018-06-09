/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {
    bool  _enableRap;
    struct { 
        unsigned int retainSearchTime : 1; 
        unsigned int enableRap : 1; 
        unsigned int shouldDisplayNoResults : 1; 
    }  _has;
    unsigned int  _retainSearchTime;
    NSMutableArray * _sections;
    bool  _shouldDisplayNoResults;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool enableRap;
@property (nonatomic) bool hasEnableRap;
@property (nonatomic) bool hasRetainSearchTime;
@property (nonatomic) bool hasShouldDisplayNoResults;
@property (nonatomic) unsigned int retainSearchTime;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic) bool shouldDisplayNoResults;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)sectionsType;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableRap;
- (bool)hasEnableRap;
- (bool)hasRetainSearchTime;
- (bool)hasShouldDisplayNoResults;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retainSearchTime;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setEnableRap:(bool)arg1;
- (void)setHasEnableRap:(bool)arg1;
- (void)setHasRetainSearchTime:(bool)arg1;
- (void)setHasShouldDisplayNoResults:(bool)arg1;
- (void)setRetainSearchTime:(unsigned int)arg1;
- (void)setSections:(id)arg1;
- (void)setShouldDisplayNoResults:(bool)arg1;
- (bool)shouldDisplayNoResults;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
