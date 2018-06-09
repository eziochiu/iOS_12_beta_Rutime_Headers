/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPQueryRetrieveResponse : PBCodable <NSCopying> {
    NSData * _continuationMarker;
    NSMutableArray * _queryResults;
}

@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) bool hasContinuationMarker;
@property (nonatomic, retain) NSMutableArray *queryResults;

- (void)addQueryResults:(id)arg1;
- (void)clearQueryResults;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryResults;
- (id)queryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setContinuationMarker:(id)arg1;
- (void)setQueryResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
