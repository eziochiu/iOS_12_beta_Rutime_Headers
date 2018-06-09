/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBRecentDisplayItemsDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, retain) NSArray *commandTabPlistRepresentation;
@property (nonatomic, retain) NSArray *dockRecentsPlistRepresentation;

- (void)_bindAndRegisterDefaults;

@end
