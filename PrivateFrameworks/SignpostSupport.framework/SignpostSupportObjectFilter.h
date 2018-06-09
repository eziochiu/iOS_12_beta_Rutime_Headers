/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportObjectFilter : NSObject {
    id /* block */  _filterBlock;
}

@property (nonatomic, readonly, copy) id /* block */ filterBlock;

- (void).cxx_destruct;
- (id /* block */)filterBlock;
- (id)initWithFilterBlock:(id /* block */)arg1;
- (bool)passesObject:(id)arg1;

@end
