/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentSummary : PBCodable <NSCopying> {
    CKDPCommentedOnId * _identifier;
    CKDPLikeInfo * _likeInfo;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLikeInfo;
@property (nonatomic, retain) CKDPCommentedOnId *identifier;
@property (nonatomic, retain) CKDPLikeInfo *likeInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasLikeInfo;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)likeInfo;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLikeInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end
