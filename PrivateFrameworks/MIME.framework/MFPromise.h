/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPromise : NSObject <MFCancelable> {
    MFFuture * _future;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MFFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)promise;

- (void)cancel;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)future;
- (id)init;
- (bool)respondsToSelector:(SEL)arg1;

@end
