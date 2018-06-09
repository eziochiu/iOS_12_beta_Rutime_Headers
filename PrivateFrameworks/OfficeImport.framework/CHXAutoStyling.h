/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXAutoStyling : CHAutoStyling <CHAutoStyling> {
    bool  __autoChartFillIsHollow;
    bool  __autoChartStrokeIsHollow;
}

@property bool _autoChartFillIsHollow;
@property bool _autoChartStrokeIsHollow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)colorWithSchemeColorId:(int)arg1 shade:(float)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 tint:(float)arg2;
+ (id)colorWithSchemeColorId:(int)arg1 transformType:(int)arg2 transformValue:(float)arg3;
+ (int)styleColumnWithStyleId:(int)arg1;
+ (int)styleIdWithStyleRow:(int)arg1 styleColumn:(int)arg2;
+ (int)styleRowWithStyleId:(int)arg1;

- (bool)_autoChartFillIsHollow;
- (bool)_autoChartStrokeIsHollow;
- (id)autoAxisAndMajorGridColor;
- (id)autoChartAreaAndDataTableAndFloorStrokeColor;
- (id)autoChartAreaFillColor;
- (id)autoColorOfFirstColumnSeriesWithIndex:(unsigned long long)arg1 seriesCount:(unsigned long long)arg2;
- (id)autoColorOfSeriesWithIndex:(unsigned long long)arg1;
- (unsigned int)autoFloorAndChartAreaStrokeIndex;
- (id)autoFloorAndWallsAndPlotArea2DFillColor;
- (unsigned int)autoFloorAndWallsFillIndex;
- (id)autoMinorGridColor;
- (id)autoOtherStrokeColor;
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (id)autoTextFill;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(bool)arg3;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(id /* block */)arg4;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)setAutoChartFillIsHollow:(bool)arg1;
- (void)setAutoChartStrokeIsHollow:(bool)arg1;
- (void)setDefaultErrorBarPropertiesInGraphicProperties:(id)arg1;
- (void)set_autoChartFillIsHollow:(bool)arg1;
- (void)set_autoChartStrokeIsHollow:(bool)arg1;
- (int)styleColumn;
- (int)styleId;
- (int)styleRow;

@end
