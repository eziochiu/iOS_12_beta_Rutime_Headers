/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UILabelContent : NSObject {
    id /* block */  _defaultAttributesProvider;
}

+ (id)emptyContentWithDefaultAttributesProvider:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_defaultAttributesForString:(id)arg1;
- (void)applyToEntireRangeAttribute:(id)arg1 withValue:(id)arg2;
- (void)applyToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 attribute:(id)arg2 withValue:(id)arg3;
- (id)attributedString;
- (id)attributedStringContent;
- (id)contentWithAttributedString:(id)arg1;
- (id)contentWithString:(id)arg1;
- (id)defaultValueForAttribute:(id)arg1;
- (id)description;
- (id)initWithDefaultAttributesProvider:(id /* block */)arg1;
- (bool)isAttributed;
- (bool)isEqualToAttributedString:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isNil;
- (long long)length;
- (id)string;
- (id)valueForAttribute:(id)arg1 isUniform:(bool*)arg2;

@end
