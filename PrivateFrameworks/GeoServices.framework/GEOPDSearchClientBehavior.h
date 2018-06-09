/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchClientBehavior : PBCodable <NSCopying> {
    struct { 
        unsigned int shouldEnableRedoSearch : 1; 
    }  _has;
    bool  _shouldEnableRedoSearch;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasShouldEnableRedoSearch;
@property (nonatomic) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShouldEnableRedoSearch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasShouldEnableRedoSearch:(bool)arg1;
- (void)setShouldEnableRedoSearch:(bool)arg1;
- (bool)shouldEnableRedoSearch;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
