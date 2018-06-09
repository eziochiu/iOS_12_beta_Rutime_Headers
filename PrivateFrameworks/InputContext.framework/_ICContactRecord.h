/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICContactRecord : NSObject {
    unsigned char  _changeType;
    _ICContact * _contact;
    NSString * _identifier;
}

@property (nonatomic, readonly) unsigned char changeType;
@property (nonatomic, readonly) _ICContact *contact;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactRecord:(id)arg1;

@end
