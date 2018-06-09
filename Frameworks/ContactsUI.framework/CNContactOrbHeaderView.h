/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactOrbHeaderView : UIView {
    NSString * _alternateName;
    bool  _alwaysShowsMonogram;
    bool  _centersPhotoAndLabels;
    CNContactFormatter * _contactFormatter;
    NSArray * _contacts;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentMargins;
    UILabel * _fakeTaglineAlignmentLabel;
    NSMutableArray * _headerConstraints;
    UIView * _markerView;
    NSString * _message;
    UILabel * _nameLabel;
    NSDictionary * _nameTextAttributes;
    CNContactPhotoView * _photoView;
    UILabel * _taglineLabel;
    NSDictionary * _taglineTextAttributes;
}

@property (nonatomic, retain) NSString *alternateName;
@property (nonatomic) bool alwaysShowsMonogram;
@property (nonatomic) bool centersPhotoAndLabels;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentMargins;
@property (nonatomic, retain) UILabel *fakeTaglineAlignmentLabel;
@property (nonatomic, retain) NSMutableArray *headerConstraints;
@property (nonatomic, retain) UIView *markerView;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic, readonly) double photoLabelSpacing;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic, retain) UILabel *taglineLabel;
@property (nonatomic, copy) NSDictionary *taglineTextAttributes;

+ (id)descriptorForRequiredKeysForContactFormatter:(id)arg1 includingAvatarViewDescriptors:(bool)arg2;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(bool)arg1;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)_headerStringForContacts:(id)arg1;
- (id)_taglineStringForContacts:(id)arg1;
- (id)alternateName;
- (bool)alwaysShowsMonogram;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)centersPhotoAndLabels;
- (id)contactFormatter;
- (id)contacts;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargins;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)fakeTaglineAlignmentLabel;
- (void)handleNameLabelLongPress:(id)arg1;
- (id)headerConstraints;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 monogrammerStyle:(long long)arg3;
- (id)markerView;
- (void)menuWillHide:(id)arg1;
- (id)message;
- (id)nameLabel;
- (id)nameTextAttributes;
- (double)photoLabelSpacing;
- (id)photoView;
- (void)reloadData;
- (void)setAlternateName:(id)arg1;
- (void)setAlwaysShowsMonogram:(bool)arg1;
- (void)setCentersPhotoAndLabels:(bool)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFakeTaglineAlignmentLabel:(id)arg1;
- (void)setHeaderConstraints:(id)arg1;
- (void)setMarkerView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setTaglineLabel:(id)arg1;
- (void)setTaglineTextAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)taglineLabel;
- (id)taglineTextAttributes;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)arg1;

@end
