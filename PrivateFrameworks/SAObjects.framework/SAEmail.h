/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmail : AceObject <SAAceComparable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSNumber *favoriteFacetime;
@property (nonatomic, copy) NSNumber *favoriteFacetimeAudio;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *pseudo;
@property (readonly) Class superclass;

+ (id)email;
+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;

- (id)emailAddress;
- (id)encodedClassName;
- (id)favoriteFacetime;
- (id)favoriteFacetimeAudio;
- (id)groupIdentifier;
- (id)label;
- (id)pseudo;
- (void)setEmailAddress:(id)arg1;
- (void)setFavoriteFacetime:(id)arg1;
- (void)setFavoriteFacetimeAudio:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPseudo:(id)arg1;

@end
