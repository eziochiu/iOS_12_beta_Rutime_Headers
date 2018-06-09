/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutAttributes : NSObject <NSCopying> {
    SXColumnLayout * _columnLayout;
    NSString * _contentSizeCategory;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
}

@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;

- (void).cxx_destruct;
- (id)columnLayout;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithColumnLayout:(id)arg1 contentSizeCategory:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
