/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFSFAddToSafariReadingList : SADomainCommand <CFLocalAceHandling, SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addToSafariReadingList;
+ (id)addToSafariReadingListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
