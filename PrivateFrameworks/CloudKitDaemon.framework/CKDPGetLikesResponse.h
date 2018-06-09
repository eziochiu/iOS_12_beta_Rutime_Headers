/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetLikesResponse : PBCodable <NSCopying> {
    CKDPLikeInfo * _likeInfo;
    NSMutableArray * _likes;
}

@property (nonatomic, readonly) bool hasLikeInfo;
@property (nonatomic, retain) CKDPLikeInfo *likeInfo;
@property (nonatomic, retain) NSMutableArray *likes;

+ (Class)likeType;

- (void).cxx_destruct;
- (void)addLike:(id)arg1;
- (void)clearLikes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLikeInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)likeAtIndex:(unsigned long long)arg1;
- (id)likeInfo;
- (id)likes;
- (unsigned long long)likesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLikeInfo:(id)arg1;
- (void)setLikes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
