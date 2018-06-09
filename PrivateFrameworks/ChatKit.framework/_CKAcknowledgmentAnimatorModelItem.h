/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface _CKAcknowledgmentAnimatorModelItem : NSObject {
    long long  _ackVoteCount;
    long long  _acknowledgmentType;
    CKEntity * _entity;
    NSIndexPath * _indexPath;
}

@property (nonatomic) long long ackVoteCount;
@property (nonatomic) long long acknowledgmentType;
@property (nonatomic, retain) CKEntity *entity;
@property (nonatomic, retain) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (long long)ackVoteCount;
- (long long)acknowledgmentType;
- (id)entity;
- (id)indexPath;
- (void)setAckVoteCount:(long long)arg1;
- (void)setAcknowledgmentType:(long long)arg1;
- (void)setEntity:(id)arg1;
- (void)setIndexPath:(id)arg1;

@end
