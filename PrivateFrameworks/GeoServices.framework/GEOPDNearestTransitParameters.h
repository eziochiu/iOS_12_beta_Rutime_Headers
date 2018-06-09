/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDNearestTransitParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int lineMuid : 1; 
        unsigned int isTransitOnly : 1; 
    }  _has;
    bool  _isTransitOnly;
    unsigned long long  _lineMuid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsTransitOnly;
@property (nonatomic) bool hasLineMuid;
@property (nonatomic) bool isTransitOnly;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsTransitOnly;
- (bool)hasLineMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTransitOnly;
- (unsigned long long)lineMuid;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTransitOnly:(bool)arg1;
- (void)setHasLineMuid:(bool)arg1;
- (void)setIsTransitOnly:(bool)arg1;
- (void)setLineMuid:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
