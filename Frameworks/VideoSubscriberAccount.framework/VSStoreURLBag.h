/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStoreURLBag : NSObject {
    SSURLBag * _bag;
}

@property (nonatomic, retain) SSURLBag *bag;

- (void).cxx_destruct;
- (id)bag;
- (id)init;
- (void)invalidateCache;
- (void)loadValueForKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setBag:(id)arg1;

@end
