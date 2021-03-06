/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIDriverInterfaceInfo : NSObject {
    _RWIRelayClientConnection * _connection;
    NSString * _identifier;
    bool  _isActive;
    NSString * _name;
}

@property (nonatomic, readonly) _RWIRelayClientConnection *connection;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)connection;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 connection:(id)arg3;
- (bool)isActive;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (bool)updateDriverState:(bool)arg1;

@end
