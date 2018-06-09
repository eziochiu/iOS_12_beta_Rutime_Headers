/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegate;

- (id)circleGetInitialSyncViews:(id*)arg1;
- (id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo { }*)arg1 error:(id*)arg2;

@end
