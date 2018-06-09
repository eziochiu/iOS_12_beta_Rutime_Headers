/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapOptionsViewController : UIViewController {
    UIView * _bottomWhitePane;
    <FMFMapOptionsViewControllerDelegate> * _delegate;
    MKMapAttribution * _mapAttribution;
    UIButton * _mapAttributionButton;
    UISegmentedControl * _segmentedControl;
    UIView * _topTapView;
}

@property (nonatomic, retain) UIView *bottomWhitePane;
@property (nonatomic) <FMFMapOptionsViewControllerDelegate> *delegate;
@property (nonatomic, retain) MKMapAttribution *mapAttribution;
@property (nonatomic, retain) UIButton *mapAttributionButton;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) UIView *topTapView;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)attributionButtonPressed:(id)arg1;
- (void)awakeFromNib;
- (id)bottomWhitePane;
- (id)delegate;
- (id)init;
- (id)mapAttribution;
- (id)mapAttributionButton;
- (void)openInMaps:(id)arg1;
- (struct CGSize { double x1; double x2; })paneSize;
- (id)segmentedControl;
- (void)segmentedControlChanged:(id)arg1;
- (void)setBottomWhitePane:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapAttribution:(id)arg1;
- (void)setMapAttributionButton:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setTopTapView:(id)arg1;
- (id)topTapView;
- (void)viewDidLoad;

@end