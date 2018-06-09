/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKMessageResponseManager : NSObject {
    RKResponseCollection * _collection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _preferredLanguages;
}

@property (retain) RKResponseCollection *collection;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSArray *preferredLanguages;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)categoryForMessage:(id)arg1 langID:(id)arg2;
- (id)collection;
- (id)dispatchQueue;
- (void)flushDynamicData;
- (id)init;
- (id)initWithAssetPlistURL:(id)arg1;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2;
- (bool)isQuestion:(id)arg1 withLanguage:(id)arg2;
- (id)preferredLanguages;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (void)resetRegisteredResponses;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 inputModes:(id)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(id /* block */)arg6;
- (id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 options:(unsigned long long)arg6;
- (void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 options:(unsigned long long)arg6 completionBlock:(id /* block */)arg7;
- (id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 inputModes:(id)arg6 options:(unsigned long long)arg7;
- (void)setCollection:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;

@end
