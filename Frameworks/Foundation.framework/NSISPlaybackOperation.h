/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {
    NSMutableDictionary * oldIdentsToNewVariables;
    NSMutableSet * userObservableVariables;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)firstAnchor;
- (id)firstItem;
- (id)init;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;
- (id)secondAnchor;
- (id)secondItem;
- (id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2;
- (id)unwrapVariable:(id)arg1;

@end
