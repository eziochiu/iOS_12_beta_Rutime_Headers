/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemFetcher : NSObject <NSSecureCoding> {
    long long  _fetchingState;
    NSMapTable * _observersToBlocks;
}

@property (nonatomic) long long fetchingState;
@property (readonly) NSNumber *itemSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (bool)canBeCanceled;
- (void)cancelFetch;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchedContent;
- (long long)fetchingState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLongFetchOperation;
- (id)itemSize;
- (id)newItemProvider;
- (void)prepareShareableItem:(id /* block */)arg1;
- (void)registerObserver:(id)arg1 withBlock:(id /* block */)arg2;
- (void)setFetchingState:(long long)arg1;
- (id)shareableItem;
- (void)unregisterObserver:(id)arg1;

@end
