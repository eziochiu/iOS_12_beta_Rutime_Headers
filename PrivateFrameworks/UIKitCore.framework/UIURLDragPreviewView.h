/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIURLDragPreviewView : UIView {
    NSString * _title;
    NSArray * _titleAndUrlConstraints;
    UILabel * _titleLabel;
    NSURL * _url;
    UILabel * _urlLabel;
    NSArray * _urlOnlyConstraints;
    NSString * _urlText;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *urlText;

+ (id)_titleFont;
+ (id)_urlFont;
+ (void)initialize;
+ (id)viewWithTitle:(id)arg1 URL:(id)arg2;
+ (id)viewWithTitle:(id)arg1 URLText:(id)arg2;
+ (id)viewWithURL:(id)arg1;
+ (id)viewWithURLText:(id)arg1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlText:(id)arg1;
- (id)title;
- (void)updateConstraints;
- (id)url;
- (id)urlText;

@end
