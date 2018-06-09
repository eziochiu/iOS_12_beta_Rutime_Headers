/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUISemiConstantCache : NSObject {
    NSMutableDictionary * _birthdayImages;
    bool  _calInterfaceIsLeftToRight;
    NSMutableDictionary * _commentIconStrings;
    double  _currentScaleFactor;
    bool  _currentWidthSizeClassIsRegular;
    double  _currentWindowHeight;
    unsigned long long  _currentWindowSizeParadigm;
    double  _currentWindowWidth;
    double  _dayOccurrenceMinimumCachedLineHeight;
    double  _dayOccurrenceMinimumCachedLineHeightSmall;
    UIFont * _dayOccurrenceUncompressedSecondaryTextFont;
    double  _minYearMonthHeaderFontSizeUsed;
    bool  _usesLargeText;
    double  _weekAllDayBaselineForLargeFormatWeekView;
    double  _weekAllDayBaselineForSmallFormatWeekView;
    UIFont * _weekAllDayLabelFont;
    double  _weekAllDayOccurrenceHeight;
    UIFont * _weekAllDayTodayLabelFont;
}

@property (readonly) bool calInterfaceIsLeftToRight;
@property (readonly) double currentScaleFactor;
@property (readonly) double currentWindowHeight;
@property (readonly) unsigned long long currentWindowSizeParadigm;
@property (readonly) double currentWindowWidth;
@property (readonly) double dayOccurrenceMinimumCachedLineHeight;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmall;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;
@property double minYearMonthHeaderFontSizeUsed;
@property (readonly) bool usesLargeText;
@property double weekAllDayBaselineForLargeFormatWeekView;
@property double weekAllDayBaselineForSmallFormatWeekView;
@property (readonly) UIFont *weekAllDayLabelFont;
@property double weekAllDayOccurrenceHeight;
@property (readonly) UIFont *weekAllDayTodayLabelFont;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_contentCategorySizeChanged:(id)arg1;
- (id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3;
- (void)_localeChanged:(id)arg1;
- (void)_orientationChanged:(id)arg1;
- (id)birthdayImageForFont:(id)arg1;
- (id)birthdayImageForFont:(id)arg1 withColor:(id)arg2;
- (bool)calInterfaceIsLeftToRight;
- (id)commentIconStringForFont:(id)arg1;
- (double)currentScaleFactor;
- (double)currentWindowHeight;
- (unsigned long long)currentWindowSizeParadigm;
- (double)currentWindowWidth;
- (double)dayOccurrenceMinimumCachedLineHeight;
- (double)dayOccurrenceMinimumCachedLineHeightSmall;
- (id)dayOccurrenceUncompressedSecondaryTextFont;
- (id)init;
- (double)minYearMonthHeaderFontSizeUsed;
- (void)setMinYearMonthHeaderFontSizeUsed:(double)arg1;
- (void)setWeekAllDayBaselineForLargeFormatWeekView:(double)arg1;
- (void)setWeekAllDayBaselineForSmallFormatWeekView:(double)arg1;
- (void)setWeekAllDayOccurrenceHeight:(double)arg1;
- (void)updateMetrics;
- (void)updateWindowSize;
- (bool)usesLargeText;
- (double)weekAllDayBaselineForLargeFormatWeekView;
- (double)weekAllDayBaselineForSmallFormatWeekView;
- (id)weekAllDayLabelFont;
- (double)weekAllDayOccurrenceHeight;
- (id)weekAllDayTodayLabelFont;

@end
