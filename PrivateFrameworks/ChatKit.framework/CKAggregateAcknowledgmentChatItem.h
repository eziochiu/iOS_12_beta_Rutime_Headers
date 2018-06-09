/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem {
    long long  _latestAcknowledgmentType;
}

@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly, copy) NSString *acknowledgmentImageName;
@property (nonatomic, readonly, copy) NSArray *acknowledgments;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (readonly) Class balloonViewClass;
@property (nonatomic, readonly) bool includesFromMe;
@property (nonatomic, readonly) bool includesMultiple;
@property (nonatomic, readonly) long long latestAcknowledgmentType;
@property (nonatomic, readonly) bool latestIsFromMe;

- (id)_imAggregateAcknowledgmentChatItem;
- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (id)acknowledgments;
- (id)associatedChatItemGUID;
- (BOOL)balloonOrientation;
- (Class)balloonViewClass;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)includesFromMe;
- (bool)includesMultiple;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isEqual:(id)arg1;
- (long long)latestAcknowledgmentType;
- (bool)latestIsFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (BOOL)transcriptOrientation;

@end
