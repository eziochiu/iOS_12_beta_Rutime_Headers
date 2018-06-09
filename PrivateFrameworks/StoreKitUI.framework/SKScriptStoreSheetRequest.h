/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKScriptStoreSheetRequest : SUScriptObject {
    long long  _pageStyle;
    WebScriptObject * _productParameters;
    NSString * _productURL;
}

@property long long productPageStyle;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStyleBanner;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;
@property (retain) WebScriptObject *productParameters;
@property (retain) NSString *productURL;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)_className;
- (id)_safeValueForValue:(id)arg1;
- (id)attributeKeys;
- (id)newNativeStorePageRequest;
- (long long)productPageStyle;
- (long long)productPageStyleAutomatic;
- (long long)productPageStyleBanner;
- (long long)productPageStylePad;
- (long long)productPageStylePhone;
- (id)productParameters;
- (id)productURL;
- (id)scriptAttributeKeys;
- (void)setProductPageStyle:(long long)arg1;
- (void)setProductParameters:(id)arg1;
- (void)setProductURL:(id)arg1;

@end
