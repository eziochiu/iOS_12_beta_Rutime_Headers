/* made by EzioChiu.
 */

@protocol CNUIPeopleSource <NSObject>

@required

+ (NSString *)sourceKind;
+ (id)sourceWithEnvironment:(CNUIContactsEnvironment *)arg1 contactStore:(CNContactStore *)arg2;

- (NSArray *)groups;
- (NSArray *)peopleInGroup:(CNUIPeopleGroup *)arg1 keysToFetch:(NSArray *)arg2;

@end
