/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAButtonSpecification : NSObject <NSCopying> {
    long long  _action;
    NSDictionary * _parameters;
    NSString * _title;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTitle:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (id)parameters;
- (void)setAction:(long long)arg1;
- (void)setParameters:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
