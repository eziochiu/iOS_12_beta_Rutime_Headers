/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityHorizontalLockupView : MusicEntityAbstractLockupView <MusicEntityContentDescriptorViewConfiguring> {
    MPUHalfTintedTransportButton * _addButton;
    UIImageView * _availableOfflineBadgeImageView;
    UIButton * _checkmarkButton;
    <MusicEntityHorizontalLockupViewDelegate> * _delegate;
    struct { 
        unsigned int didSelectAddButton : 1; 
        unsigned int didSelectPlayButton : 1; 
        unsigned int didLayoutSubviews : 1; 
        unsigned int shouldLayoutAsEditing : 1; 
    }  _delegateRespondsToSelector;
    UIImageView * _explicitBadgeImageView;
    bool  _isAvailableOffline;
    bool  _isContainedWithinSplitViewPrimary;
    double  _textContentLeadingInset;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityHorizontalLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double textContentLeadingInset;

+ (double)defaultTextDescriptorHeightAdditionsForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 artworkSize:(struct CGSize { double x1; double x2; })arg4;
+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 textDescriptorHeightAdditions:(double)arg4 artworkSize:(struct CGSize { double x1; double x2; })arg5;

- (void).cxx_destruct;
- (id)_addButton;
- (void)_addButtonTouchDownInside:(id)arg1;
- (void)_addButtonTouchEntered:(id)arg1;
- (void)_addButtonTouchExited:(id)arg1;
- (void)_addButtonTouchUpInside:(id)arg1;
- (void)_contentDescriptorDidChange:(id)arg1;
- (bool)_shouldLayoutAsEditing;
- (bool)_shouldShowPlayButton;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)contentDescriptor;
- (void)dealloc;
- (id)delegate;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setContentDescriptor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)textContentLeadingInset;
- (void)traitCollectionDidChange:(id)arg1;

@end
