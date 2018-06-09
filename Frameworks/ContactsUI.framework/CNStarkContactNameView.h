/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkContactNameView : UIView {
    UILabel * _nameLabel;
    UIImageView * _photoImageView;
}

@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UIImageView *photoImageView;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)photoImageView;
- (void)setNameLabel:(id)arg1;
- (void)setPhotoImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
