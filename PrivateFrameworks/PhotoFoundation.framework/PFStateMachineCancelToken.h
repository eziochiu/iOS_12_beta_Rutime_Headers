/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachineCancelToken : NSObject {
    bool  _isCancelled;
}

- (void)cancel;
- (bool)isCancelled;

@end
