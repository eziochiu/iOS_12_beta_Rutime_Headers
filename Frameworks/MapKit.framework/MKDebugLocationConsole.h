/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDebugLocationConsole : UILabel {
    NSString * _customText;
    UIColor * _customTextColor;
    bool  _customTextEnabled;
    unsigned long long  _pageIndex;
    MKMapView * _parentMapView;
    NSDateFormatter * _timeStampFormatter;
    NSTimer * _updateTimer;
}

@property (nonatomic) bool customTextEnabled;
@property (nonatomic) unsigned long long pageIndex;

- (void).cxx_destruct;
- (void)_consoleTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_debugViewFrameWithMapView:(id)arg1;
- (void)_showNextPage;
- (void)_updateCustomText;
- (void)_updateGPSInfo;
- (void)_updateVehicleInfo;
- (bool)customTextEnabled;
- (id)initWithMapView:(id)arg1;
- (unsigned long long)pageIndex;
- (void)setCustomTextEnabled:(bool)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (id)timeStampFormatter;
- (void)update;
- (void)updateCustomText:(id)arg1 textColor:(id)arg2;
- (void)updateFrameWithEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
