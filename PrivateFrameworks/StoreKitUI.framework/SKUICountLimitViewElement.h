/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountLimitViewElement : SKUILimitViewElement {
    NSString * _entityTypeString;
    long long  _limitValue;
}

@property (nonatomic, readonly, copy) NSString *entityTypeString;
@property (nonatomic, readonly) long long limitValue;

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)entityTypeString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)limitValue;

@end
