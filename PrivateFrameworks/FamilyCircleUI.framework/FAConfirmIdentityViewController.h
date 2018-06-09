/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAConfirmIdentityViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    ACAccount * _appleAccount;
    UIView * _contentView;
    UIButton * _continueButton;
    <FAConfirmIdentityViewControllerDelegate> * _delegate;
    UILabel * _descriptionLabel;
    UILabel * _emailLabel;
    UIImagePickerController * _imagePicker;
    UILabel * _nameLabel;
    UIImage * _newProfilePicture;
    NSValue * _newProfilePictureCropRect;
    UIView * _profilePhotoView;
    AAUIProfilePictureStore * _profilePictureStore;
    UIScrollView * _scrollView;
    UILabel * _titleLabel;
    UIButton * _useDifferentIDButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAConfirmIdentityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPhotoButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)_photoWasTapped:(id)arg1;
- (void)_presentImagePickerWithSourceType:(long long)arg1;
- (void)_showImagePickerForAvailableSources;
- (void)_showImageSourcePicker;
- (void)_updateFonts;
- (void)_updateViewsInPhotoArea:(id)arg1;
- (void)_useDifferentIDButtonWasTapped:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)continueButtonWasTapped:(id)arg1;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)instructions;
- (void)loadView;
- (id)pageTitle;
- (void)setDelegate:(id)arg1;
- (bool)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
