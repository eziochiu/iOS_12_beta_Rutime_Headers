/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCBackgroundThreadManager : NSObject {
    unsigned long long  mBlockCount;
    <TCCancelDelegate> * mCancelDelegate;
    NSObject<OS_dispatch_group> * mGroup;
    bool  mIsWaiting;
    TCMessageContext * mMessageContext;
    TCProgressContext * mProgressContext;
    NSObject<OS_dispatch_queue> * mProgressReportingQueue;
    NSObject<OS_dispatch_queue> * mQueue;
}

@property (readonly) bool isCancelled;
@property (retain) TCMessageContext *messageContext;
@property (retain) TCProgressContext *progressContext;

- (void)addASyncBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
- (bool)isCancelled;
- (id)messageContext;
- (id)progressContext;
- (void)reportWarning:(id)arg1;
- (void)setMessageContext:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)waitUntilComplete;

@end
