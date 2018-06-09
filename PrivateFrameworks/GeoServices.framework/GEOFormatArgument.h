/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying> {
    GEOPBTransitArtwork * _artwork;
    int  _format;
    struct { 
        unsigned int format : 1; 
        unsigned int valInt1 : 1; 
        unsigned int valInt2 : 1; 
    }  _has;
    GEOPrice * _price;
    NSMutableArray * _timestampDatas;
    NSString * _token;
    unsigned int  _valInt1;
    unsigned int  _valInt2;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _valInt3s;
    NSString * _valString;
}

@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artworkValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int format;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic) bool hasFormat;
@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) bool hasValInt1;
@property (nonatomic) bool hasValInt2;
@property (nonatomic, readonly) bool hasValString;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPrice *price;
@property (nonatomic, readonly) <GEOServerFormatTokenPriceValue> *priceValue;
@property (nonatomic, readonly) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timeStampValues;
@property (nonatomic, retain) NSMutableArray *timestampDatas;
@property (nonatomic, readonly) NSString *token;
@property (nonatomic, retain) NSString *token;
@property (nonatomic, readonly) long long type;
@property (nonatomic) unsigned int valInt1;
@property (nonatomic) unsigned int valInt2;
@property (nonatomic, readonly) unsigned int*valInt3s;
@property (nonatomic, readonly) unsigned long long valInt3sCount;
@property (nonatomic, retain) NSString *valString;
@property (nonatomic, readonly) unsigned int value1;
@property (nonatomic, readonly) unsigned int value2;
@property (nonatomic, readonly) NSArray *value3s;

+ (Class)timestampDataType;

- (void).cxx_destruct;
- (int)StringAsFormat:(id)arg1;
- (void)addTimestampData:(id)arg1;
- (void)addValInt3:(unsigned int)arg1;
- (id)artwork;
- (id)artworkValue;
- (void)clearTimestampDatas;
- (void)clearValInt3s;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)format;
- (id)formatAsString:(int)arg1;
- (bool)hasArtwork;
- (bool)hasFormat;
- (bool)hasPrice;
- (bool)hasToken;
- (bool)hasValInt1;
- (bool)hasValInt2;
- (bool)hasValString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)price;
- (id)priceValue;
- (bool)readFrom:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setHasFormat:(bool)arg1;
- (void)setHasValInt1:(bool)arg1;
- (void)setHasValInt2:(bool)arg1;
- (void)setPrice:(id)arg1;
- (void)setTimestampDatas:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setValInt1:(unsigned int)arg1;
- (void)setValInt2:(unsigned int)arg1;
- (void)setValInt3s:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setValString:(id)arg1;
- (id)stringValue;
- (id)timeStampValues;
- (id)timestampDataAtIndex:(unsigned long long)arg1;
- (id)timestampDatas;
- (unsigned long long)timestampDatasCount;
- (id)token;
- (long long)type;
- (unsigned int)valInt1;
- (unsigned int)valInt2;
- (unsigned int)valInt3AtIndex:(unsigned long long)arg1;
- (unsigned int*)valInt3s;
- (unsigned long long)valInt3sCount;
- (id)valString;
- (unsigned int)value1;
- (unsigned int)value2;
- (id)value3s;
- (void)writeTo:(id)arg1;

@end
