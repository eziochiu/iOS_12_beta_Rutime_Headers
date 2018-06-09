/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int requestLocalTimestamp : 1; 
        unsigned int maxResults : 1; 
    }  _has;
    unsigned int  _maxResults;
    double  _requestLocalTimestamp;
    NSMutableArray * _suggestionEntryMetadatas;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool hasRequestLocalTimestamp;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) unsigned int maxResults;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic, retain) NSMutableArray *suggestionEntryMetadatas;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

+ (Class)suggestionEntryMetadataType;

- (void).cxx_destruct;
- (void)addSuggestionEntryMetadata:(id)arg1;
- (void)clearSuggestionEntryMetadatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxResults;
- (bool)hasRequestLocalTimestamp;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)requestLocalTimestamp;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasRequestLocalTimestamp:(bool)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRequestLocalTimestamp:(double)arg1;
- (void)setSuggestionEntryMetadatas:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1;
- (id)suggestionEntryMetadatas;
- (unsigned long long)suggestionEntryMetadatasCount;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end
