/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthorizationMetricsController : NSObject

+ (id)_clientIDForAccount:(id)arg1 orUserID:(id)arg2;
+ (id)_clientIdForMetrics;
+ (id)_dialogEventForBiometricAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 matchState:(long long)arg3 topicName:(id)arg4 userAgent:(id)arg5;
+ (id)_dialogEventForBiometricOptInWithResult:(bool)arg1 message:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4 error:(id)arg5;
+ (id)_dialogEventForPasswordAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4;
+ (id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)arg1 error:(id)arg2;
+ (id)_mtTopicForBuyParams:(id)arg1;
+ (id)authorizationDialogEventForParameters:(id)arg1;
+ (id)dialogIdForMetricsDictionary:(id)arg1;
+ (id)userActionDictionaryForBiometricMatchState:(unsigned long long)arg1 didBiometricsLockout:(bool)arg2;
+ (id)userActionDictionaryForUserAction:(long long)arg1 didBiometricsLockout:(bool)arg2;

@end
