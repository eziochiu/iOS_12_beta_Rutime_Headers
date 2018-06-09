/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSModeAssertionInvalidation : NSObject <NSCopying> {
    NSString * _clientIdentifier;
    DNDModeAssertionInvalidation * _modeAssertionInvalidation;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) DNDModeAssertionInvalidation *modeAssertionInvalidation;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 modeAssertionInvalidation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modeAssertionInvalidation;

@end
