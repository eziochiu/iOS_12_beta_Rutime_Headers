/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAppearanceCustomizableClassInfo : NSObject {
    NSString * _classReferenceKey;
    Class  _customizableViewClass;
    Class  _guideClass;
    unsigned long long  _hash;
    bool  _isCustomizableViewClassRoot;
    bool  _isGuideClassRoot;
}

@property (nonatomic, readonly) NSString *_classReferenceKey;
@property (nonatomic, readonly) Class _customizableViewClass;
@property (nonatomic, readonly) Class _guideClass;
@property (nonatomic, readonly) unsigned long long _hash;

+ (id)_cachedClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;
+ (id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;

- (id)_classReferenceKey;
- (Class)_customizableViewClass;
- (Class)_guideClass;
- (unsigned long long)_hash;
- (id)_superClassInfo;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
