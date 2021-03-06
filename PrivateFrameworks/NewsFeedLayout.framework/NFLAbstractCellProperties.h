/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLAbstractCellProperties : NSObject {
    NSDictionary * _columnIrrespectiveProperties;
    NFLFontCache * _fontCache;
    struct { 
        double headlineStyle1Scale; 
        double headlineStyle2Scale; 
        double headlineStyle3Scale; 
    }  _headlineScales;
    NSDictionary * _layout;
    long long  _rowSpan;
    double  _scaleValue;
}

@property (nonatomic, retain) NSDictionary *columnIrrespectiveProperties;
@property (nonatomic, retain) NFLFontCache *fontCache;
@property (nonatomic) struct { double x1; double x2; double x3; } headlineScales;
@property (nonatomic, retain) NSDictionary *layout;
@property (nonatomic, readonly) long long rowSpan;
@property (nonatomic) double scaleValue;

- (void).cxx_destruct;
- (id)arrayForPropertyKey:(id)arg1;
- (id)columnIrrespectiveProperties;
- (id)dictionaryForPropertyKey:(id)arg1 columnSpan:(long long)arg2;
- (id)fontCache;
- (bool)fontCondensedForFontID:(id)arg1;
- (double)fontWeightForFontID:(id)arg1;
- (struct { double x1; double x2; double x3; })headlineScales;
- (id)initWithLayout:(id)arg1 columnIrrespectiveProperties:(id)arg2 fontCache:(id)arg3 scaleValue:(double)arg4 headlineScales:(struct { double x1; double x2; double x3; })arg5;
- (id)layout;
- (id)numberForPropertyKey:(id)arg1;
- (id)numberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (long long)rowSpan;
- (double)scaleValue;
- (double)scaledFontSizeForFontID:(id)arg1;
- (double)scaledLineHeightForFontID:(id)arg1;
- (id)scaledNumberForPropertyKey:(id)arg1;
- (id)scaledNumberForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;
- (struct CGSize { double x1; double x2; })scaledSizeForPropertyKey:(id)arg1;
- (void)setColumnIrrespectiveProperties:(id)arg1;
- (void)setFontCache:(id)arg1;
- (void)setHeadlineScales:(struct { double x1; double x2; double x3; })arg1;
- (void)setLayout:(id)arg1;
- (void)setScaleValue:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeForPropertyKey:(id)arg1;
- (id)stringForPropertyKey:(id)arg1;
- (id)stringForPropertyKeyIrrespectiveOfColumnSpan:(id)arg1;

@end
