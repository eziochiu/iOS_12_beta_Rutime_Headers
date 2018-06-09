/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {
    NSDictionary * _options;
    NSString * _semantic;
}

@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, copy) NSString *semantic;

+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (id)semantic;
- (void)setOptions:(id)arg1;
- (void)setSemantic:(id)arg1;

@end
