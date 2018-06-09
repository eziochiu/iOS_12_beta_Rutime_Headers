/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationValue : NSObject {
    NSValue * _defaultValue;
    NSString * _key;
    NSValue * _maximumValue;
    NSValue * _minimumValue;
    long long  _type;
}

@property (nonatomic, retain) NSValue *defaultValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSValue *maximumValue;
@property (nonatomic, retain) NSValue *minimumValue;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)key;
- (id)maximumValue;
- (id)minimumValue;
- (void)setDefaultValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
