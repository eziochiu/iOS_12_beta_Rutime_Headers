/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOfferView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIViewElementView> {
    unsigned long long  _alignment;
    NSMapTable * _buttonElements;
    NSMapTable * _buyButtonDescriptorToButton;
    bool  _compactModeEnabled;
    <SKUIOfferViewDelegate> * _delegate;
    NSNumber * _hlsID;
    UIButton * _hlsPlayButton;
    long long  _metadataPosition;
    NSMutableArray * _metadataViews;
    NSMapTable * _notices;
    NSMutableArray * _offerButtonViews;
    bool  _showingConfirmation;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic, retain) NSMapTable *buttonElements;
@property (nonatomic, retain) NSMapTable *buyButtonDescriptorToButton;
@property (getter=isCompactModeEnabled, nonatomic) bool compactModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIOfferViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *hlsID;
@property (nonatomic, retain) UIButton *hlsPlayButton;
@property (nonatomic) long long metadataPosition;
@property (nonatomic, retain) NSMutableArray *metadataViews;
@property (nonatomic, retain) NSMapTable *notices;
@property (nonatomic, retain) NSMutableArray *offerButtonViews;
@property (nonatomic, readonly) NSString *offerViewStateDescription;
@property (getter=isShowingConfirmation, nonatomic) bool showingConfirmation;
@property (readonly) Class superclass;

+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_sendWillAnimate;
- (bool)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg1 context:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (unsigned long long)alignment;
- (id)buttonElements;
- (id)buyButtonDescriptorToButton;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hlsID;
- (id)hlsPlayButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompactModeEnabled;
- (bool)isShowingConfirmation;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (long long)metadataPosition;
- (id)metadataViews;
- (id)notices;
- (id)offerButtonViews;
- (id)offerViewStateDescription;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setButtonElements:(id)arg1;
- (void)setBuyButtonDescriptorToButton:(id)arg1;
- (void)setCompactModeEnabled:(bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHlsID:(id)arg1;
- (void)setHlsPlayButton:(id)arg1;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setMetadataPosition:(long long)arg1;
- (void)setMetadataViews:(id)arg1;
- (void)setNotices:(id)arg1;
- (void)setOfferButtonViews:(id)arg1;
- (void)setShowingConfirmation:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
