/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying> {
    NSData * _articleRecordData;
    NSData * _sourceChannelRecordData;
}

@property (nonatomic, retain) NSData *articleRecordData;
@property (nonatomic, readonly) bool hasArticleRecordData;
@property (nonatomic, readonly) bool hasSourceChannelRecordData;
@property (nonatomic, retain) NSData *sourceChannelRecordData;

- (void).cxx_destruct;
- (id)articleRecordData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleRecordData;
- (bool)hasSourceChannelRecordData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleRecordData:(id)arg1;
- (void)setSourceChannelRecordData:(id)arg1;
- (id)sourceChannelRecordData;
- (void)writeTo:(id)arg1;

@end
