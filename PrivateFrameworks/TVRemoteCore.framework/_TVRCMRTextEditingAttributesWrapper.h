/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {
    void * _attributes;
}

@property (nonatomic, readonly, copy) NSString *prompt;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) struct _MRTextInputTraits { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { long long x_6_1_1; long long x_6_1_2; } x6; bool x7; bool x8; long long x9[10]; unsigned long long x10; } traits;

- (id)initWithAttributes:(void*)arg1;
- (id)prompt;
- (id)title;
- (struct _MRTextInputTraits { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { long long x_6_1_1; long long x_6_1_2; } x6; bool x7; bool x8; long long x9[10]; unsigned long long x10; })traits;

@end
