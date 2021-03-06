/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProxyOperationQueue : NSOperationQueue {
    CKDClientProxy * _proxy;
}

@property (nonatomic) CKDClientProxy *proxy;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)initWithProxy:(id)arg1;
- (id)proxy;
- (void)setProxy:(id)arg1;

@end
