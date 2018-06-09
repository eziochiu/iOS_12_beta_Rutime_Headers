/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMComposeRecipientTableViewCell : UITableViewCell {
    UIImageView * _accessoryImageView;
    UIView * _avatarView;
    bool  _checked;
    CNContact * _contact;
    UIView * _contactAvatarView;
    CNAvatarViewController * _contactAvatarViewController;
    int  _currentRequestID;
    PXRoundImageView * _customAvatarImageView;
    NSString * _displayName;
    UILabel * _displayNameLabel;
    UIImage * _faceImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _faceImageViewSize;
    double  _inset;
    UIView * _popoverSourceView;
    UIColor * _textColor;
    NSString * _transport;
    UILabel * _transportLabel;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) int currentRequestID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) UIImage *faceImage;
@property (nonatomic) struct CGSize { double x1; double x2; } faceImageViewSize;
@property (nonatomic) double inset;
@property (nonatomic, retain) UIView *popoverSourceView;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *transport;

- (void).cxx_destruct;
- (void)_updateAccessoryImageView;
- (void)_updateAvatarView;
- (void)_updateDisplayNameLabel;
- (void)_updateLayout;
- (void)_updateTransportLabel;
- (id)contact;
- (int)currentRequestID;
- (id)displayName;
- (id)faceImage;
- (struct CGSize { double x1; double x2; })faceImageViewSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)inset;
- (bool)isChecked;
- (void)layoutSubviews;
- (id)popoverSourceView;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setContact:(id)arg1;
- (void)setCurrentRequestID:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFaceImage:(id)arg1;
- (void)setFaceImageViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInset:(double)arg1;
- (void)setPopoverSourceView:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)textColor;
- (id)transport;

@end
