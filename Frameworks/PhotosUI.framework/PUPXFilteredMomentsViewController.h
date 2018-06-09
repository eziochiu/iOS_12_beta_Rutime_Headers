/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController <PXChangeObserver> {
    UIViewController * _containerViewController;
    <PXGridPresentationNavigationItemDelegate> * _navigationItemDelegate;
}

@property (nonatomic) UIViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXGridPresentationNavigationItemDelegate> *navigationItemDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)containerViewController;
- (void)getEmptyPlaceholderViewTitle:(id*)arg1 message:(id*)arg2 buttonTitle:(id*)arg3 buttonAction:(id /* block */*)arg4;
- (bool)isInPlaces:(id)arg1;
- (void)loadView;
- (id)navigationItemDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings { long long x1; double x2; })arg1;
- (void)setContainerViewController:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNavigationItemDelegate:(id)arg1;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)viewDidLoad;

@end
