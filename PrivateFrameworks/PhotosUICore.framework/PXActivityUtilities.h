/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActivityUtilities : NSObject

+ (void)requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(id /* block */)arg6;
+ (void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
+ (void)requestMeContactWithCompletion:(id /* block */)arg1;
+ (void)requestPersonImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 matchingEmail:(id)arg2 orPhone:(id)arg3 withFirstName:(id)arg4 lastName:(id)arg5 prefersPhotosImage:(bool)arg6 withCompletion:(id /* block */)arg7;

@end
