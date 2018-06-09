/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSignInstruction : PBCodable <NSCopying> {
    NSMutableArray * _commandFormatteds;
    NSMutableArray * _detailFormatteds;
    NSMutableArray * _noticeFormatteds;
    NSMutableArray * _priceFormatteds;
}

@property (nonatomic, retain) NSMutableArray *commandFormatteds;
@property (nonatomic, retain) NSMutableArray *detailFormatteds;
@property (nonatomic, retain) NSMutableArray *noticeFormatteds;
@property (nonatomic, retain) NSMutableArray *priceFormatteds;

+ (Class)commandFormattedType;
+ (Class)detailFormattedType;
+ (Class)noticeFormattedType;
+ (Class)priceFormattedType;

- (void).cxx_destruct;
- (void)addCommandFormatted:(id)arg1;
- (void)addDetailFormatted:(id)arg1;
- (void)addNoticeFormatted:(id)arg1;
- (void)addPriceFormatted:(id)arg1;
- (void)clearCommandFormatteds;
- (void)clearDetailFormatteds;
- (void)clearNoticeFormatteds;
- (void)clearPriceFormatteds;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;
- (id)commandFormatteds;
- (unsigned long long)commandFormattedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;
- (id)detailFormatteds;
- (unsigned long long)detailFormattedsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;
- (id)noticeFormatteds;
- (unsigned long long)noticeFormattedsCount;
- (id)priceFormattedAtIndex:(unsigned long long)arg1;
- (id)priceFormatteds;
- (unsigned long long)priceFormattedsCount;
- (bool)readFrom:(id)arg1;
- (void)setCommandFormatteds:(id)arg1;
- (void)setDetailFormatteds:(id)arg1;
- (void)setNoticeFormatteds:(id)arg1;
- (void)setPriceFormatteds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
