/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachedFetchRequestInfo : NSObject {
    NSArray * _substIntarrayBindOrdering;
    NSArray * _substVarBindOrdering;
}

@property (nonatomic, retain) NSArray *substitutionBindIntarrayOrder;
@property (nonatomic, retain) NSArray *substitutionBindVariableOrder;

- (void)dealloc;
- (void)setSubstitutionBindIntarrayOrder:(id)arg1;
- (void)setSubstitutionBindVariableOrder:(id)arg1;
- (id)substitutionBindIntarrayOrder;
- (id)substitutionBindVariableOrder;

@end
