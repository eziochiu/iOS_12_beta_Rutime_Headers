/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleViewWatch : PBCodable <NSCopying> {
    int  _articleHostViewTypeWatch;
    NSString * _articleId;
    NSString * _articleViewingSessionIdWatch;
    bool  _didScroll;
    struct { 
        unsigned int articleHostViewTypeWatch : 1; 
        unsigned int didScroll : 1; 
    }  _has;
    NSString * _sourceChannelId;
}

@property (nonatomic) int articleHostViewTypeWatch;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSString *articleViewingSessionIdWatch;
@property (nonatomic) bool didScroll;
@property (nonatomic) bool hasArticleHostViewTypeWatch;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionIdWatch;
@property (nonatomic) bool hasDidScroll;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (int)articleHostViewTypeWatch;
- (id)articleId;
- (id)articleViewingSessionIdWatch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didScroll;
- (bool)hasArticleHostViewTypeWatch;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionIdWatch;
- (bool)hasDidScroll;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleHostViewTypeWatch:(int)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionIdWatch:(id)arg1;
- (void)setDidScroll:(bool)arg1;
- (void)setHasArticleHostViewTypeWatch:(bool)arg1;
- (void)setHasDidScroll:(bool)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end
