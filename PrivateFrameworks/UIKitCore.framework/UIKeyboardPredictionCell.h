/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardPredictionCell : UIView {
    bool  _active;
    long long  _candidateType;
    bool  _isAutocorrection;
    bool  _isEmoji;
    bool  _isLongCandidate;
    bool  _isTypedString;
    UIView * _leftSeperatorView;
    TIKeyboardCandidate * _prediction;
    UIView * _rightSeperatorView;
    unsigned int  _slotID;
    UIView * m_activeView;
    UIMorphingLabel * m_label;
    bool  m_lightKeyboard;
    UIView * m_maskView;
    double  m_maskViewMargin;
    UILabel * m_suggestionLabel;
}

@property (nonatomic) bool active;
@property (nonatomic) long long candidateType;
@property (nonatomic) bool isAutocorrection;
@property (nonatomic) bool isEmoji;
@property (nonatomic) bool isLongCandidate;
@property (nonatomic) bool isTypedString;
@property (nonatomic, retain) UIView *leftSeperatorView;
@property (nonatomic, readonly, retain) TIKeyboardCandidate *prediction;
@property (nonatomic, retain) UIView *rightSeperatorView;
@property (nonatomic) unsigned int slotID;

+ (double)fontSizeForSingleLineLayout;

- (bool)active;
- (long long)candidateType;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAutocorrection;
- (bool)isEmoji;
- (bool)isLongCandidate;
- (bool)isTypedString;
- (id)label;
- (id)leftSeperatorView;
- (bool)needsUpdateForRenderConfig:(id)arg1;
- (id)prediction;
- (id)rightSeperatorView;
- (void)scrollLabelWithText:(id)arg1 force:(bool)arg2;
- (void)setActive:(bool)arg1;
- (void)setActive:(bool)arg1 withAttrText:(id)arg2;
- (void)setActive:(bool)arg1 withText:(id)arg2;
- (void)setCandidateType:(long long)arg1;
- (void)setCellAttributes;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsAutocorrection:(bool)arg1;
- (void)setIsEmoji:(bool)arg1;
- (void)setIsLongCandidate:(bool)arg1;
- (void)setIsTypedString:(bool)arg1;
- (void)setLeftSeperatorView:(id)arg1;
- (void)setRightSeperatorView:(id)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(bool)arg3 isEmoji:(bool)arg4;
- (void)setVisibleRect;
- (bool)shouldDisplayAsSuggestion:(id)arg1;
- (bool)shouldDisplayHeaderForPrediction:(id)arg1;
- (unsigned int)slotID;
- (id)textColor;
- (void)touchMoved:(double)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
