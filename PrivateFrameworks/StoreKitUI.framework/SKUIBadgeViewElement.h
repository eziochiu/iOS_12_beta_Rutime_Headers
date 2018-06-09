/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBadgeViewElement : SKUIViewElement {
    UIImage * _fallbackImage;
    bool  _hasValidFallbackImage;
    NSString * _resourceName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _text;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) long long badgeType;
@property (nonatomic, readonly) UIImage *fallbackImage;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)attributedString;
- (long long)badgeType;
- (id)fallbackImage;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)resourceName;
- (struct CGSize { double x1; double x2; })size;

@end
