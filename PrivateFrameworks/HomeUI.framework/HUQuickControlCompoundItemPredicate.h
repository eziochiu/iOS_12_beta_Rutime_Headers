/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCompoundItemPredicate : NSObject <HUQuickControlItemPredicate> {
    unsigned long long  _minimumNumberOfMatchedPredicates;
    NSArray * _optionalSubpredicates;
    NSArray * _requiredSubpredicates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumNumberOfMatches;
@property (nonatomic, readonly) unsigned long long minimumNumberOfMatchedPredicates;
@property (nonatomic, readonly, copy) NSArray *optionalSubpredicates;
@property (nonatomic, readonly, copy) NSArray *requiredSubpredicates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allSubpredicates;
- (id)init;
- (id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2;
- (id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2 minimumNumberOfMatchedPredicates:(unsigned long long)arg3;
- (id)matchingControlItemsForControlItems:(id)arg1;
- (unsigned long long)maximumNumberOfMatches;
- (unsigned long long)minimumNumberOfMatchedPredicates;
- (id)optionalSubpredicates;
- (id)requiredSubpredicates;

@end
