/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFRefreshBarButtonItem : UIBarButtonItem {
    FMFTintedActivityIndicatorView * _aiv;
    UIImageView * _imageView;
    id  _locateNotification;
    NSSet * _locations;
    FMFRefreshWrapperButton * _wrapperButton;
}

@property (nonatomic, retain) FMFTintedActivityIndicatorView *aiv;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) id locateNotification;
@property (nonatomic, retain) NSSet *locations;
@property (nonatomic, retain) FMFRefreshWrapperButton *wrapperButton;

- (void).cxx_destruct;
- (void)_updateLocateInProgress;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)addLocation:(id)arg1;
- (id)aiv;
- (bool)anyLocationIsUpdating;
- (void)dealloc;
- (id)imageView;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isAnimating;
- (void)localTapped;
- (id)locateNotification;
- (void)locatingInProgressChanged:(id)arg1;
- (id)locations;
- (void)removeLocationForHandle:(id)arg1;
- (void)setAiv:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImageView:(id)arg1;
- (void)setLocateNotification:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setWrapperButton:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateLocations;
- (id)wrapperButton;

@end
