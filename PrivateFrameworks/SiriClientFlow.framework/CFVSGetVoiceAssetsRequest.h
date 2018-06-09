/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFVSGetVoiceAssetsRequest : SABaseClientBoundCommand <CFLocalAceHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *gender;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *quality;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getVoiceAssetsRequest;
+ (id)getVoiceAssetsRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (id)language;
- (id)quality;
- (bool)requiresResponse;
- (void)setGender:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setQuality:(id)arg1;

@end
