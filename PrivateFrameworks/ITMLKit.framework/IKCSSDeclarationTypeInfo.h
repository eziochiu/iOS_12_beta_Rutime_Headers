/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSDeclarationTypeInfo : NSObject {
    NSString * _name;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
