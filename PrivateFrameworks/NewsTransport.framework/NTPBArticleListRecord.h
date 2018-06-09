/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleListRecord : PBCodable <NSCopying> {
    NSMutableArray * _articleIDs;
    NTPBRecordBase * _base;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _metadata;
    int  _type;
}

@property (nonatomic, retain) NSMutableArray *articleIDs;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic) int type;

+ (Class)articleIDsType;

- (void)addArticleIDs:(id)arg1;
- (id)articleIDs;
- (id)articleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIDsCount;
- (id)base;
- (void)clearArticleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBase;
- (bool)hasMetadata;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setArticleIDs:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
