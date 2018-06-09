/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttribution : PBCodable <NSCopying> {
    NSString * _badge;
    NSString * _badgeChecksum;
    unsigned int  _dataSet;
    struct { 
        unsigned int dataSet : 1; 
    }  _has;
    NSString * _logo;
    NSString * _logoChecksum;
    NSString * _name;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _regions;
    unsigned long long  _regionsCount;
    unsigned long long  _regionsSpace;
    NSMutableArray * _resources;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic, retain) NSString *badge;
@property (nonatomic, retain) NSString *badgeChecksum;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, readonly) bool hasBadge;
@property (nonatomic, readonly) bool hasBadgeChecksum;
@property (nonatomic) bool hasDataSet;
@property (nonatomic, readonly) bool hasLogo;
@property (nonatomic, readonly) bool hasLogoChecksum;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *logo;
@property (nonatomic, retain) NSString *logoChecksum;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*regions;
@property (nonatomic, readonly) unsigned long long regionsCount;
@property (nonatomic, retain) NSMutableArray *resources;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

+ (Class)resourceType;

- (void).cxx_destruct;
- (void)addRegion:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addResource:(id)arg1;
- (id)badge;
- (id)badgeChecksum;
- (void)clearRegions;
- (void)clearResources;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataSet;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBadge;
- (bool)hasBadgeChecksum;
- (bool)hasDataSet;
- (bool)hasLogo;
- (bool)hasLogoChecksum;
- (bool)hasName;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logo;
- (id)logoChecksum;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })regionAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)regions;
- (unsigned long long)regionsCount;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (id)resources;
- (unsigned long long)resourcesCount;
- (void)setBadge:(id)arg1;
- (void)setBadgeChecksum:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setHasDataSet:(bool)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoChecksum:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRegions:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setResources:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
