/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVectorTileRequest : PBRequest <NSCopying> {
    NSString * _accessKey;
    NSString * _countryCode;
    struct { 
        unsigned int lineId : 1; 
        unsigned int latitudeHint : 1; 
        unsigned int longitudeHint : 1; 
        unsigned int scale : 1; 
        unsigned int size : 1; 
        unsigned int style : 1; 
        unsigned int version : 1; 
        unsigned int x : 1; 
        unsigned int y : 1; 
        unsigned int z : 1; 
        unsigned int preflight : 1; 
    }  _has;
    NSString * _languageCode;
    float  _latitudeHint;
    unsigned long long  _lineId;
    float  _longitudeHint;
    bool  _preflight;
    unsigned int  _scale;
    unsigned int  _size;
    unsigned int  _style;
    unsigned int  _version;
    unsigned int  _x;
    unsigned int  _y;
    unsigned int  _z;
}

@property (nonatomic, retain) NSString *accessKey;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasAccessKey;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic) bool hasLatitudeHint;
@property (nonatomic) bool hasLineId;
@property (nonatomic) bool hasLongitudeHint;
@property (nonatomic) bool hasPreflight;
@property (nonatomic) bool hasScale;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool hasStyle;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) bool hasZ;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) float latitudeHint;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic) float longitudeHint;
@property (nonatomic) bool preflight;
@property (nonatomic) unsigned int scale;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;

- (void).cxx_destruct;
- (id)accessKey;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessKey;
- (bool)hasCountryCode;
- (bool)hasLanguageCode;
- (bool)hasLatitudeHint;
- (bool)hasLineId;
- (bool)hasLongitudeHint;
- (bool)hasPreflight;
- (bool)hasScale;
- (bool)hasSize;
- (bool)hasStyle;
- (bool)hasVersion;
- (bool)hasX;
- (bool)hasY;
- (bool)hasZ;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (float)latitudeHint;
- (unsigned long long)lineId;
- (float)longitudeHint;
- (void)mergeFrom:(id)arg1;
- (bool)preflight;
- (bool)readFrom:(id)arg1;
- (unsigned int)scale;
- (void)setAccessKey:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setHasLatitudeHint:(bool)arg1;
- (void)setHasLineId:(bool)arg1;
- (void)setHasLongitudeHint:(bool)arg1;
- (void)setHasPreflight:(bool)arg1;
- (void)setHasScale:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setHasZ:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLatitudeHint:(float)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)setLongitudeHint:(float)arg1;
- (void)setPreflight:(bool)arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setX:(unsigned int)arg1;
- (void)setY:(unsigned int)arg1;
- (void)setZ:(unsigned int)arg1;
- (unsigned int)size;
- (unsigned int)style;
- (unsigned int)version;
- (void)writeTo:(id)arg1;
- (unsigned int)x;
- (unsigned int)y;
- (unsigned int)z;

@end
