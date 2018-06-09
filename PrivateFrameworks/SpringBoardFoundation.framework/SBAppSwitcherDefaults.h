/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) unsigned long long bottomEdgeGestureSwipeCount;
@property (nonatomic, readonly) NSArray *legacyRecentApplications;
@property (nonatomic, readonly) NSArray *legacyRecentDisplayItemRoles;
@property (nonatomic, readonly) NSArray *legacyRecentDisplayItems;
@property (nonatomic, retain) NSArray *recentsPlistRepresentation;
@property (getter=isSpringBoardKillable, nonatomic, readonly) bool springBoardKillable;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end
