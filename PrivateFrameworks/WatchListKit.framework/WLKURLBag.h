/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKURLBag : NSObject {
    SSURLBag * _impl;
}

+ (id)URLBagForContext:(id)arg1;

- (void).cxx_destruct;
- (id)URLBagContext;
- (id)existingBagDictionary;
- (id)initWithURLBagContext:(id)arg1;
- (void)invalidate;
- (void)loadValueForKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadWithCompletionBlock:(id /* block */)arg1;
- (id)valueForKey:(id)arg1 error:(id*)arg2;

@end
