/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCommentsViewController : UIViewController <PUAccessoryContentViewController, PUAssetViewModelChangeObserver, PUCommentsTableDataControllerDelegate, PXChangeObserver> {
    bool  __needsUpdateTableViewScrollPosition;
    PUCommentsTableDataController * __tableDataController;
    UITableView * __tableView;
    <PUAccessoryContentViewControllerDelegate> * _accessoryContentViewControllerDelegate;
    PUAssetViewModel * _assetViewModel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
}

@property (setter=_setNeedsUpdateTableViewScrollPosition:, nonatomic) bool _needsUpdateTableViewScrollPosition;
@property (nonatomic, readonly) PUCommentsTableDataController *_tableDataController;
@property (nonatomic, readonly) UITableView *_tableView;
@property (nonatomic) <PUAccessoryContentViewControllerDelegate> *accessoryContentViewControllerDelegate;
@property (nonatomic, readonly) PUAssetViewModel *assetViewModel;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumContentSize;
@property (readonly) Class superclass;

+ (bool)canShowCommentsForAsset:(id)arg1;

- (void).cxx_destruct;
- (bool)_needsUpdateTableViewScrollPosition;
- (void)_setNeedsUpdateTableViewScrollPosition:(bool)arg1;
- (id)_tableDataController;
- (id)_tableView;
- (void)_updateTableDataController;
- (id)accessoryContentViewControllerDelegate;
- (id)assetViewModel;
- (void)commentsTableDataController:(id)arg1 didChangeEditing:(bool)arg2;
- (void)commentsTableDataController:(id)arg1 presentViewController:(id)arg2;
- (void)commentsTableDataController:(id)arg1 tableViewDidScroll:(id)arg2;
- (bool)contentAreaContainsPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBoundsInCoordinateSpace:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithAssetViewModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })minimumContentSize;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAccessoryContentViewControllerDelegate:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 changeReason:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
