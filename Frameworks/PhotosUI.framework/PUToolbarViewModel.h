/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUToolbarViewModel : PUViewModel {
    UIViewController * __viewController;
    UIView * _accessoryView;
    double  _accessoryViewMaximumHeight;
    double  _accessoryViewTopOutset;
    double  _maximumHeight;
    bool  _needsToUpdateToolbarSize;
    NSArray * _toolbarItems;
}

@property (setter=_setViewController:, nonatomic) UIViewController *_viewController;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) double accessoryViewMaximumHeight;
@property (nonatomic) double accessoryViewTopOutset;
@property (nonatomic, readonly) PUToolbarViewModelChange *currentChange;
@property (nonatomic) double maximumHeight;
@property (nonatomic) bool needsToUpdateToolbarSize;
@property (nonatomic, copy) NSArray *toolbarItems;

- (void).cxx_destruct;
- (void)_setViewController:(id)arg1;
- (id)_viewController;
- (id)accessoryView;
- (double)accessoryViewMaximumHeight;
- (double)accessoryViewTopOutset;
- (id)currentChange;
- (void)didPublishChanges;
- (double)maximumHeight;
- (bool)needsToUpdateToolbarSize;
- (id)newViewModelChange;
- (void)setAccessoryView:(id)arg1;
- (void)setAccessoryViewMaximumHeight:(double)arg1;
- (void)setAccessoryViewTopOutset:(double)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setNeedsToUpdateToolbarSize:(bool)arg1;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;

@end
