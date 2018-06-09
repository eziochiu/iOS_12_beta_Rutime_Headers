/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXEmptyPlaceholderViewController : UIViewController {
    NSString * _placeholderMessage;
    NSString * _placeholderTitle;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) _UIContentUnavailableView *_placeholderView;
@property (nonatomic, copy) NSString *placeholderMessage;
@property (nonatomic, copy) NSString *placeholderTitle;

- (void).cxx_destruct;
- (id)_placeholderView;
- (void)_scheduleLayout;
- (void)_updatePlaceholderView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)loadView;
- (id)placeholderMessage;
- (id)placeholderTitle;
- (void)setPlaceholderMessage:(id)arg1;
- (void)setPlaceholderTitle:(id)arg1;
- (void)viewWillLayoutSubviews;

@end