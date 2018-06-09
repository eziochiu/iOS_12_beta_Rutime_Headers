/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRequestContext : NSObject {
    int  _concurrencyBehavior;
    SGServiceContext * _serviceContext;
}

@property (nonatomic, readonly) int concurrencyBehavior;
@property (nonatomic, readonly) NSOperationQueue *processingQueue;
@property (nonatomic, readonly) SGServiceContext *serviceContext;
@property (nonatomic, readonly) NSOperationQueue *storageQueue;

- (void).cxx_destruct;
- (int)concurrencyBehavior;
- (id)init;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2;
- (id)processingQueue;
- (id)serviceContext;
- (id)storageQueue;

@end
