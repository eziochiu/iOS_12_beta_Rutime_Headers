/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanJsonResponseParser : NSObject

+ (bool)parseCountryListResponseData:(id)arg1 intoSupportedCountryList:(id*)arg2 intoUnsupportedCountryList:(id*)arg3 error:(id*)arg4;
+ (bool)parseCreateSessionResponseData:(id)arg1 intoSessionId:(id*)arg2 podId:(id*)arg3 urls:(id*)arg4 error:(id*)arg5;
+ (bool)parseHandoffTokenResponseData:(id)arg1 intoHandoffToken:(id*)arg2 error:(id*)arg3;
+ (bool)parseInitiatePurchaseResponseData:(id)arg1 intoShouldPurchase:(bool*)arg2 responseCode:(int*)arg3 responseText:(id*)arg4 buddyML:(id*)arg5 error:(id*)arg6;
+ (bool)parsePurchaseResponseData:(id)arg1 intoShouldDownloadProfile:(bool*)arg2 iccid:(id*)arg3 responseCode:(int*)arg4 responseText:(id*)arg5 error:(id*)arg6;
+ (bool)parseResponseJson:(id)arg1 setUrl:(id*)arg2 setParameters:(id*)arg3;
+ (bool)parseSubscriptionsResponseData:(id)arg1 intoSubscriptions:(id*)arg2 error:(id*)arg3;
+ (id)sessionIdFromJsonData:(id)arg1;
+ (id)sessionIdFromObject:(id)arg1;

@end
