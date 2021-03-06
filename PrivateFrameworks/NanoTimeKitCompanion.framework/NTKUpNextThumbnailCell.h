/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell {
    CLKFont * _boldFont;
    NTKColoringLabel * _descriptionLine1Label;
    NTKColoringLabel * _descriptionLine2Label;
    NTKColoringLabel * _descriptionLine3Label;
    NTKColoringLabel * _headerLabel;
    UILayoutGuide * _imageLayoutGuide;
    NSLayoutConstraint * _imageLayoutGuideHeightConstraint;
    NSLayoutConstraint * _imageLayoutGuideWidthConstraint;
    UIImageView * _imageView;
    CLKFont * _italicFont;
    UILayoutGuide * _labelLayoutGuide;
    bool  _showingHeader;
    bool  _showingSmallThumbnail;
    bool  _showingThirdLine;
    CLKFont * _standardFont;
    NSArray * _withDescription2Constraints;
    NSArray * _withDescription3Constraints;
    NSArray * _withHeaderConstraints;
    NSArray * _withoutDescription2Constraints;
    NSArray * _withoutDescription3Constraints;
    NSArray * _withoutHeaderConstraints;
}

+ (struct CGSize { double x1; double x2; })suggestedBodyImageSize;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateConstraints;

@end
