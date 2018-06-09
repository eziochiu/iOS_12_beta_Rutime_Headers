/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)arg1;

@end