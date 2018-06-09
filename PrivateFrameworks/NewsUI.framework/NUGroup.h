/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUGroup : NULayout

+ (id)groupWithSizer:(id)arg1 componentsBlock:(id /* block */)arg2;
+ (id)groupWithSizer:(id)arg1 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg2 componentsBlock:(id /* block */)arg3;

- (id)initWithSizer:(id)arg1 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg2 componentsBlock:(id /* block */)arg3;
- (struct CGPoint { double x1; double x2; })originOffset;

@end