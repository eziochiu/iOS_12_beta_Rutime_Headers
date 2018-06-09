/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAccessibilityLocationDescriptor : NSObject {
    NSAttributedString * _attributedName;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    UIView * _view;
}

@property (nonatomic, readonly) NSAttributedString *attributedName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, readonly) UIView *view;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)attributedName;
- (unsigned long long)hash;
- (id)initWithAttributedName:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (id)initWithName:(id)arg1 view:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (struct CGPoint { double x1; double x2; })point;
- (id)view;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)dictionaryRepresentation;
- (bool)matchesDictionaryRepresentation:(id)arg1;

@end
