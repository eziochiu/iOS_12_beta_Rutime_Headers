/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICKeychainUtilities : NSObject

+ (bool)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (bool)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id*)arg4;
+ (bool)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (bool)addTouchIDGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3;
+ (void)beginEvaluatePolicyReplyBlock;
+ (bool)biometricIDIsEnrolled;
+ (void)endEvaluatePolicyReplyBlock;
+ (id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id*)arg3;
+ (bool)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1;
+ (bool)removeItemForIdentifier:(id)arg1 error:(id*)arg2;
+ (id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id*)arg2;

@end
