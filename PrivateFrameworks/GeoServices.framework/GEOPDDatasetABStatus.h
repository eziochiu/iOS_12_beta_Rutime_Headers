/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDatasetABStatus : PBCodable <NSCopying> {
    unsigned int  _datasetId;
    struct { 
        unsigned int datasetId : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int datasetId;
@property (nonatomic) bool hasDatasetId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)datasetId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatasetId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDatasetId:(unsigned int)arg1;
- (void)setHasDatasetId:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
