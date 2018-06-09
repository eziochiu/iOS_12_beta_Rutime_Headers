/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing> {
    id /* block */  _cancelHandler;
    id /* block */  _priorityHandler;
    long long  _relativePriority;
}

@property (nonatomic, copy) id /* block */ cancelHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ priorityHandler;
@property (nonatomic) long long relativePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancelHandler;
- (id /* block */)priorityHandler;
- (long long)relativePriority;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setPriorityHandler:(id /* block */)arg1;
- (void)setRelativePriority:(long long)arg1;

@end
