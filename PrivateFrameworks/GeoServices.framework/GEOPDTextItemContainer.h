/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTextItemContainer : PBCodable <NSCopying> {
    GEOPDTextItemDisplayConfig * _displayConf;
    NSMutableArray * _textItems;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDTextItemDisplayConfig *displayConf;
@property (nonatomic, readonly) bool hasDisplayConf;
@property (nonatomic, retain) NSMutableArray *textItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)textItemType;

- (void).cxx_destruct;
- (void)addTextItem:(id)arg1;
- (void)clearTextItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayConf;
- (bool)hasDisplayConf;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayConf:(id)arg1;
- (void)setTextItems:(id)arg1;
- (id)textItemAtIndex:(unsigned long long)arg1;
- (id)textItems;
- (unsigned long long)textItemsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
