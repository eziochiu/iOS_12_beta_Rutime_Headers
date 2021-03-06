/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionTransaction : NSObject {
    INIntent * _currentIntent;
    NSUserActivity * _currentUserActivity;
    INCExtensionRequest * _request;
    INCExtensionTransactionState * _state;
    NSMutableDictionary * _userActivitiesByIdentifier;
}

@property (nonatomic, readonly) INIntent *currentIntent;
@property (nonatomic, readonly, copy) NSUserActivity *currentUserActivity;
@property (nonatomic, readonly) INCExtensionRequest *request;
@property (nonatomic, retain) INCExtensionTransactionState *state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addUserActivities:(id)arg1;
- (void)_updateCurrentIntent:(id)arg1;
- (void)_updateCurrentUserActivityForType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3;
- (id)currentIntent;
- (id)currentUserActivity;
- (id)description;
- (id)initWithIntent:(id)arg1;
- (id)request;
- (void)setState:(id)arg1;
- (id)state;
- (id)userActivityWithIdentifier:(id)arg1;

@end
