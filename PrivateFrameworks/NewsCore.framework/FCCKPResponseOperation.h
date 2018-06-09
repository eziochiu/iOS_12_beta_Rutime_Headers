/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPResponseOperation : PBCodable <NSCopying> {
    struct { 
        unsigned int operationCost : 1; 
    }  _has;
    unsigned int  _operationCost;
    FCCKPQueryRetrieveResponse * _queryRetrieveResponse;
    FCCKPRecordRetrieveResponse * _recordRetrieveResponse;
    FCCKPOperation * _response;
    FCCKPResponseOperationResult * _result;
}

@property (nonatomic) bool hasOperationCost;
@property (nonatomic, readonly) bool hasQueryRetrieveResponse;
@property (nonatomic, readonly) bool hasRecordRetrieveResponse;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, readonly) bool hasResult;
@property (nonatomic) unsigned int operationCost;
@property (nonatomic, retain) FCCKPQueryRetrieveResponse *queryRetrieveResponse;
@property (nonatomic, retain) FCCKPRecordRetrieveResponse *recordRetrieveResponse;
@property (nonatomic, retain) FCCKPOperation *response;
@property (nonatomic, retain) FCCKPResponseOperationResult *result;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOperationCost;
- (bool)hasQueryRetrieveResponse;
- (bool)hasRecordRetrieveResponse;
- (bool)hasResponse;
- (bool)hasResult;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)operationCost;
- (id)queryRetrieveResponse;
- (bool)readFrom:(id)arg1;
- (id)recordRetrieveResponse;
- (id)response;
- (id)result;
- (void)setHasOperationCost:(bool)arg1;
- (void)setOperationCost:(unsigned int)arg1;
- (void)setQueryRetrieveResponse:(id)arg1;
- (void)setRecordRetrieveResponse:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResult:(id)arg1;
- (void)writeTo:(id)arg1;

@end
