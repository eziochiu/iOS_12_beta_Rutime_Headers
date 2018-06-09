/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFMapSession : NSObject {
    NSXPCConnection * _connection;
    FMFMapCache * _mapCache;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) FMFMapCache *mapCache;

+ (id)newConnection;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (void)gridImageForScreenRatio:(double)arg1 andCompletion:(id /* block */)arg2;
- (void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(bool)arg3 andCompletion:(id /* block */)arg4;
- (id)mapCache;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(id /* block */)arg5;
- (void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(bool)arg6 andCompletion:(id /* block */)arg7;
- (void)mapImageForRequest:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(id /* block */)arg2;
- (void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(bool)arg3 andCompletion:(id /* block */)arg4;
- (void)setConnection:(id)arg1;
- (void)setMapCache:(id)arg1;

@end
