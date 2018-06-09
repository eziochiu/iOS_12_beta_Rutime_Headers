/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackFileRadarViewController : UINavigationController {
    unsigned long long  _collectionType;
    id /* block */  _completionHandler;
}

@property (nonatomic, readonly) unsigned long long collectionType;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleRadarFiledWithError:(id)arg1;
- (void)_handleUserCancel:(id)arg1;
- (void)_handleUserConfirmation;
- (unsigned long long)collectionType;
- (id /* block */)completionHandler;
- (id)initWithCollectionType:(unsigned long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
