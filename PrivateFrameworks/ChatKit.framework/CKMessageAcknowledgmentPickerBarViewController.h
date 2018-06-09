/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate> {
    CKMessagePartChatItem * _chatItem;
    <CKMessageAcknowledgmentPickerBarDelegate> * _delegate;
}

@property (nonatomic, retain) CKMessagePartChatItem *chatItem;
@property (nonatomic) <CKMessageAcknowledgmentPickerBarDelegate> *delegate;

- (void).cxx_destruct;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateFrameRelativeToSiblingViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withinBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)chatItem;
- (id)delegate;
- (id)initWithChatItem:(id)arg1;
- (void)loadView;
- (void)performCancelAnimation:(id /* block */)arg1;
- (void)performSendAnimation:(id /* block */)arg1;
- (void)performShowAnimation:(id /* block */)arg1;
- (void)pickerBarItemViewSelectionDidChange:(id)arg1;
- (id)pickerView;
- (void)setChatItem:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
