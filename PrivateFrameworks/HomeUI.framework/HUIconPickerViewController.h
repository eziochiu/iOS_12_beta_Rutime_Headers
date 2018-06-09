/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconPickerViewController : UICollectionViewController {
    <HUIconPickerViewControllerDelegate> * _delegate;
    NSArray * _iconDescriptors;
    <HFIconDescriptor> * _selectedIconDescriptor;
}

@property (nonatomic) <HUIconPickerViewControllerDelegate> *delegate;
@property (nonatomic, readonly) NSArray *iconDescriptors;
@property (nonatomic, retain) <HFIconDescriptor> *selectedIconDescriptor;

+ (id)sceneIconDescriptors;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)iconDescriptors;
- (id)initWithIconDescriptors:(id)arg1 selectedIconDescriptor:(id)arg2 delegate:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)selectedIconDescriptor;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIconDescriptor:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
