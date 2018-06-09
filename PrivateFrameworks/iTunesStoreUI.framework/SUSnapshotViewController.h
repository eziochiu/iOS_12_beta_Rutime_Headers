/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSnapshotViewController : UIViewController {
    UIImageView * _imageView;
    UIViewController * _originalViewController;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIViewController *originalViewController;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithOriginal:(id)arg1;
- (id)originalViewController;
- (void)setImageView:(id)arg1;
- (void)setOriginalViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
