/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUITableViewCell : UITableViewCell {
    UIColor * _accessoryColor;
    bool  _activityIndicatorVisible;
    UIButton * _detailLinkButton;
    id /* block */  _detailLinkHandler;
    bool  _didSetupEditableTextFieldLargeText;
    bool  _forceFullSizeDetailLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _invalidRowView;
    bool  _leftAlignDetailLabel;
    long long  _remoteUIAccessoryType;
    UIView * _remoteUIAccessoryView;
    RUIWebContainerView * _webContainerView;
}

@property (nonatomic) bool activityIndicatorVisible;
@property (nonatomic) bool forceFullSizeDetailLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool leftAlignDetailLabel;
@property (nonatomic) long long remoteUIAccessoryType;
@property (nonatomic, retain) UIView *remoteUIAccessoryView;
@property (nonatomic, retain) RUIWebContainerView *webContainerView;

- (void).cxx_destruct;
- (void)_accessoriesChanged;
- (id)_checkmarkImage:(bool)arg1;
- (void)_detailLinkPressed;
- (id)_disclosureChevronImage:(bool)arg1;
- (void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2;
- (void)_showActivityIndicatorAccessory;
- (bool)activityIndicatorVisible;
- (id)detailLinkButton;
- (id)editableTextField;
- (bool)forceFullSizeDetailLabel;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)layoutSubviews;
- (bool)leftAlignDetailLabel;
- (void)prepareForReuse;
- (long long)remoteUIAccessoryType;
- (id)remoteUIAccessoryView;
- (void)setActivityIndicatorVisible:(bool)arg1;
- (void)setDetailLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setForceFullSizeDetailLabel:(bool)arg1;
- (void)setHTMLData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeftAlignDetailLabel:(bool)arg1;
- (void)setRemoteUIAccessoryType:(long long)arg1;
- (void)setRemoteUIAccessoryView:(id)arg1;
- (void)setRowInvalid:(bool)arg1;
- (void)setWebContainerView:(id)arg1;
- (id)webContainerView;

@end
