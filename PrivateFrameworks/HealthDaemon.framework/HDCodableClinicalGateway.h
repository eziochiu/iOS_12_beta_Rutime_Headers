/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableClinicalGateway : PBCodable <NSCopying> {
    NSData * _rawContent;
}

@property (nonatomic, readonly) bool hasRawContent;
@property (nonatomic, retain) NSData *rawContent;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRawContent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rawContent;
- (bool)readFrom:(id)arg1;
- (void)setRawContent:(id)arg1;
- (void)writeTo:(id)arg1;

@end
