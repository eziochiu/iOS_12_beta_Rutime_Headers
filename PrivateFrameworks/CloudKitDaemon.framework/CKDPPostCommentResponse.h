/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPostCommentResponse : PBCodable <NSCopying> {
    CKDPIdentifier * _commentId;
}

@property (nonatomic, retain) CKDPIdentifier *commentId;
@property (nonatomic, readonly) bool hasCommentId;

- (void).cxx_destruct;
- (id)commentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCommentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommentId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
