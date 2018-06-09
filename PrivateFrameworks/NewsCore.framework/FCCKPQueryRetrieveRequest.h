/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying> {
    NSData * _continuationMarker;
    struct { 
        unsigned int limit : 1; 
    }  _has;
    unsigned int  _limit;
    FCCKPQuery * _query;
    FCCKPRequestedFields * _requestedFields;
    FCCKPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) bool hasContinuationMarker;
@property (nonatomic) bool hasLimit;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasRequestedFields;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic) unsigned int limit;
@property (nonatomic, retain) FCCKPQuery *query;
@property (nonatomic, retain) FCCKPRequestedFields *requestedFields;
@property (nonatomic, retain) FCCKPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (bool)hasLimit;
- (bool)hasQuery;
- (bool)hasRequestedFields;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)requestedFields;
- (Class)responseClass;
- (void)setContinuationMarker:(id)arg1;
- (void)setHasLimit:(bool)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
