/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIPeopleGroup : NSObject {
    NSString * _identifier;
    NSString * _name;
    NSString * _sourceKind;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sourceKind;

+ (id)peopleGroupWithName:(id)arg1 identifier:(id)arg2 sourceKind:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSourceKind:(id)arg1;
- (id)sourceKind;

@end
