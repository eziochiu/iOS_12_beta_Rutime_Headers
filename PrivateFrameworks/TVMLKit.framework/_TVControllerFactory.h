/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVControllerFactory : NSObject

- (id)_gridControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_listControllerForElement:(id)arg1 existingController:(id)arg2;
- (void)_registerControllerCreators;
- (id)_shelfControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)_textFieldControllerForElement:(id)arg1 existingController:(id)arg2;
- (id)init;

@end
