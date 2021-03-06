/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLHeadlineCollectionViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes {
    long long  _accessoryContentMode;
    UIColor * _accessoryFontColor;
    NSString * _accessoryFontName;
    double  _accessoryFontSize;
    UIColor * _accessoryIconColor;
    double  _accessoryLineHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _accessoryViewFrame;
    UIColor * _backgroundColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSString * _excerptFontName;
    double  _excerptFontSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _excerptFrame;
    double  _excerptLineHeight;
    bool  _hasVideo;
    long long  _imagePosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageViewFrame;
    bool  _layoutHasTooMuchWhiteSpaceInCurrentState;
    double  _minimumHeightBetweenLowestTextFrameAndBottomOfContent;
    UIColor * _numberedCircleColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _numberedCircleFrame;
    UIColor * _publisherLogoColor;
    long long  _publisherLogoContentMode;
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
    double  _selectionCornerRadius;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _selectionInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sharrowFrame;
    bool  _shouldAdjustPublisherLogo;
    bool  _showAccessoryText;
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
    double  _titleLineHeight;
    long long  _titleTextAlignment;
    bool  _titleTruncates;
    double  _whiteSpace;
}

@property (nonatomic) long long accessoryContentMode;
@property (nonatomic, retain) UIColor *accessoryFontColor;
@property (nonatomic, retain) NSString *accessoryFontName;
@property (nonatomic) double accessoryFontSize;
@property (nonatomic, retain) UIColor *accessoryIconColor;
@property (nonatomic) double accessoryLineHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessoryViewFrame;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, retain) NSString *excerptFontName;
@property (nonatomic) double excerptFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } excerptFrame;
@property (nonatomic) double excerptLineHeight;
@property (nonatomic) bool hasVideo;
@property (nonatomic) long long imagePosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageViewFrame;
@property (nonatomic) bool layoutHasTooMuchWhiteSpaceInCurrentState;
@property (nonatomic) double minimumHeightBetweenLowestTextFrameAndBottomOfContent;
@property (nonatomic, retain) UIColor *numberedCircleColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } numberedCircleFrame;
@property (nonatomic, retain) UIColor *publisherLogoColor;
@property (nonatomic) long long publisherLogoContentMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } publisherLogoFrame;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } selectionInset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sharrowFrame;
@property (nonatomic) bool shouldAdjustPublisherLogo;
@property (getter=isShowingAccessoryText, nonatomic) bool showAccessoryText;
@property (nonatomic, retain) NSString *titleFontName;
@property (nonatomic) double titleFontSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleFrame;
@property (nonatomic) double titleLineHeight;
@property (nonatomic) long long titleTextAlignment;
@property (nonatomic) bool titleTruncates;
@property (nonatomic) double whiteSpace;

+ (id)nfl_layoutAttributesForWidgetProperties:(id)arg1 feedSettings:(id)arg2;
+ (id)zeroHeightLayoutAttributesWithFeedSettings:(id)arg1;

- (void).cxx_destruct;
- (long long)accessoryContentMode;
- (id)accessoryFontColor;
- (id)accessoryFontName;
- (double)accessoryFontSize;
- (id)accessoryIconColor;
- (double)accessoryLineHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryViewFrame;
- (id)backgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)excerptFontName;
- (double)excerptFontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })excerptFrame;
- (double)excerptLineHeight;
- (bool)hasVideo;
- (unsigned long long)hash;
- (long long)imagePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageViewFrame;
- (bool)isEqual:(id)arg1;
- (bool)isShowingAccessoryText;
- (bool)layoutHasTooMuchWhiteSpaceInCurrentState;
- (double)minimumHeightBetweenLowestTextFrameAndBottomOfContent;
- (id)numberedCircleColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })numberedCircleFrame;
- (void)populateWithProtobuf:(id)arg1;
- (id)protobufRepresentation;
- (id)publisherLogoColor;
- (long long)publisherLogoContentMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })publisherLogoFrame;
- (double)selectionCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionInset;
- (void)setAccessoryContentMode:(long long)arg1;
- (void)setAccessoryFontColor:(id)arg1;
- (void)setAccessoryFontName:(id)arg1;
- (void)setAccessoryFontSize:(double)arg1;
- (void)setAccessoryIconColor:(id)arg1;
- (void)setAccessoryLineHeight:(double)arg1;
- (void)setAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExcerptFontName:(id)arg1;
- (void)setExcerptFontSize:(double)arg1;
- (void)setExcerptFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExcerptLineHeight:(double)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setImagePosition:(long long)arg1;
- (void)setImageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutHasTooMuchWhiteSpaceInCurrentState:(bool)arg1;
- (void)setMinimumHeightBetweenLowestTextFrameAndBottomOfContent:(double)arg1;
- (void)setNumberedCircleColor:(id)arg1;
- (void)setNumberedCircleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPublisherLogoColor:(id)arg1;
- (void)setPublisherLogoContentMode:(long long)arg1;
- (void)setPublisherLogoFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectionCornerRadius:(double)arg1;
- (void)setSelectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSharrowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldAdjustPublisherLogo:(bool)arg1;
- (void)setShowAccessoryText:(bool)arg1;
- (void)setTitleFontName:(id)arg1;
- (void)setTitleFontSize:(double)arg1;
- (void)setTitleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitleLineHeight:(double)arg1;
- (void)setTitleTextAlignment:(long long)arg1;
- (void)setTitleTruncates:(bool)arg1;
- (void)setWhiteSpace:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sharrowFrame;
- (bool)shouldAdjustPublisherLogo;
- (id)titleFontName;
- (double)titleFontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;
- (double)titleLineHeight;
- (long long)titleTextAlignment;
- (bool)titleTruncates;
- (double)whiteSpace;

@end
