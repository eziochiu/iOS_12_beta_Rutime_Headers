/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPersistenceUtilities : NSObject

+ (bool)_objectIsValidUserGeneratedVibrationPattern:(id)arg1 error:(id*)arg2;
+ (bool)_validateObjectWithError:(id*)arg1 validationBlock:(id /* block */)arg2;
+ (bool)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)arg1 error:(id*)arg2;
+ (id)userGeneratedVibrationStoreFileURL;

@end
