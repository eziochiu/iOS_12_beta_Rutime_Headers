/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemUpdateRequest : NSObject {
    NSSet * _itemsProvidersToReload;
    NSSet * _itemsToUpdate;
    SEL  _senderSelector;
}

@property (nonatomic, readonly) NSSet *itemsProvidersToReload;
@property (nonatomic, readonly) NSSet *itemsToUpdate;
@property (nonatomic, readonly) SEL senderSelector;

+ (id)requestToReloadItemProviders:(id)arg1 senderSelector:(SEL)arg2;
+ (id)requestToUpdateItems:(id)arg1 senderSelector:(SEL)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItemProviders:(id)arg1 items:(id)arg2 senderSelector:(SEL)arg3;
- (id)itemsProvidersToReload;
- (id)itemsToUpdate;
- (SEL)senderSelector;

@end
