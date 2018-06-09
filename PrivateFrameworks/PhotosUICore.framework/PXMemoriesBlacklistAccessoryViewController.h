/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController {
    UIView * _accessoryView;
    NSArray * _constraints;
    PXMemoriesBlacklistAccessoryViewSpec * _viewSpec;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (setter=_setConstraints:, nonatomic, copy) NSArray *constraints;
@property (nonatomic, retain) PXMemoriesBlacklistAccessoryViewSpec *viewSpec;

- (void).cxx_destruct;
- (void)_setConstraints:(id)arg1;
- (id)accessoryView;
- (id)constraints;
- (void)didReceiveMemoryWarning;
- (id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAccessoryView:(id)arg1;
- (void)setViewSpec:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)viewSpec;

@end
