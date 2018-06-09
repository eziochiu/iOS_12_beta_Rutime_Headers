/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayGridView : UIView <EKCurrentTimeMarkerViewUpdating, EKUITintColorUpdateDelegate> {
    bool  _animatesTimeMarker;
    UIColor * _backgroundColor;
    double  _cachedWidthForOffMainThreadWork;
    unsigned long long  _daysToDisplay;
    double  _eventHorizontalInset;
    UIView * _fadingHighlightedDayBackground;
    double  _fixedDayWidth;
    UIView * _gridContainerView;
    double  _gridHeightScale;
    NSMutableDictionary * _gridParentViews;
    NSMutableArray * _gridPatternViews;
    UIVisualEffect * _gridVisualEffect;
    UIView * _highlightedDayBackground;
    long long  _highlightedDayIndex;
    double  _hourHeight;
    double  _hoursToPadBottom;
    double  _hoursToPadTop;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBounds;
    unsigned int  _leftBorder;
    UIView * _leftBorderView;
    UIColor * _lineColor;
    NSMutableArray * _middleBorderViews;
    UIView * _occurrenceContainerView;
    long long  _orientation;
    unsigned int  _rightBorder;
    bool  _rightBorderInsetsOccurrences;
    UIView * _rightBorderView;
    int  _selected;
    bool  _showsTimeLine;
    bool  _showsTimeMarker;
    UIImageView * _timeDot;
    double  _timeInset;
    EKCurrentTimeMarkerView * _timeMarker;
    long long  _timeMarkerDotDay;
    double  _timeWidth;
    bool  _usesVibrantGridDrawing;
}

@property (nonatomic) bool animatesTimeMarker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double eventHorizontalInset;
@property (nonatomic) double fixedDayWidth;
@property (nonatomic) double gridHeightScale;
@property (nonatomic, retain) UIVisualEffect *gridVisualEffect;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long highlightedDayIndex;
@property (nonatomic, readonly) double hourHeight;
@property (nonatomic) double hoursToPadBottom;
@property (nonatomic) double hoursToPadTop;
@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic, retain) UIView *occurrenceContainerView;
@property (nonatomic) bool rightBorderInsetsOccurrences;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool showsLeftBorder;
@property (nonatomic) bool showsRightBorder;
@property (nonatomic) bool showsTimeLine;
@property (nonatomic) bool showsTimeMarker;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeInset;
@property (nonatomic, readonly) EKCurrentTimeMarkerView *timeMarker;
@property (nonatomic) long long timeMarkerDotDay;
@property (nonatomic, readonly) double timeWidth;
@property (nonatomic, readonly) double topPadding;
@property (nonatomic) bool usesVibrantGridDrawing;
@property (nonatomic, readonly) double widthForOccurrences;

+ (void)cacheBackgroundImage:(id)arg1 forKey:(id)arg2;
+ (id)cachedBackgroundImageForKey:(id)arg1;

- (void).cxx_destruct;
- (double)_dayWidth;
- (id)_generateGridImage;
- (void)_layoutHighlight;
- (void)_updateTimeMarker;
- (bool)animatesTimeMarker;
- (double)bottomPadding;
- (double)eventHorizontalInset;
- (double)fixedDayWidth;
- (double)gridHeightScale;
- (id)gridVisualEffect;
- (long long)highlightedDayIndex;
- (double)hourHeight;
- (double)hoursToPadBottom;
- (double)hoursToPadTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundColor:(id)arg2 opaque:(bool)arg3 numberOfDaysToDisplay:(unsigned long long)arg4;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)lineColor;
- (id)occurrenceContainerView;
- (double)positionOfSecond:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForStartSeconds:(long long)arg1 endSeconds:(long long)arg2;
- (bool)rightBorderInsetsOccurrences;
- (int)secondAtPosition:(double)arg1;
- (void)setAnimatesTimeMarker:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEventHorizontalInset:(double)arg1;
- (void)setFixedDayWidth:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGridHeightScale:(double)arg1;
- (void)setGridVisualEffect:(id)arg1;
- (void)setHighlightedDayIndex:(long long)arg1;
- (void)setHoursToPadBottom:(double)arg1;
- (void)setHoursToPadTop:(double)arg1;
- (void)setLineColor:(id)arg1;
- (void)setOccurrenceContainerView:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRightBorderInsetsOccurrences:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowsLeftBorder:(bool)arg1;
- (void)setShowsRightBorder:(bool)arg1;
- (void)setShowsTimeLine:(bool)arg1;
- (void)setShowsTimeMarker:(bool)arg1;
- (void)setTimeMarkerDotDay:(long long)arg1;
- (void)setUsesVibrantGridDrawing:(bool)arg1;
- (bool)showsLeftBorder;
- (bool)showsRightBorder;
- (bool)showsTimeLine;
- (bool)showsTimeMarker;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeDotImage;
- (double)timeInset;
- (id)timeMarker;
- (long long)timeMarkerDotDay;
- (double)timeWidth;
- (void)tintColorDidChange;
- (double)topPadding;
- (void)updateMarkerPosition;
- (bool)usesVibrantGridDrawing;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (double)widthForOccurrences;

@end
