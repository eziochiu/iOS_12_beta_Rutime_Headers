/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFullFontSize : NSObject {
    bool  _isDefault;
    bool  _needsEvaluation;
    double  _value;
}

+ (id)defaultValue;
+ (id)valued:(double)arg1;

- (id)initWithValue:(double)arg1 isDefault:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)needsEvaluation;
- (id)overrideUnlessDefault:(double)arg1;
- (bool)setNeedsEvaluation;
- (double)valueWithEvaluationIfNeeded:(id /* block */)arg1;

@end
