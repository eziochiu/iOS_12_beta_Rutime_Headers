/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICardLayout : NSObject {
    SKUICardViewElement * _cardViewElement;
    bool  _hasBackground;
    SKUIViewElementLayoutContext * _layoutContext;
}

@property (nonatomic, readonly) SKUICardViewElement *cardViewElement;
@property (nonatomic, readonly) double horizontalContentInset;
@property (nonatomic, readonly) SKUIViewElementLayoutContext *layoutContext;
@property (nonatomic, readonly) long long layoutStyle;

+ (bool)allowsViewElement:(id)arg1;
+ (id)layoutWithCardViewElement:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)attributedStringForButton:(id)arg1;
- (id)attributedStringForLabel:(id)arg1;
- (double)bottomInsetForLastViewElement:(id)arg1 width:(double)arg2;
- (id)cardViewElement;
- (double)horizontalContentInset;
- (id)layoutContext;
- (long long)layoutStyle;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;
- (double)topInsetForViewElement:(id)arg1 previousViewElement:(id)arg2 width:(double)arg3;

@end
