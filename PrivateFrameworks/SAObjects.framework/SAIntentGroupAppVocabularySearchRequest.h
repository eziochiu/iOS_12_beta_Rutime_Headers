/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *appVocabularyType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *query;
@property (readonly) Class superclass;

+ (id)appVocabularySearchRequest;
+ (id)appVocabularySearchRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)appVocabularyType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)query;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;
- (void)setAppVocabularyType:(id)arg1;
- (void)setQuery:(id)arg1;

@end
