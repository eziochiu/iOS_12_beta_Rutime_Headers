/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateGridCell : UICollectionViewCell {
    NSString * _alternativeText;
    UILabel * _alternativeTextLabel;
    UILabel * _annotationLabel;
    NSString * _annotationText;
    unsigned long long  _candidateNumber;
    UILabel * _candidateNumberLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _candidateNumberSize;
    int  _candidatesVisualStyle;
    double  _cellPadding;
    bool  _dummy;
    unsigned long long  _edges;
    bool  _emphasizedAppearance;
    bool  _facemarkCategoryAppearance;
    double  _minimumWidth;
    bool  _needsUpdateLabels;
    double  _rightPadding;
    double  _rowHeight;
    bool  _secondaryCandidateAppearance;
    bool  _shouldShowCandidateNumber;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _text;
    long long  _textAlignment;
    UILabel * _textLabel;
    bool  _usesGroupHeaderAppearance;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, copy) NSString *alternativeText;
@property (nonatomic, retain) UILabel *alternativeTextLabel;
@property (nonatomic, retain) UILabel *annotationLabel;
@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic, readonly) bool canShowCandidateNumber;
@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic, retain) UILabel *candidateNumberLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } candidateNumberSize;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic) double cellPadding;
@property (nonatomic) bool dummy;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) bool emphasizedAppearance;
@property (nonatomic) bool facemarkCategoryAppearance;
@property (nonatomic) double minimumWidth;
@property (nonatomic) bool needsUpdateLabels;
@property (nonatomic) double rightPadding;
@property (nonatomic) double rowHeight;
@property (nonatomic) bool secondaryCandidateAppearance;
@property (nonatomic, retain) id secureContents;
@property (nonatomic) bool shouldShowCandidateNumber;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) bool usesGroupHeaderAppearance;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

+ (bool)drawsSideBorders;
+ (struct CGColor { }*)legacy_outlineColorForVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1 candidatesVisualStyle:(int)arg2;
+ (struct CGColor { }*)legacy_outlineShadowColorForVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1 candidatesVisualStyle:(int)arg2;
+ (id)reuseIdentifier;
+ (double)rightPaddingForIndex;
+ (bool)shouldShowImageForGroupTitle:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;
+ (double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3;

- (void).cxx_destruct;
- (id)alternativeText;
- (id)alternativeTextLabel;
- (id)annotationLabel;
- (id)annotationText;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)canShowCandidateNumber;
- (unsigned long long)candidateNumber;
- (id)candidateNumberLabel;
- (struct CGSize { double x1; double x2; })candidateNumberSize;
- (int)candidatesVisualStyle;
- (double)cellPadding;
- (void)drawBackgroundAndBorders;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)dummy;
- (unsigned long long)edges;
- (bool)emphasizedAppearance;
- (bool)facemarkCategoryAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)minimumWidth;
- (bool)needsUpdateLabels;
- (void)prepareForReuse;
- (double)rightPadding;
- (double)rowHeight;
- (bool)secondaryCandidateAppearance;
- (id)secureContents;
- (void)setAlternativeText:(id)arg1;
- (void)setAlternativeTextLabel:(id)arg1;
- (void)setAnnotationLabel:(id)arg1;
- (void)setAnnotationText:(id)arg1;
- (void)setCandidateNumber:(unsigned long long)arg1;
- (void)setCandidateNumberLabel:(id)arg1;
- (void)setCandidateNumberSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setCellPadding:(double)arg1;
- (void)setDummy:(bool)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setEmphasizedAppearance:(bool)arg1;
- (void)setFacemarkCategoryAppearance:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setNeedsUpdateLabels:(bool)arg1;
- (void)setRightPadding:(double)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSecondaryCandidateAppearance:(bool)arg1;
- (void)setSecureContents:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShouldShowCandidateNumber:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setUsesGroupHeaderAppearance:(bool)arg1;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (bool)shouldShowCandidateNumber;
- (struct CGSize { double x1; double x2; })size;
- (id)text;
- (long long)textAlignment;
- (id)textLabel;
- (void)updateGroupHeaderLabelPosition;
- (void)updateLabelColors;
- (void)updateLabels;
- (bool)usesGroupHeaderAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

@end
