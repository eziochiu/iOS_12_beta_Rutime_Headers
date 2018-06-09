/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKWebSearchDomainObject : SAGKDomainObject

@property (nonatomic, copy) NSArray *image;
@property (nonatomic, copy) NSArray *linkedAnswerGroups;
@property (nonatomic, copy) NSString *query;

+ (id)webSearchDomainObject;
+ (id)webSearchDomainObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)linkedAnswerGroups;
- (id)query;
- (void)setImage:(id)arg1;
- (void)setLinkedAnswerGroups:(id)arg1;
- (void)setQuery:(id)arg1;

@end
