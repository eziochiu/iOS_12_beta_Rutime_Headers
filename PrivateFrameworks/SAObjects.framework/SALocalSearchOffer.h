/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchOffer : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) SAUIAppPunchOut *offerPunchOut;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)offer;
+ (id)offerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)offerPunchOut;
- (void)setIdentifier:(id)arg1;
- (void)setOfferPunchOut:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
