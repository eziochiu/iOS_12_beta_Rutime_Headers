/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderDisplayView : CNContactHeaderView <CNUIReusableView> {
    NSString * _alternateName;
    NSLayoutConstraint * _avatarNameSpacingConstraint;
    CNContactFormatter * _contactFormatter;
    double  _lastViewWidth;
    double  _maxHeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxNameSize;
    NSString * _message;
    double  _minHeight;
    UIView * _personHeaderView;
    NSLayoutConstraint * _photoHeightConstraint;
    NSLayoutConstraint * _photoTopConstraint;
    UILabel * _taglineLabel;
    NSDictionary * _taglineTextAttributes;
}

@property (nonatomic, retain) NSString *alternateName;
@property (retain) NSLayoutConstraint *avatarNameSpacingConstraint;
@property (nonatomic) unsigned long long avatarStyle;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastViewWidth;
@property (nonatomic) double maxHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } maxNameSize;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) double minHeight;
@property (nonatomic, retain) UIView *personHeaderView;
@property (retain) NSLayoutConstraint *photoHeightConstraint;
@property (nonatomic, readonly) double photoLabelSpacing;
@property (nonatomic, readonly) double photoMinTopMargin;
@property (retain) NSLayoutConstraint *photoTopConstraint;
@property (readonly) Class superclass;
@property (retain) UILabel *taglineLabel;
@property (nonatomic, copy) NSDictionary *taglineTextAttributes;

+ (id)contactHeaderViewWithContact:(id)arg1 allowsPhotoDrops:(bool)arg2 delegate:(id)arg3;
+ (id)contactHeaderViewWithContact:(id)arg1 delegate:(id)arg2;
+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(bool)arg2;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(bool)arg2 shouldAllowImageDrops:(bool)arg3;

- (void).cxx_destruct;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (void)_updatePhotoView;
- (id)alternateName;
- (id)avatarNameSpacingConstraint;
- (unsigned long long)avatarStyle;
- (void)calculateLabelSizes;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contactFormatter;
- (void)copy:(id)arg1;
- (id)descriptorForRequiredKeys;
- (void)disablePhotoTapGesture;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 delegate:(id)arg3;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 monogrammerStyle:(long long)arg3 shouldAllowImageDrops:(bool)arg4 delegate:(id)arg5;
- (double)lastViewWidth;
- (void)layoutSubviews;
- (double)maxHeight;
- (struct CGSize { double x1; double x2; })maxNameSize;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (double)minHeight;
- (id)personHeaderView;
- (id)photoHeightConstraint;
- (double)photoLabelSpacing;
- (double)photoMinTopMargin;
- (id)photoTopConstraint;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAvatarNameSpacingConstraint:(id)arg1;
- (void)setAvatarStyle:(unsigned long long)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setLastViewWidth:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMaxNameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMessage:(id)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPhotoHeightConstraint:(id)arg1;
- (void)setPhotoTopConstraint:(id)arg1;
- (void)setTaglineLabel:(id)arg1;
- (void)setTaglineTextAttributes:(id)arg1;
- (id)taglineLabel;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateSizeDependentAttributes;

@end
