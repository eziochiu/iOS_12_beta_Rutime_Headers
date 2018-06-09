/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPREvent : PBCodable <NSCopying> {
    double  _creationDate;
    double  _endDate;
    struct { 
        unsigned int creationDate : 1; 
    }  _has;
    NSString * _identifier;
    NSMutableArray * _metadatas;
    _DKPRSource * _source;
    double  _startDate;
    _DKPRStream * _stream;
    _DKPRValue * _value;
}

@property (nonatomic) double creationDate;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *metadatas;
@property (nonatomic, retain) _DKPRSource *source;
@property (nonatomic) double startDate;
@property (nonatomic, retain) _DKPRStream *stream;
@property (nonatomic, retain) _DKPRValue *value;

+ (Class)metadataType;

- (void).cxx_destruct;
- (void)addMetadata:(id)arg1;
- (void)clearMetadatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasCreationDate;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataAtIndex:(unsigned long long)arg1;
- (id)metadatas;
- (unsigned long long)metadatasCount;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetadatas:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setStartDate:(double)arg1;
- (void)setStream:(id)arg1;
- (void)setValue:(id)arg1;
- (id)source;
- (double)startDate;
- (id)stream;
- (id)value;
- (void)writeTo:(id)arg1;

@end
