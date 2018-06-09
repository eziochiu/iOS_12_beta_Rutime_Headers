/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPSuggestionList : PBCodable <NSCopying> {
    GEOPDPlaceRequest * _autocompleteRequest;
    GEOPDPlaceResponse * _autocompleteResponse;
    NSMutableArray * _entrys;
    NSString * _query;
}

@property (nonatomic, retain) GEOPDPlaceRequest *autocompleteRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *autocompleteResponse;
@property (nonatomic, retain) NSMutableArray *entrys;
@property (nonatomic, readonly) bool hasAutocompleteRequest;
@property (nonatomic, readonly) bool hasAutocompleteResponse;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, retain) NSString *query;

+ (Class)entryType;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (id)autocompleteRequest;
- (id)autocompleteResponse;
- (void)clearEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)entrys;
- (unsigned long long)entrysCount;
- (bool)hasAutocompleteRequest;
- (bool)hasAutocompleteResponse;
- (bool)hasQuery;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteRequest:(id)arg1;
- (void)setAutocompleteResponse:(id)arg1;
- (void)setEntrys:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)writeTo:(id)arg1;

@end
