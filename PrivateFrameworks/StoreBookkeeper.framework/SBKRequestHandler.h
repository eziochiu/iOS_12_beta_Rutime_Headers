/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKRequestHandler : NSObject {
    SBKStoreURLBagContext * _bagContext;
}

@property (nonatomic, readonly) SBKStoreURLBagContext *bagContext;

- (void).cxx_destruct;
- (id)bagContext;
- (void)cancel;
- (id)initWithBagContext:(id)arg1;
- (void)timeout;

@end
