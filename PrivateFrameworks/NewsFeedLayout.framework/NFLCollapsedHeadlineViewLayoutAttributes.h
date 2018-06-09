/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLCollapsedHeadlineViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _publisherLogoFrame;
    UIColor * _publisherTextColor;
    UIFont * _publisherTextFont;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _publisherTextFrame;
    long long  _publisherTextNumberOfLines;
    NSParagraphStyle * _publisherTextParagraphStyle;
    UIFont * _titleFont;
    NSString * _titleFontName;
    double  _titleFontSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleFrame;
    long long  _titleNumberOfLines;
    NSParagraphStyle * _titleParagraphStyle;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } publisherLogoFrame;
@property (nonatomic, copy) UIColor *publisherTextColor;
@property (nonatomic, retain) UIFont *publisherTextFont;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } publisherTextFrame;
@property (nonatomic) long long publisherTextNumberOfLines;
@property (nonatomic, retain) NSParagraphStyle *publisherTextParagraphStyle;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) NSString *titleFontName;
@property (nonatomic) double titleFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleFrame;
@property (nonatomic) long long titleNumberOfLines;
@property (nonatomic, retain) NSParagraphStyle *titleParagraphStyle;

+ (id)layoutAttributesForCellWithIndexPath:(id)arg1 feedSettings:(id)arg2;
+ (struct CGSize { double x1; double x2; })publisherLogoSizeFeedSettings:(id)arg1;
+ (double)publisherTextHeightForLabelSize:(struct CGSize { double x1; double x2; })arg1 font:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })publisherLogoFrame;
- (id)publisherTextColor;
- (id)publisherTextFont;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })publisherTextFrame;
- (long long)publisherTextNumberOfLines;
- (id)publisherTextParagraphStyle;
- (void)setPublisherLogoFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPublisherTextColor:(id)arg1;
- (void)setPublisherTextFont:(id)arg1;
- (void)setPublisherTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPublisherTextNumberOfLines:(long long)arg1;
- (void)setPublisherTextParagraphStyle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleFontName:(id)arg1;
- (void)setTitleFontSize:(double)arg1;
- (void)setTitleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleNumberOfLines:(long long)arg1;
- (void)setTitleParagraphStyle:(id)arg1;
- (id)titleFont;
- (id)titleFontName;
- (double)titleFontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;
- (long long)titleNumberOfLines;
- (id)titleParagraphStyle;

@end
