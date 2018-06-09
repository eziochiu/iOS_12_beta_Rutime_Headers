/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment> {
    long long  _messageAcknowledgmentType;
}

@property (nonatomic, readonly) UIColor *acknowledgmentImageColor;
@property (nonatomic, readonly) NSString *acknowledgmentImageName;
@property (nonatomic, readonly) BOOL balloonColorType;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (nonatomic, readonly) UIColor *selectedAcknowledgmentImageColor;
@property (nonatomic, readonly) UIColor *selectedBalloonColor;
@property (nonatomic, readonly) IMHandle *sender;
@property (readonly) Class superclass;

- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (BOOL)balloonColorType;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; bool x7; bool x8; bool x9; })balloonDescriptor;
- (BOOL)balloonOrientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)messageAcknowledgmentChatItem;
- (long long)messageAcknowledgmentType;
- (id)selectedAcknowledgmentImageColor;
- (id)selectedBalloonColor;
- (id)sender;
- (long long)themeColor;
- (long long)themeStyle;
- (BOOL)transcriptOrientation;
- (bool)wantsDrawerLayout;

@end
