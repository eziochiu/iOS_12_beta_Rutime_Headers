/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRemoveFromWishlistOperation : NSOperation {
    long long  _entityID;
    long long  _itemID;
    long long  _reason;
}

- (id)initWithItemIdentifier:(long long)arg1 entityIdentifier:(long long)arg2 reason:(long long)arg3;
- (void)main;

@end
