/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDCancelToken : NSObject <CKDCancelling> {
    id /* block */  _cancelAction;
    bool  _isCancelled;
}

@property (nonatomic, copy) id /* block */ cancelAction;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancelAction;
- (bool)isCancelled;
- (void)setCancelAction:(id /* block */)arg1;

@end
