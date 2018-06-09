/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMRules : NSObject {
    NSArray * _conditionalities;
    NSArray * _indexPath;
}

@property (nonatomic, readonly, copy) NSArray *conditionalities;
@property (nonatomic, readonly, copy) NSArray *indexPath;

+ (void)removeRulesFromDOMElement:(id)arg1;
+ (id)rulesFromDOMElement:(id)arg1;

- (void).cxx_destruct;
- (id)conditionalities;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 conditionalities:(id)arg2;

@end
