/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIAppsGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIViewControllerTransitioningDelegate> {
    NSArray * _apps;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _layout;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSArray *apps;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_collectionViewClass;
- (id)apps;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
- (void)setApps:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
