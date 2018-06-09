/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppDataItem : NSObject <NSCopying> {
    IKDataBinding * _binding;
    NSString * _identifier;
    NSDictionary * _properties;
    NSString * _selector;
    NSString * _type;
}

@property (nonatomic, readonly) IKDataBinding *binding;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, readonly) NSString *selector;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)binding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataItemByUpdatingProperties:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithType:(id)arg1 selector:(id)arg2 identifier:(id)arg3 binding:(id)arg4;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)selector;
- (void)setProperties:(id)arg1;
- (id)type;

@end
