/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapMatchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int matchingStatus : 1; 
        unsigned int status : 1; 
    }  _has;
    int  _matchingStatus;
    int  _status;
    NSData * _zilchPoints;
}

@property (nonatomic) bool hasMatchingStatus;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic) int matchingStatus;
@property (nonatomic) int status;
@property (nonatomic, retain) NSData *zilchPoints;

- (void).cxx_destruct;
- (int)StringAsMatchingStatus:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMatchingStatus;
- (bool)hasStatus;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)matchingStatus;
- (id)matchingStatusAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMatchingStatus:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setMatchingStatus:(int)arg1;
- (void)setStatus:(int)arg1;
- (void)setZilchPoints:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
