/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionAdvisorSimple : NSObject {
    <_CDInteractionAdvising> * _interactionAdvisor;
}

@property (retain) <_CDInteractionAdvising> *interactionAdvisor;

+ (id)advisorSettingsForMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
+ (id)advisorSettingsForMatchingHandles:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
+ (id)advisorSettingsForMatchingPersonID:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;

- (void).cxx_destruct;
- (id)bestInteractionMatchingContactID:(id)arg1 mechanism:(long long)arg2;
- (id)bestInteractionMatchingDisplayName:(id)arg1 mechanism:(long long)arg2;
- (id)bestInteractionMatchingHandles:(id)arg1 mechanism:(long long)arg2;
- (id)init;
- (id)initWithCoreDuetDaemon;
- (id)initWithCoreDuetDatabase;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)interactionAdvisor;
- (id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (void)setInteractionAdvisor:(id)arg1;

@end
