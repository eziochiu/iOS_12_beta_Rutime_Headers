/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUISharingInterfaceActivityViewController : UIActivityViewController {
    TVImageProxy * _imageProxy;
    NSURL * _itemImageURL;
    NSString * _itemSubtitle;
    NSString * _itemTitle;
    LPMetadataProvider * _pendingMessageMetadataProvider;
    NSURL * _sharingURL;
}

@property (nonatomic, retain) NSURL *itemImageURL;
@property (nonatomic, retain) NSString *itemSubtitle;
@property (nonatomic, retain) NSString *itemTitle;

- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (id)itemImageURL;
- (id)itemSubtitle;
- (id)itemTitle;
- (void)setItemImageURL:(id)arg1;
- (void)setItemSubtitle:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
