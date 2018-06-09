/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient> {
    NSXPCConnection * _connection;
    <CARNavigationOwnershipManagerDelegate> * _delegate;
    NSString * _identifier;
    bool  _ownershipRequested;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CARNavigationOwnershipManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long owner;
@property (nonatomic) bool ownershipRequested;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionReset;
- (void)_setupConnection;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)navigationOwnershipChangedTo:(unsigned long long)arg1;
- (unsigned long long)owner;
- (bool)ownershipRequested;
- (void)releaseNavigationOwnership;
- (void)requestNavigationOwnership;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOwnershipRequested:(bool)arg1;

@end
