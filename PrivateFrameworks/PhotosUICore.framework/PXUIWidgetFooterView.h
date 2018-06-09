/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIWidgetFooterView : UIView {
    NSArray * __constraints;
    UIButton * __disclosureButton;
    UIFocusGuide * __focusGuide;
    bool  __hasContent;
    UIView * __leadingSeparator;
    UIView * __trailingSeparator;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <PXUIWidgetFooterViewDelegate> * _delegate;
    struct { 
        bool didSelectDisclosure; 
    }  _delegateRespondsTo;
    NSString * _disclosureTitle;
    UIFont * _font;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    long long  _layoutStyle;
    struct { 
        bool hasContent; 
        bool disclosure; 
        bool separators; 
        bool focusGuide; 
    }  _needsUpdateFlags;
}

@property (setter=_setConstraints:, nonatomic, copy) NSArray *_constraints;
@property (nonatomic, readonly) UIButton *_disclosureButton;
@property (nonatomic, readonly) UIFocusGuide *_focusGuide;
@property (setter=_setHasContent:, nonatomic) bool _hasContent;
@property (nonatomic, readonly) UIView *_leadingSeparator;
@property (nonatomic, readonly) UIView *_trailingSeparator;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) <PXUIWidgetFooterViewDelegate> *delegate;
@property (nonatomic, copy) NSString *disclosureTitle;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long layoutStyle;

- (void).cxx_destruct;
- (id)_constraints;
- (id)_disclosureButton;
- (id)_disclosureButtonCreateIfNeeded:(bool)arg1;
- (id)_focusGuide;
- (id)_focusGuideCreateIfNeeded:(bool)arg1;
- (void)_handleDisclosureButton:(id)arg1;
- (bool)_hasContent;
- (void)_invalidateDisclosure;
- (void)_invalidateFocusGuide;
- (void)_invalidateHasContent;
- (void)_invalidateSeparators;
- (id)_leadingSeparator;
- (id)_leadingSeparatorCreateIfNeeded:(bool)arg1;
- (bool)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setHasContent:(bool)arg1;
- (void)_setNeedsUpdate;
- (id)_trailingSeparator;
- (id)_trailingSeparatorCreateIfNeeded:(bool)arg1;
- (void)_updateDisclosureIfNeeded;
- (void)_updateFocusGuideIfNeeded;
- (void)_updateHasContentIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeparatorsIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)delegate;
- (id)disclosureTitle;
- (id)font;
- (long long)layoutStyle;
- (void)performChanges:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureTitle:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)updateConstraints;

@end
