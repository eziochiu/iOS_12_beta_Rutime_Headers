/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDPlotArea : NSObject {
    CHDAxesCollection * mAxes;
    bool  mCategoryAxesReversed;
    bool  mCategoryAxesReversedOverridden;
    CHDChartTypesCollection * mChartTypes;
    bool  mContainsVolumeStockType;
    OADGraphicProperties * mGraphicProperties;
}

- (id)axes;
- (id)chartTypes;
- (bool)containsVolumeStockType;
- (void)dealloc;
- (id)description;
- (id)graphicProperties;
- (bool)hasSecondaryAxis;
- (bool)hasSecondaryYAxisDeleted;
- (id)initWithChart:(id)arg1;
- (bool)isCategoryAxesReversed:(bool)arg1;
- (void)markSecondaryAxes;
- (void)setContainsVolumeStockType:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;

@end
