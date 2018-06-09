/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPeerPaymentZeroBalanceView : PKPassFooterContentView {
    PKContinuousButton * _addMoneyButton;
    PKGlyphView * _alertGlyph;
    UILabel * _alertLabel;
    PKPass * _pass;
}

- (void).cxx_destruct;
- (void)addMoneyToCardTapped;
- (void)createSubviews;
- (id)initWithPass:(id)arg1;
- (void)layoutSubviews;

@end
