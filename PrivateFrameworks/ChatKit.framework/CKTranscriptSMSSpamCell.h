/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell {
    NSAttributedString * _attributedButtonText;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedButtonText;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)setAttributedButtonText:(id)arg1;

@end
