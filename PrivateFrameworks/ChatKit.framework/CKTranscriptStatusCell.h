/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptStatusCell : CKTranscriptLabelCell {
    BOOL  _buttonAlignmentRelativeToContent;
    double  _prevBalloonWidth;
    UIButton * _statusButton;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;
@property (nonatomic) BOOL buttonAlignmentRelativeToContent;
@property (nonatomic) double prevBalloonWidth;
@property (nonatomic, retain) UIButton *statusButton;

+ (id)statusButton;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
+ (void)zoomAnimation:(id /* block */)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedButtonText;
- (BOOL)buttonAlignmentRelativeToContent;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)performRemoval:(id /* block */)arg1;
- (void)prepareForReuse;
- (double)prevBalloonWidth;
- (void)setAttributedButtonText:(id)arg1;
- (void)setButtonAlignmentRelativeToContent:(BOOL)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setPrevBalloonWidth:(double)arg1;
- (void)setStatusButton:(id)arg1;
- (id)statusButton;

@end
