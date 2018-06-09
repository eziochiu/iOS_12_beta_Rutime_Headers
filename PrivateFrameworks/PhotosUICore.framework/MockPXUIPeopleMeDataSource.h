/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface MockPXUIPeopleMeDataSource : PXUIPeopleMeDataSource {
    bool  _meContactShouldExist;
}

@property (nonatomic) bool meContactShouldExist;

- (void)_requestMeContactWithCompletion:(id /* block */)arg1;
- (id)_suggestedPersonForMe;
- (bool)meContactShouldExist;
- (void)setMeContactShouldExist:(bool)arg1;

@end
