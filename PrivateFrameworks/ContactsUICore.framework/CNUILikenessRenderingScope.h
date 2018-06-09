/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUILikenessRenderingScope : NSObject <CNAvatarImageRenderingScopeInternal> {
    struct CGSize { 
        double width; 
        double height; 
    }  _pointSize;
    bool  _rightToLeft;
    double  _scale;
    unsigned long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pointSize;
@property (nonatomic, readonly) bool rightToLeft;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)renderingScopeWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4;

- (id)description;
- (id)initWithPointSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 rightToLeft:(bool)arg3 style:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })pointSize;
- (bool)rightToLeft;
- (double)scale;
- (unsigned long long)style;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (unsigned long long)avatarViewStyle;
- (id)likenessRenderingScope;

@end
