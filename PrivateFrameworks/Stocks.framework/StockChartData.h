/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockChartData : NSObject {
    long long  _chartInterval;
    NSDictionary * _dataSeriesDict;
    double  _expirationTime;
    bool  _hasVolume;
    NSMutableDictionary * _imageSetCache;
    NSArray * _interestingIndexes;
    bool  _isUnavailable;
    NSMutableDictionary * _labelPlacementCache;
    NSDate * _marketCloseDate;
    NSDate * _marketOpenDate;
    NSTimeZone * _marketTimeZone;
    struct { double x1; double x2; unsigned long long x3; } * _maxValue;
    struct { double x1; double x2; unsigned long long x3; } * _minValue;
    float  _previousClosePrice;
    Stock * _stock;
    unsigned int  _stockValueCount;
    struct { double x1; double x2; unsigned long long x3; } * _stockValues;
    NSMutableDictionary * _xAxisLabelInfoCache;
    int  _yAxisFractionDigits;
    NSMutableDictionary * _yAxisLabelInfoCache;
}

@property (nonatomic) long long chartInterval;
@property (nonatomic, retain) NSDictionary *dataSeriesDict;
@property (nonatomic) double expirationTime;
@property (nonatomic) bool hasVolume;
@property (nonatomic, retain) NSArray *interestingIndexes;
@property (nonatomic) bool isUnavailable;
@property (nonatomic, retain) NSDate *marketCloseDate;
@property (nonatomic, retain) NSDate *marketOpenDate;
@property (nonatomic, retain) NSTimeZone *marketTimeZone;
@property (nonatomic) struct { double x1; double x2; unsigned long long x3; }*maxValue;
@property (nonatomic) struct { double x1; double x2; unsigned long long x3; }*minValue;
@property (nonatomic) float previousClosePrice;
@property (nonatomic) Stock *stock;
@property (readonly) unsigned int stockValueCount;
@property (readonly) struct { double x1; double x2; unsigned long long x3; }*stockValues;
@property (nonatomic) int yAxisFractionDigits;

- (void).cxx_destruct;
- (struct { double x1; double x2; unsigned long long x3; }*)allocateStockValuesWithCount:(unsigned int)arg1;
- (long long)chartInterval;
- (void)clearAllImageSets;
- (id)dataSeriesDict;
- (void)dealloc;
- (id)description;
- (double)expirationTime;
- (bool)hasVolume;
- (id)imageSetForDisplayMode:(id)arg1;
- (id)initWithStock:(id)arg1 interval:(long long)arg2;
- (id)interestingIndexes;
- (bool)isUnavailable;
- (long long)labelPlacementForDisplayMode:(id)arg1;
- (id)marketCloseDate;
- (id)marketOpenDate;
- (id)marketTimeZone;
- (struct { double x1; double x2; unsigned long long x3; }*)maxValue;
- (struct { double x1; double x2; unsigned long long x3; }*)minValue;
- (float)previousClosePrice;
- (void)setChartInterval:(long long)arg1;
- (void)setDataSeriesDict:(id)arg1;
- (void)setExpirationTime:(double)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setImageSet:(id)arg1 forDisplayMode:(id)arg2;
- (void)setInterestingIndexes:(id)arg1;
- (void)setIsUnavailable:(bool)arg1;
- (void)setLabelPlacement:(long long)arg1 forDisplayMode:(id)arg2;
- (void)setMarketCloseDate:(id)arg1;
- (void)setMarketOpenDate:(id)arg1;
- (void)setMarketTimeZone:(id)arg1;
- (void)setMaxValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setMinValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setPreviousClosePrice:(float)arg1;
- (void)setStock:(id)arg1;
- (void)setXAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (void)setYAxisFractionDigits:(int)arg1;
- (void)setYAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2;
- (id)stock;
- (unsigned int)stockValueCount;
- (struct { double x1; double x2; unsigned long long x3; }*)stockValues;
- (id)xAxisLabelInfoArrayForMode:(id)arg1;
- (int)yAxisFractionDigits;
- (id)yAxisLabelInfoArrayForMode:(id)arg1;

@end
