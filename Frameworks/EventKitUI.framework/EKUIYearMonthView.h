/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIYearMonthView : UIView {
    NSCalendar * _calendar;
    EKCalendarDate * _calendarDate;
    double  _circleSizeForDoubleDigit;
    bool  _computeCircleFrameWithoutAdjustments;
    long long  _daysInWeek;
    EKCalendarDate * _endCalendarDate;
    long long  _firstDayIndex;
    NSSet * _firstOfOverlayMonthIndices;
    NSSet * _firstOfOverlayYearIndices;
    NSString * _monthString;
    EKUIOverlayCalendarSignificantDatesProvider * _overlaySignificantDatesProvider;
    long long  _todayIndex;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, retain) EKCalendarDate *calendarDate;
@property (nonatomic, readonly) double circleFrameXAdjustment;
@property (nonatomic, readonly) double circleFrameYAdjustment;
@property (nonatomic, readonly) double circleSize;
@property (nonatomic, readonly) double circleSizeForDoubleDigit;
@property (nonatomic, readonly) bool computeCircleFrameWithoutAdjustments;
@property (nonatomic, readonly) UIColor *dayColor;
@property (nonatomic, readonly) NSString *dayColorKey;
@property (nonatomic, readonly) UIFont *dayNumberFont;
@property (nonatomic, readonly) double dayNumberKerning;
@property (nonatomic, readonly) double dayTextSize;
@property (nonatomic, readonly) long long daysInWeek;
@property (nonatomic, readonly) double daysXAdjustLeft;
@property (nonatomic, readonly) double daysYAdjustTop;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) double headerFontKerning;
@property (nonatomic, readonly) double headerFontMaxSize;
@property (nonatomic, readonly) double headerFontMinSize;
@property (nonatomic, readonly) double headerXAdjust;
@property (nonatomic, readonly) bool opaque;
@property (nonatomic, retain) EKUIOverlayCalendarSignificantDatesProvider *overlaySignificantDatesProvider;
@property (nonatomic, readonly) double roundedRectCornerRadius;
@property (nonatomic, readonly) bool showMonthName;
@property (nonatomic, readonly) bool showWeekDayInitials;
@property (nonatomic, readonly) UIFont *todayNumberFont;
@property (nonatomic, readonly) double todayNumberKerning;
@property (nonatomic, readonly) double todayTextSize;
@property (nonatomic, readonly) double todayTextYAdjustment;
@property (nonatomic, readonly) bool vibrant;
@property (nonatomic, readonly) double weekDayInitialsAdjustLeft;
@property (nonatomic, readonly) double weekDayInitialsAdjustTop;
@property (nonatomic, readonly) UIFont *weekDayInitialsFont;
@property (nonatomic, readonly) double xInset;
@property (nonatomic, readonly) double xSpacing;
@property (nonatomic, readonly) double yInset;
@property (nonatomic, readonly) double ySpacing;

+ (id)_defaultTextColor;
+ (double)heightForInterfaceOrientation:(long long)arg1;

- (void).cxx_destruct;
- (void)_getTodayNumberTextFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 circleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_imageForDayNumber:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3;
- (id)_imageForMonthDays:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 underlineThickness:(double)arg3;
- (id)_imageForMonthName:(id)arg1;
- (struct CGPoint { double x1; double x2; })_monthNameOriginPoint;
- (void)_reloadCachedValues;
- (bool)_shouldUseRoundedRectInsteadOfCircle;
- (id)_todayAttributes;
- (void)_updateFirstOfMonthAndYearIndices;
- (void)_updateToday;
- (void)_warmImageCache;
- (id)_weekDayInitialsImage;
- (id)calendar;
- (id)calendarDate;
- (double)circleFrameXAdjustment;
- (double)circleFrameYAdjustment;
- (double)circleSize;
- (double)circleSizeForDoubleDigit;
- (bool)computeCircleFrameWithoutAdjustments;
- (bool)containsCalendarDate:(id)arg1;
- (id)dayColor;
- (id)dayColorKey;
- (id)dayNumberFont;
- (double)dayNumberKerning;
- (double)dayTextSize;
- (long long)daysInWeek;
- (double)daysXAdjustLeft;
- (double)daysYAdjustTop;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForGridOfDays:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTodayHighlight;
- (id)headerFont;
- (double)headerFontKerning;
- (double)headerFontMaxSize;
- (double)headerFontMinSize;
- (struct CGPoint { double x1; double x2; })headerOrigin;
- (double)headerXAdjust;
- (id)initWithCalendarDate:(id)arg1 calendar:(id)arg2;
- (bool)isCurrentMonth;
- (void)localeChanged;
- (double)minHeaderFontSizeUsed;
- (id)monthNameForDate:(id)arg1;
- (id)monthString;
- (bool)opaque;
- (void)overlaySignificantDatesChangedInRange:(id)arg1;
- (id)overlaySignificantDatesProvider;
- (bool)pointIsAboveMonthNameBaseline:(struct CGPoint { double x1; double x2; })arg1;
- (void)pulseTodayCircle;
- (double)roundedRectCornerRadius;
- (struct CGSize { double x1; double x2; })roundedRectSizeForDayNumberString:(id)arg1;
- (void)setCalendarDate:(id)arg1;
- (void)setOverlaySignificantDatesProvider:(id)arg1;
- (bool)showMonthName;
- (bool)showWeekDayInitials;
- (void)tintColorDidChange;
- (id)todayNumberFont;
- (double)todayNumberKerning;
- (double)todayTextSize;
- (double)todayTextYAdjustment;
- (void)updateToday;
- (bool)vibrant;
- (double)weekDayInitialsAdjustLeft;
- (double)weekDayInitialsAdjustTop;
- (id)weekDayInitialsFont;
- (double)xInset;
- (double)xSpacing;
- (double)yInset;
- (double)ySpacing;

@end
