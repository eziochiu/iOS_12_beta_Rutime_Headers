/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchOfferList : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *offers;
@property (nonatomic, copy) NSString *providerId;
@property (readonly) Class superclass;

+ (id)offerList;
+ (id)offerListWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)offers;
- (id)providerId;
- (void)setOffers:(id)arg1;
- (void)setProviderId:(id)arg1;

@end
