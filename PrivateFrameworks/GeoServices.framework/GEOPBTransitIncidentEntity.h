/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {
    unsigned long long  _affectedMuid;
    GEOPBTransitIncidentEntityFilter * _filter;
    struct { 
        unsigned int affectedMuid : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long affectedMuid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOPBTransitIncidentEntityFilter *filter;
@property (nonatomic) bool hasAffectedMuid;
@property (nonatomic, readonly) bool hasFilter;
@property (nonatomic, readonly) bool hasNextStopIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned long long)affectedMuid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filter;
- (bool)hasAffectedMuid;
- (bool)hasFilter;
- (bool)hasNextStopIDs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nextStopIDs;
- (bool)readFrom:(id)arg1;
- (void)setAffectedMuid:(unsigned long long)arg1;
- (void)setFilter:(id)arg1;
- (void)setHasAffectedMuid:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
