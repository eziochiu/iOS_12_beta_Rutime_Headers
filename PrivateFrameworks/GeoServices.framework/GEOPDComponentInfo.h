/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponentInfo : PBCodable <NSCopying> {
    unsigned int  _count;
    GEOPDComponentFilter * _filter;
    struct { 
        unsigned int count : 1; 
        unsigned int startIndex : 1; 
        unsigned int type : 1; 
        unsigned int urgency : 1; 
        unsigned int includeSource : 1; 
    }  _has;
    bool  _includeSource;
    unsigned int  _startIndex;
    int  _type;
    PBUnknownFields * _unknownFields;
    int  _urgency;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, retain) GEOPDComponentFilter *filter;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasFilter;
@property (nonatomic) bool hasIncludeSource;
@property (nonatomic) bool hasStartIndex;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUrgency;
@property (nonatomic) bool includeSource;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int urgency;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (int)StringAsUrgency:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filter;
- (bool)hasCount;
- (bool)hasFilter;
- (bool)hasIncludeSource;
- (bool)hasStartIndex;
- (bool)hasType;
- (bool)hasUrgency;
- (unsigned long long)hash;
- (bool)includeSource;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setFilter:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasIncludeSource:(bool)arg1;
- (void)setHasStartIndex:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUrgency:(bool)arg1;
- (void)setIncludeSource:(bool)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (void)setUrgency:(int)arg1;
- (unsigned int)startIndex;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (int)urgency;
- (id)urgencyAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
