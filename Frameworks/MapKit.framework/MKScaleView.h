/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKScaleView : UIView {
    UIColor * _borderColorRegular;
    UIColor * _borderColorSatellite;
    UIColor * _darkSegmentColorRegular;
    UIColor * _darkSegmentColorSatellite;
    UIView * _displayedOutline;
    double  _distanceInMeters;
    NSString * _feetAbbreviation;
    NSNumberFormatter * _floatNumberFormatter;
    NSMutableDictionary * _formattedNumberCache;
    long long  _grQuality;
    bool  _isVisible;
    NSString * _kilometersAbbreviation;
    int  _layoutCounter;
    long long  _legendAlignment;
    UIColor * _lightSegmentColorRegular;
    UIColor * _lightSegmentColorSatellite;
    double  _magicNumbers;
    MKMapView * _mapView;
    NSString * _metersAbbreviation;
    NSString * _milesAbbreviation;
    long long  _oldNumberOfSegments;
    UIView * _outlineViewA;
    UIView * _outlineViewB;
    double  _resultSegmentLength;
    double  _resultSegmentLengthInMeters;
    long long  _scaleVisibility;
    double  _segmentLengthInPixels;
    NSMutableArray * _segments;
    _MKScaleUnitsView * _unitsView;
    bool  _useLightText;
    bool  _useMetric;
    bool  _useYardsForShortDistances;
    NSString * _yardAbbreviation;
}

@property (nonatomic) double distanceInMeters;
@property (nonatomic) long long legendAlignment;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) long long scaleVisibility;
@property (nonatomic) bool useLightText;

+ (id)scaleViewWithMapView:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(double)arg1;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(bool)arg3 inMetric:(bool)arg4 displaysYardsForShortDistances:(bool)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateSegmentStrokes;
- (void)_updateStrings;
- (void)_updateVisibility;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMapView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)legendAlignment;
- (id)mapView;
- (void)memoryWarning:(id)arg1;
- (long long)scaleVisibility;
- (void)setDistanceInMeters:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendAlignment:(long long)arg1;
- (void)setMapView:(id)arg1;
- (void)setScaleVisibility:(long long)arg1;
- (void)setUseLightText:(bool)arg1;
- (void)shouldUpdateScaleNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLocale:(id)arg1;
- (bool)useLightText;

@end
