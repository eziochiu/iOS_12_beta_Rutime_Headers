/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFCancelationToken : NSObject <MFCancelable, MFCancelationToken> {
    NSMutableArray * _blocks;
    bool  _isCanceled;
    NSLock * _lock;
}

@property (getter=isCanceled, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tokenWithCancelationBlock:(id /* block */)arg1;

- (id)_nts_cancel;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isCanceled;

@end