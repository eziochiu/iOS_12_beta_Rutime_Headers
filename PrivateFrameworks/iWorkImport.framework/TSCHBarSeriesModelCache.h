/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBarSeriesModelCache : NSObject {
    double  mBarGapRatio;
    double  mBarGroupGapRatio;
    double  mBarWidthRatio;
    id  mFill;
    TSCHChartAxis * mGroupAxis;
    unsigned int  mLabelPosition;
    double  mOpacity;
    TSWPParagraphStyle * mParagraphStyle;
    TSCHChartSeries * mSeries;
    unsigned long long  mSeriesIndex;
    TSDShadow * mShadow;
    TSDStroke * mStroke;
    double  mUnitSpaceIntercept;
    TSCHChartValueAxis * mValueAxis;
    bool  mValueLabelsOn;
}

@property (readonly) double barGapRatio;
@property (readonly) double barGroupGapRatio;
@property (readonly) double barWidthRatio;
@property (readonly) id fill;
@property (readonly) TSCHChartAxis *groupAxis;
@property (readonly) unsigned int labelPosition;
@property (readonly) double opacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) TSCHChartSeries *series;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) TSDShadow *shadow;
@property (readonly) TSDStroke *stroke;
@property (readonly) double unitSpaceIntercept;
@property (readonly) TSCHChartValueAxis *valueAxis;
@property (readonly) bool valueLabelsOn;

- (void).cxx_destruct;
- (double)barGapRatio;
- (double)barGroupGapRatio;
- (double)barWidthRatio;
- (void)dealloc;
- (id)fill;
- (id)groupAxis;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2;
- (unsigned int)labelPosition;
- (double)opacity;
- (id)paragraphStyle;
- (id)series;
- (unsigned long long)seriesIndex;
- (id)shadow;
- (id)stroke;
- (double)unitSpaceIntercept;
- (id)valueAxis;
- (bool)valueLabelsOn;

@end
