/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWishlistAddItemsRequest : SSRequest {
    NSString * _caller;
    NSArray * _items;
    NSString * _version;
}

@property (readonly, copy) NSString *caller;
@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)_convertedValueForValue:(id)arg1;
- (id)caller;
- (id)copyQueryStringParameters;
- (id)copyXPCEncoding;
- (id)init;
- (id)initWithItems:(id)arg1 caller:(id)arg2 version:(id)arg3;
- (id)initWithXPCEncoding:(id)arg1;
- (id)items;
- (void)startWithAddItemsResponseBlock:(id /* block */)arg1;
- (id)version;

@end
