/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAServiceResponseSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int responseUuid : 1; 
        unsigned int status : 1; 
        unsigned int resultsApplied : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _responseUuid;
    bool  _resultsApplied;
    NSMutableArray * _routeInfos;
    int  _status;
}

@property (nonatomic) bool hasResponseUuid;
@property (nonatomic) bool hasResultsApplied;
@property (nonatomic) bool hasStatus;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } responseUuid;
@property (nonatomic) bool resultsApplied;
@property (nonatomic, retain) NSMutableArray *routeInfos;
@property (nonatomic) int status;

+ (Class)routeInfoType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addRouteInfo:(id)arg1;
- (void)clearRouteInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponseUuid;
- (bool)hasResultsApplied;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })responseUuid;
- (bool)resultsApplied;
- (id)routeInfoAtIndex:(unsigned long long)arg1;
- (id)routeInfos;
- (unsigned long long)routeInfosCount;
- (void)setHasResponseUuid:(bool)arg1;
- (void)setHasResultsApplied:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setResponseUuid:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResultsApplied:(bool)arg1;
- (void)setRouteInfos:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
