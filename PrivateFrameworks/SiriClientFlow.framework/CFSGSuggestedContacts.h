/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFSGSuggestedContacts : SADomainCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *suggestContactMatches;
@property (nonatomic, copy) NSArray *suggestedContactsWithOrigin;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)suggestedContacts;
+ (id)suggestedContactsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSuggestContactMatches:(id)arg1;
- (void)setSuggestedContactsWithOrigin:(id)arg1;
- (id)suggestContactMatches;
- (id)suggestedContactsWithOrigin;

@end
