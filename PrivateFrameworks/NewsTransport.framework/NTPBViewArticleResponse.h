/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBViewArticleResponse : PBCodable <NSCopying> {
    NSString * _articleId;
    NSString * _channelId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSString *channelId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasChannelId;

- (void).cxx_destruct;
- (id)articleId;
- (id)channelId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
