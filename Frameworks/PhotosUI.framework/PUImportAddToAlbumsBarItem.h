/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUImportAddToAlbumsBarItem : UIBarButtonItem <UIPopoverPresentationControllerDelegate> {
    PUImportAddToAlbumsToolbarViewController * _addToAlbumsToolbarViewController;
    PUImportAddToAlbumsPickerViewController * _albumsPickerViewController;
    NSString * _destinationCollectionTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *destinationCollectionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_navigationViewControllerForViewController:(id)arg1;
- (void)_updateAccessibilityLabel;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)destinationCollection;
- (id)destinationCollectionTitle;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentPopOver:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)setDestinationCollectionTitle:(id)arg1;

@end
