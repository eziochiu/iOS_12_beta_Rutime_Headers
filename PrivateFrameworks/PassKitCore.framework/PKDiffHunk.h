/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiffHunk : NSObject <NSSecureCoding> {
    NSString * _key;
    NSString * _message;
    id  _newValue;
    id  _oldValue;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) id valueNew;
@property (nonatomic, retain) id valueOld;

+ (id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDiffHunk:(id)arg1;
- (id)key;
- (id)message;
- (void)setKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setValueNew:(id)arg1;
- (void)setValueOld:(id)arg1;
- (id)valueNew;
- (id)valueOld;

@end
