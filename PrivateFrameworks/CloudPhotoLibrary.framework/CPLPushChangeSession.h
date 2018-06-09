/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)shortDescription;

- (void)commitChangeBatch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(id /* block */)arg2;
- (id)initWithLibraryManager:(id)arg1;

@end
