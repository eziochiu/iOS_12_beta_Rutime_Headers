/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSState : NSObject <NSCopying> {
    NSArray * _activeModeAssertions;
    DNDState * _clientState;
}

@property (nonatomic, readonly, copy) NSArray *activeModeAssertions;
@property (nonatomic, readonly, copy) DNDState *clientState;

- (void).cxx_destruct;
- (id)activeModeAssertions;
- (id)clientState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithClientState:(id)arg1 activeModeAssertions:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
