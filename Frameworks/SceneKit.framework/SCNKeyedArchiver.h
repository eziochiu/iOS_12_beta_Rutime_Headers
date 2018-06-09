/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNKeyedArchiver : NSKeyedArchiver {
    NSDictionary * options;
}

@property (nonatomic, copy) NSDictionary *options;

+ (id)archivedDataWithRootObject:(id)arg1 options:(id)arg2;

- (void)dealloc;
- (id)options;
- (void)setOptions:(id)arg1;

@end
