/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int maxItemsPerRow : 1; 
        unsigned int maxRowCount : 1; 
    }  _has;
    unsigned int  _maxItemsPerRow;
    unsigned int  _maxRowCount;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaxItemsPerRow;
@property (nonatomic) bool hasMaxRowCount;
@property (nonatomic) unsigned int maxItemsPerRow;
@property (nonatomic) unsigned int maxRowCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxItemsPerRow;
- (bool)hasMaxRowCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxItemsPerRow;
- (unsigned int)maxRowCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxItemsPerRow:(bool)arg1;
- (void)setHasMaxRowCount:(bool)arg1;
- (void)setMaxItemsPerRow:(unsigned int)arg1;
- (void)setMaxRowCount:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
