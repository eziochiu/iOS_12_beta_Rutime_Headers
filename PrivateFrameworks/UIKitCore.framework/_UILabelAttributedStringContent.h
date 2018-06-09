/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILabelAttributedStringContent : _UILabelContent {
    NSMutableAttributedString * _attributedString;
}

- (void).cxx_destruct;
- (void)applyToEntireRangeAttribute:(id)arg1 withValue:(id)arg2;
- (void)applyToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 attribute:(id)arg2 withValue:(id)arg3;
- (id)attributedString;
- (id)attributedStringContent;
- (id)defaultValueForAttribute:(id)arg1;
- (id)initWithAttributedString:(id)arg1 defaultAttributesProvider:(id /* block */)arg2;
- (bool)isAttributed;
- (bool)isEqualToAttributedString:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isNil;
- (long long)length;
- (id)string;
- (id)valueForAttribute:(id)arg1 isUniform:(bool*)arg2;

@end
