/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate> {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMatches;
@property (readonly) Class superclass;

+ (id)predicateWithControlItemClass:(Class)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)matchesControlItem:(id)arg1;
- (id)matchingControlItemsForControlItems:(id)arg1;
- (unsigned long long)maximumNumberOfMatches;
- (void)setBlock:(id /* block */)arg1;

@end
