/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (nonatomic) struct _MRTextInputTraits { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { long long x_6_1_1; long long x_6_1_2; } x6; bool x7; bool x8; long long x9[10]; unsigned long long x10; } inputTraits;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, copy) NSString *title;

- (void)setInputTraits:(struct _MRTextInputTraits { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { long long x_6_1_1; long long x_6_1_2; } x6; bool x7; bool x8; long long x9[10]; unsigned long long x10; })arg1;
- (void)setPrompt:(id)arg1;
- (void)setTitle:(id)arg1;

@end
