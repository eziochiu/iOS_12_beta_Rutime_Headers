/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface _IKDOMConditionalityExpression : NSObject {
    NSSet * _dependentPropertyPaths;
    bool  _isNegated;
    NSArray * _operations;
}

@property (nonatomic, readonly, copy) NSSet *dependentPropertyPaths;

+ (id)expressionFromString:(id)arg1;
+ (id)parseExpressionsFromString:(id)arg1;

- (void).cxx_destruct;
- (id)dependentPropertyPaths;
- (id)initWithOperations:(id)arg1 dependentPropertyPaths:(id)arg2 isNegated:(bool)arg3;
- (bool)passesForDataItem:(id)arg1;

@end
