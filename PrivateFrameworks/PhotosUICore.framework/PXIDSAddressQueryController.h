/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate> {
    id /* block */  _completionHandler;
    IDSBatchIDQueryController * _idsBatchIDQueryController;
    NSMutableArray * _queries;
    NSMutableDictionary * _queryStateForAddress;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (id)init;
- (void)performBatchQueryForAddresses:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
