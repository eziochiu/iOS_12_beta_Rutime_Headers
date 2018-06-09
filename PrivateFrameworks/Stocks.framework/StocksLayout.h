/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksLayout : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _blurViewFrame;
    StockChartDisplayMode * _chartDisplayMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _chartViewFrame;
    bool  _chartViewHasBottomLine;
    bool  _chartViewHasTapGesture;
    bool  _chartViewInScrollView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _grayViewFrame;
    bool  _hasBlackView;
    bool  _hasBlurView;
    bool  _hasGrayView;
    bool  _hasPrimaryHorizontalDivider;
    bool  _hasPrimaryVerticalDivider;
    bool  _hasScrollView;
    bool  _hasSecondaryGrayView;
    bool  _hasSecondaryHorizontalDivider;
    bool  _hasSecondaryVerticalDivider;
    bool  _hasStatusView;
    bool  _hasStatusViewDivider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _infoViewFrame;
    bool  _infoViewHasBottomLine;
    bool  _infoViewInScrollView;
    bool  _isFullScreenChart;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _listViewContentInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _listViewFrame;
    unsigned long long  _listViewRowCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _newsViewFrame;
    bool  _newsViewHasBottomLine;
    bool  _newsViewInScrollView;
    bool  _newsViewShouldUseLargerFonts;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryHorizontalDividerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryVerticalDividerFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _scrollViewContentSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scrollViewFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _secondaryGrayViewFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _secondaryHorizontalDividerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _secondaryVerticalDividerFrame;
    double  _statusViewCenteringRatio;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusViewDividerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusViewFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } blurViewFrame;
@property (nonatomic, retain) StockChartDisplayMode *chartDisplayMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chartViewFrame;
@property (nonatomic) bool chartViewHasBottomLine;
@property (nonatomic) bool chartViewHasTapGesture;
@property (nonatomic) bool chartViewInScrollView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } grayViewFrame;
@property (nonatomic) bool hasBlackView;
@property (nonatomic) bool hasBlurView;
@property (nonatomic) bool hasGrayView;
@property (nonatomic) bool hasPrimaryHorizontalDivider;
@property (nonatomic) bool hasPrimaryVerticalDivider;
@property (nonatomic) bool hasScrollView;
@property (nonatomic) bool hasSecondaryGrayView;
@property (nonatomic) bool hasSecondaryHorizontalDivider;
@property (nonatomic) bool hasSecondaryVerticalDivider;
@property (nonatomic) bool hasStatusView;
@property (nonatomic) bool hasStatusViewDivider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } infoViewFrame;
@property (nonatomic) bool infoViewHasBottomLine;
@property (nonatomic) bool infoViewInScrollView;
@property (nonatomic) bool isFullScreenChart;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } listViewContentInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } listViewFrame;
@property (nonatomic) unsigned long long listViewRowCount;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } newsViewFrame;
@property (nonatomic) bool newsViewHasBottomLine;
@property (nonatomic) bool newsViewInScrollView;
@property (nonatomic) bool newsViewShouldUseLargerFonts;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryHorizontalDividerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryVerticalDividerFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } scrollViewContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } secondaryGrayViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } secondaryHorizontalDividerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } secondaryVerticalDividerFrame;
@property (nonatomic) double statusViewCenteringRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusViewDividerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusViewFrame;

+ (id)fullScreenChartLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)layoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (unsigned long long)numberOfRowsForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)singleColumnPortraitLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)threeColumnsLandscapeLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)twoColumnsLandscapeLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)twoColumnsPortraitLayoutForSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })blurViewFrame;
- (id)chartDisplayMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartViewFrame;
- (bool)chartViewHasBottomLine;
- (bool)chartViewHasTapGesture;
- (bool)chartViewInScrollView;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })grayViewFrame;
- (bool)hasBlackView;
- (bool)hasBlurView;
- (bool)hasGrayView;
- (bool)hasPrimaryHorizontalDivider;
- (bool)hasPrimaryVerticalDivider;
- (bool)hasScrollView;
- (bool)hasSecondaryGrayView;
- (bool)hasSecondaryHorizontalDivider;
- (bool)hasSecondaryVerticalDivider;
- (bool)hasStatusView;
- (bool)hasStatusViewDivider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })infoViewFrame;
- (bool)infoViewHasBottomLine;
- (bool)infoViewInScrollView;
- (bool)isFullScreenChart;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })listViewContentInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })listViewFrame;
- (unsigned long long)listViewRowCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })newsViewFrame;
- (bool)newsViewHasBottomLine;
- (bool)newsViewInScrollView;
- (bool)newsViewShouldUseLargerFonts;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryHorizontalDividerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryVerticalDividerFrame;
- (struct CGSize { double x1; double x2; })scrollViewContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryGrayViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryHorizontalDividerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryVerticalDividerFrame;
- (void)setBlurViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChartDisplayMode:(id)arg1;
- (void)setChartViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChartViewHasBottomLine:(bool)arg1;
- (void)setChartViewHasTapGesture:(bool)arg1;
- (void)setChartViewInScrollView:(bool)arg1;
- (void)setGrayViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasBlackView:(bool)arg1;
- (void)setHasBlurView:(bool)arg1;
- (void)setHasGrayView:(bool)arg1;
- (void)setHasPrimaryHorizontalDivider:(bool)arg1;
- (void)setHasPrimaryVerticalDivider:(bool)arg1;
- (void)setHasScrollView:(bool)arg1;
- (void)setHasSecondaryGrayView:(bool)arg1;
- (void)setHasSecondaryHorizontalDivider:(bool)arg1;
- (void)setHasSecondaryVerticalDivider:(bool)arg1;
- (void)setHasStatusView:(bool)arg1;
- (void)setHasStatusViewDivider:(bool)arg1;
- (void)setInfoViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInfoViewHasBottomLine:(bool)arg1;
- (void)setInfoViewInScrollView:(bool)arg1;
- (void)setIsFullScreenChart:(bool)arg1;
- (void)setListViewContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setListViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setListViewRowCount:(unsigned long long)arg1;
- (void)setNewsViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewsViewHasBottomLine:(bool)arg1;
- (void)setNewsViewInScrollView:(bool)arg1;
- (void)setNewsViewShouldUseLargerFonts:(bool)arg1;
- (void)setPrimaryHorizontalDividerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPrimaryVerticalDividerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollViewContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSecondaryGrayViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSecondaryHorizontalDividerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSecondaryVerticalDividerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusViewCenteringRatio:(double)arg1;
- (void)setStatusViewDividerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)statusViewCenteringRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusViewDividerFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusViewFrame;

@end
