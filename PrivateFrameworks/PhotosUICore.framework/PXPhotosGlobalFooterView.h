/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosGlobalFooterView : UICollectionReusableView <PXChangeObserver, PXMutablePhotosGlobalFooterView, UITextViewDelegate> {
    UIView * _accessoryView;
    id /* block */  _action;
    NSString * _actionConfirmationAlertButtonTitle;
    NSString * _actionConfirmationAlertTitle;
    long long  _actionStyle;
    NSString * _actionTitle;
    double  _currentHeight;
    <PXPhotosGlobalFooterViewDelegate> * _delegate;
    bool  _isPerformingChanges;
    bool  _isPresentingAlert;
    <PXPhotosGlobalFooterViewLayoutDelegate> * _layoutDelegate;
    struct { 
        bool title; 
        bool subtitle1; 
        bool subtitle2; 
        bool progress; 
        bool layout; 
    }  _needToUpdate;
    bool  _paused;
    double  _progress;
    UIProgressView * _progressView;
    NSString * _subtitle1;
    UITextView * _subtitle1TextView;
    NSString * _subtitle2;
    UILabel * _subtitle2Label;
    NSString * _title;
    UILabel * _titleLabel;
    PXPhotosGlobalFooterViewModel * _viewModel;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) NSString *actionConfirmationAlertButtonTitle;
@property (nonatomic, copy) NSString *actionConfirmationAlertTitle;
@property (nonatomic) long long actionStyle;
@property (nonatomic, copy) NSString *actionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosGlobalFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosGlobalFooterViewLayoutDelegate> *layoutDelegate;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) double progress;
@property (nonatomic, copy) NSString *subtitle1;
@property (nonatomic, copy) NSString *subtitle2;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) PXPhotosGlobalFooterViewModel *viewModel;

- (void).cxx_destruct;
- (id)_attributedStringForInputString:(id)arg1 actionTitle:(id)arg2 textAttributes:(id)arg3 linkTextAttributes:(id)arg4;
- (void)_configurePhotoCollectionGlobalFooterLabel:(id)arg1 withFont:(id)arg2 textColor:(id)arg3;
- (void)_configurePhotoCollectionGlobalFooterProgressView:(id)arg1 paused:(bool)arg2;
- (void)_configurePhotoCollectionGlobalFooterSubtitleLabel:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterSubtitleTextView:(id)arg1;
- (void)_configurePhotoCollectionGlobalFooterTitleLabel:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_invalidateLayout;
- (void)_invalidateProgress;
- (void)_invalidateSubtitle1;
- (void)_invalidateSubtitle2;
- (void)_invalidateTitle;
- (bool)_needsUpdate;
- (id)_photoCollectionGlobalFooterSubtitleTextViewAttributesDisabled:(bool)arg1;
- (id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Color;
- (id)_photoCollectionGlobalFooterSubtitleTextViewLinkTextAttributes_Font;
- (void)_updateIfNeeded;
- (void)_updateLayout;
- (void)_updateLayoutIfNeeded;
- (void)_updateProgress;
- (void)_updateProgressIfNeeded;
- (void)_updateSubtitle1;
- (void)_updateSubtitle1IfNeeded;
- (void)_updateSubtitle2;
- (void)_updateSubtitle2IfNeeded;
- (void)_updateTitle;
- (void)_updateTitleIfNeeded;
- (id)accessoryView;
- (id /* block */)action;
- (id)actionConfirmationAlertButtonTitle;
- (id)actionConfirmationAlertTitle;
- (long long)actionStyle;
- (id)actionTitle;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPaused;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (double)progress;
- (void)setAccessoryView:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setActionConfirmationAlertButtonTitle:(id)arg1;
- (void)setActionConfirmationAlertTitle:(id)arg1;
- (void)setActionStyle:(long long)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle1;
- (id)subtitle2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)title;
- (id)viewModel;

@end
