/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDSeries : NSObject <EDKeyedObject> {
    CHDData * mCategoryData;
    CHDChart * mChart;
    CHDChartType * mChartType;
    EDKeyedCollection * mDataValuePropertiesCollection;
    bool  mDateTimeFormattingFlag;
    CHDDataLabel * mDefaultDataLabel;
    CHDErrorBar * mErrorBarX;
    CHDErrorBar * mErrorBarY;
    OADGraphicProperties * mGraphicProperties;
    bool  mHiddenFlag;
    CHDDataValue * mLastCachedName;
    CHDFormula * mName;
    unsigned long long  mOrder;
    unsigned long long  mStyleIndex;
    EDCollection * mTrendlinesCollection;
    CHDData * mValueData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)seriesWithChart:(id)arg1;

- (unsigned long long)categoryCount;
- (id)categoryData;
- (id)chart;
- (id)chartType;
- (void)clearBackPointers;
- (id)dataValuePropertiesCollection;
- (void)dealloc;
- (id)defaultDataLabel;
- (id)defaultSeriesNameForIndex:(unsigned long long)arg1;
- (id)description;
- (id)errorBarXAxis;
- (id)errorBarYAxis;
- (id)graphicProperties;
- (bool)hasErrorBars;
- (bool)hasTrendlines;
- (id)initWithChart:(id)arg1;
- (bool)isDateTimeFormattingFlag;
- (bool)isEmpty;
- (bool)isHidden;
- (long long)key;
- (id)lastCachedName;
- (id)name;
- (unsigned long long)order;
- (void)setCategoryData:(id)arg1;
- (void)setChartType:(id)arg1;
- (void)setDataValuePropertiesCollection:(id)arg1;
- (void)setDateTimeFormattingFlag:(bool)arg1;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setErrorBar:(id)arg1;
- (void)setErrorBarXAxis:(id)arg1;
- (void)setErrorBarYAxis:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setHiddenFlag:(bool)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setTrendlineCollection:(id)arg1;
- (void)setValueData:(id)arg1;
- (id)shallowCopy;
- (unsigned long long)styleIndex;
- (id)trendlineCollection;
- (id)valueData;

@end
