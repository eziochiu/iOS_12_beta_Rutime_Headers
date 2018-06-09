/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter> {
    NSOperationQueue * _accessQueue;
    FCAsyncSerialQueue * _accessSynchronizationQueue;
    NSSet * _allowedClasses;
    NSURL * _fileURL;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
}

@property (nonatomic, readonly) NSOperationQueue *accessQueue;
@property (nonatomic, readonly) FCAsyncSerialQueue *accessSynchronizationQueue;
@property (nonatomic, readonly, copy) NSSet *allowedClasses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessQueue;
- (id)accessSynchronizationQueue;
- (id)allowedClasses;
- (id)fileURL;
- (id)init;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)readWithAccessor:(id /* block */)arg1;
- (void)writeWithAccessor:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
