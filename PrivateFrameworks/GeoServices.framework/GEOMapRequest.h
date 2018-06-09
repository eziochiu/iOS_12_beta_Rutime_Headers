/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapRequest : NSObject {
    id /* block */  _cancellationHandler;
    id /* block */  _completionHandler;
    bool  _isFinished;
    GEOMapRequestManager * _requestManager;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) bool isFinished;

- (void).cxx_destruct;
- (void)_finishAndCallHandler:(id /* block */)arg1;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (void)complete;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (bool)isFinished;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
