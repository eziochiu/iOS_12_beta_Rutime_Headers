/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPaidSubscriptionSheetIapFail : PBCodable <NSCopying> {
    NSString * _articleId;
    NSString * _failedIapId;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSString *failedIapId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasFailedIapId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)failedIapId;
- (bool)hasArticleId;
- (bool)hasFailedIapId;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setFailedIapId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end
