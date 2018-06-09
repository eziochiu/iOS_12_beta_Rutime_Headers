/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBuyButtonDescriptor : NSObject {
    NSString * _buttonText;
    long long  _buttonType;
    NSString * _confirmationText;
    unsigned long long  _elementType;
    bool  _highlighted;
    long long  _itemIdentifier;
    long long  _progressType;
    bool  _shouldSuppressCloudRestore;
    bool  _shouldSuppressEnabled;
    bool  _showingConfirmation;
    bool  _showsUniversal;
    SKUIStoreIdentifier * _storeIdentifier;
    NSString * _variantIdentifier;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic) long long buttonType;
@property (nonatomic, copy) NSString *confirmationText;
@property (nonatomic) unsigned long long elementType;
@property (nonatomic) bool highlighted;
@property (nonatomic) long long itemIdentifier;
@property (nonatomic) long long progressType;
@property (nonatomic) bool shouldSuppressCloudRestore;
@property (nonatomic) bool shouldSuppressEnabled;
@property (nonatomic) bool showingConfirmation;
@property (nonatomic) bool showsUniversal;
@property (nonatomic, retain) SKUIStoreIdentifier *storeIdentifier;
@property (nonatomic, retain) NSString *variantIdentifier;

- (void).cxx_destruct;
- (id)buttonText;
- (long long)buttonType;
- (bool)canPerformLocalActionWithItemState:(id)arg1;
- (bool)canPersonalizeUsingItemState:(id)arg1;
- (id)confirmationText;
- (unsigned long long)elementType;
- (bool)highlighted;
- (long long)itemIdentifier;
- (long long)progressType;
- (void)setButtonText:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setConfirmationText:(id)arg1;
- (void)setElementType:(unsigned long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setProgressType:(long long)arg1;
- (void)setShouldSuppressCloudRestore:(bool)arg1;
- (void)setShouldSuppressEnabled:(bool)arg1;
- (void)setShowingConfirmation:(bool)arg1;
- (void)setShowsUniversal:(bool)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setVariantIdentifier:(id)arg1;
- (bool)shouldSuppressCloudRestore;
- (bool)shouldSuppressEnabled;
- (bool)showingConfirmation;
- (bool)showsUniversal;
- (id)storeIdentifier;
- (id)variantIdentifier;

@end
