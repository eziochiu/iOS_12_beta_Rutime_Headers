/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCancelerObserver : NSObject <PFCancelerObserver> {
    id /* block */  _block;
}

+ (id)observerForCanceler:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)cancelerWasCanceled:(id)arg1;
- (id)init;
- (id)initWithCanceler:(id)arg1 block:(id /* block */)arg2;

@end
