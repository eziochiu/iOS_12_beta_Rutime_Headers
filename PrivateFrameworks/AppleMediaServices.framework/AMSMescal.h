/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMescal : NSObject

+ (id)_DAAPActionsForURLBagActions:(id)arg1;
+ (bool)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id*)arg3;
+ (id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id*)arg3;
+ (id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2;
+ (bool)primeTheConnectionWithContract:(id)arg1 error:(id*)arg2;
+ (bool)shouldReprimeConnectionWithResult:(id)arg1;
+ (id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4;
+ (id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4;
+ (bool)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id*)arg5;

@end
