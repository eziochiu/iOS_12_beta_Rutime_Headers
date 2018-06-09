/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFQuickLookDocumentInfoView : UIView {
    NSString * _fileName;
    UILabel * _fileNameLabel;
    NSString * _fileSize;
    UILabel * _fileSizeLabel;
    NSString * _fileType;
    NSLayoutConstraint * _iconHeightConstraint;
    UIImageView * _iconImageView;
    NSLayoutConstraint * _iconWidthConstraint;
    NSLayoutConstraint * _lineHeightBetweenIconAndFileNameLabelConstraint;
    UIView * _spacingView;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSString *fileName;
@property (nonatomic, retain) NSString *fileSize;
@property (nonatomic, retain) NSString *fileType;
@property (nonatomic, retain) UIImageView *iconImageView;

- (void).cxx_destruct;
- (void)_configureOrientationBasedConstraints:(long long)arg1;
- (void)_updateDocumentSizeLabel;
- (void)_updatePropertiesDefinedByContentSizeCategory;
- (id)fileName;
- (id)fileSize;
- (id)fileType;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
