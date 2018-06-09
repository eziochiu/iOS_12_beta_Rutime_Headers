/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface _CRAppStateNavigationOwner : NSObject {
    NSXPCConnection * _connection;
    NSString * _identifier;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)connection;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOwner:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
