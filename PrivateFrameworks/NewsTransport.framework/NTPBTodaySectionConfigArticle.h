/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodaySectionConfigArticle : PBCodable <FCHeadlineMetadata, NSCopying> {
    NSString * _articleID;
    NSString * _displayDateString;
    NSString * _storyType;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, retain) NSString *displayDateString;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasDisplayDateString;
@property (nonatomic, readonly) bool hasStoryType;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, retain) NSString *storyType;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayDateString;
- (bool)hasArticleID;
- (bool)hasDisplayDateString;
- (bool)hasStoryType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setDisplayDateString:(id)arg1;
- (void)setStoryType:(id)arg1;
- (id)storyType;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)displayDate;

@end
