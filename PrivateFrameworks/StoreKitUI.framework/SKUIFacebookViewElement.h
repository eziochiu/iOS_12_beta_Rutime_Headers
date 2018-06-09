/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFacebookViewElement : SKUIViewElement {
    long long  _facebookType;
    NSString * _urlString;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) long long facebookType;

- (void).cxx_destruct;
- (id)URLString;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)facebookType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
