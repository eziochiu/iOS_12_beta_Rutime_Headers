/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedEngagementMenuExposure : PBCodable <NSCopying> {
    NSString * _articleId;
    NSString * _feedId;
    int  _feedMenuType;
    int  _feedType;
    struct { 
        unsigned int feedMenuType : 1; 
        unsigned int feedType : 1; 
    }  _has;
    NSString * _referencedArticleId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedMenuType;
@property (nonatomic) int feedType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedMenuType;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic, retain) NSString *referencedArticleId;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedMenuType;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (bool)hasArticleId;
- (bool)hasFeedId;
- (bool)hasFeedMenuType;
- (bool)hasFeedType;
- (bool)hasReferencedArticleId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (void)setArticleId:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedMenuType:(int)arg1;
- (void)setFeedType:(int)arg1;
- (void)setHasFeedMenuType:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
