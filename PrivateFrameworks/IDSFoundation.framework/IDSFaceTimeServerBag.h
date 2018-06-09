/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSFaceTimeServerBag : IDSServerBag

+ (id)_bagCreationLock;
+ (id)defaultBag;

- (id)_bagDefaultsDomain;
- (id)init;
- (bool)isInDebilitatedMode;

@end
