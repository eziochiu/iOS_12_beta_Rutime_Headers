/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBViewArticleRequest : PBRequest <NSCopying> {
    NSString * _feedUri;
    NSString * _storeFrontId;
    NSString * _webPageUri;
}

@property (nonatomic, retain) NSString *feedUri;
@property (nonatomic, readonly) bool hasFeedUri;
@property (nonatomic, readonly) bool hasStoreFrontId;
@property (nonatomic, readonly) bool hasWebPageUri;
@property (nonatomic, retain) NSString *storeFrontId;
@property (nonatomic, retain) NSString *webPageUri;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedUri;
- (bool)hasFeedUri;
- (bool)hasStoreFrontId;
- (bool)hasWebPageUri;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedUri:(id)arg1;
- (void)setStoreFrontId:(id)arg1;
- (void)setWebPageUri:(id)arg1;
- (id)storeFrontId;
- (id)webPageUri;
- (void)writeTo:(id)arg1;

@end