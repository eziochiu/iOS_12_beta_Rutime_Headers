/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAddressBookValueSpecifier : NSObject {
    NSString * _category;
    NSString * _component;
    NSString * _label;
    NSString * _parentProperty;
    NSString * _property;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *parentProperty;
@property (nonatomic, readonly) NSString *property;

- (void).cxx_destruct;
- (id)category;
- (id)component;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3;
- (id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 category:(id)arg4 parentProperty:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)parentProperty;
- (id)property;

@end
