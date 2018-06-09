/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKCalendarWeekView : UIView {
    double  _additionalSpacingPerRow;
    double  _dateBottomMargin;
    HKDateCache * _dateCache;
    double  _dateDiameter;
    double  _dateTopMargin;
    NSMutableArray * _dayCells;
    <HKCalendarWeekViewDelegate> * _delegate;
    long long  _firstDayOfMonthCellIndex;
    double  _leadingMargin;
    double  _monthTitleBottomMargin;
    double  _monthTitleTopMargin;
    UIView<HKCalendarMonthTitleFormatting> * _monthTitleView;
    NSDate * _monthWeekStart;
    HKCalendarDayCell * _pressedDayCell;
    long long  _pressedDayOfWeek;
}

@property (nonatomic) double additionalSpacingPerRow;
@property (nonatomic) double dateBottomMargin;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic) double dateDiameter;
@property (nonatomic) double dateTopMargin;
@property (nonatomic, readonly) NSArray *dayCells;
@property (nonatomic) <HKCalendarWeekViewDelegate> *delegate;
@property (nonatomic) long long firstDayOfMonthCellIndex;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double monthTitleBottomMargin;
@property (nonatomic) double monthTitleTopMargin;
@property (nonatomic, retain) UIView<HKCalendarMonthTitleFormatting> *monthTitleView;
@property (nonatomic, retain) NSDate *monthWeekStart;
@property (nonatomic, retain) HKCalendarDayCell *pressedDayCell;
@property (nonatomic) long long pressedDayOfWeek;

- (void).cxx_destruct;
- (id)_getDayCellWithTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_getDayCellWithTouches:(id)arg1;
- (double)additionalSpacingPerRow;
- (Class)cellClass;
- (bool)containsDate:(id)arg1;
- (bool)containsMonthTitle;
- (id)currentWeekStartDate;
- (double)dateBottomMargin;
- (id)dateCache;
- (double)dateDiameter;
- (double)dateTopMargin;
- (id)dayCells;
- (id)delegate;
- (id)description;
- (long long)firstDayOfMonthCellIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDayCell:(id)arg1;
- (id)initWithDateCache:(id)arg1;
- (double)leadingMargin;
- (double)monthTitleBottomMargin;
- (Class)monthTitleClass;
- (double)monthTitleTopMargin;
- (id)monthTitleView;
- (id)monthWeekStart;
- (id)nextWeekStartDate;
- (double)preferredHeight;
- (id)pressedDayCell;
- (long long)pressedDayOfWeek;
- (void)pressedOnCalendarDay:(long long)arg1 cell:(id)arg2 down:(bool)arg3;
- (id)previousWeekStartDate;
- (void)reloadCells;
- (void)selectedCalendarDay:(id)arg1;
- (void)setAdditionalSpacingPerRow:(double)arg1;
- (void)setDateBottomMargin:(double)arg1;
- (void)setDateDiameter:(double)arg1;
- (void)setDateTopMargin:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstDayOfMonthCellIndex:(long long)arg1;
- (void)setLeadingMargin:(double)arg1;
- (void)setMonthTitleBottomMargin:(double)arg1;
- (void)setMonthTitleTopMargin:(double)arg1;
- (void)setMonthTitleView:(id)arg1;
- (void)setMonthWeekStart:(id)arg1;
- (void)setPressedDayCell:(id)arg1;
- (void)setPressedDayOfWeek:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsRTL;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
