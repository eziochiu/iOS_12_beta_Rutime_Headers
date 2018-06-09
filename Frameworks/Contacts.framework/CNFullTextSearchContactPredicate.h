/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSArray * _containerIdentifiers;
    NSArray * _groupIdentifiers;
    NSString * _searchString;
}

@property (nonatomic, readonly, copy) NSArray *containerIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *groupIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerIdentifiers;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
- (id)searchString;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(bool)arg2 service:(id)arg3 error:(id*)arg4;

@end
