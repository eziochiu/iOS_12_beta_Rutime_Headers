/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModeAssertion : NSObject <NSCopying> {
    NSString * _clientIdentifier;
    DNDModeAssertion * _modeAssertion;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) DNDModeAssertion *modeAssertion;

+ (id)modeAssertionForRecord:(id)arg1;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 modeAssertion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)makeRecord;
- (id)modeAssertion;

@end
