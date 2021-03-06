/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _logMessages;
}

@property (nonatomic, retain) NSMutableArray *logMessages;

+ (Class)logMessageType;

- (void).cxx_destruct;
- (void)addLogMessage:(id)arg1;
- (void)clearLogMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logMessageAtIndex:(unsigned long long)arg1;
- (id)logMessages;
- (unsigned long long)logMessagesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setLogMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
