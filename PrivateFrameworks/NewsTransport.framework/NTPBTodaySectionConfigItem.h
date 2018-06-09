/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying> {
    NTPBTodaySectionConfigArticle * _article;
    struct { 
        unsigned int itemType : 1; 
    }  _has;
    int  _itemType;
    NTPBTodaySectionConfigWebEmbed * _webEmbed;
}

@property (nonatomic, retain) NTPBTodaySectionConfigArticle *article;
@property (nonatomic, readonly) bool hasArticle;
@property (nonatomic) bool hasItemType;
@property (nonatomic, readonly) bool hasWebEmbed;
@property (nonatomic) int itemType;
@property (nonatomic, retain) NTPBTodaySectionConfigWebEmbed *webEmbed;

- (id)article;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticle;
- (bool)hasItemType;
- (bool)hasWebEmbed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)itemType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticle:(id)arg1;
- (void)setHasItemType:(bool)arg1;
- (void)setItemType:(int)arg1;
- (void)setWebEmbed:(id)arg1;
- (id)webEmbed;
- (void)writeTo:(id)arg1;

@end
