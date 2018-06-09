/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInfoListInfo : NSObject {
    NSArray * _dataViews;
    NSString * _group;
    UIView * _headerContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerPadding;
    double  _lineSpacing;
    double  _width;
}

@property (nonatomic, copy) NSArray *dataViews;
@property (nonatomic, copy) NSString *group;
@property (nonatomic, retain) UIView *headerContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerPadding;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)dataViews;
- (id)group;
- (id)headerContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerPadding;
- (double)lineSpacing;
- (void)setDataViews:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setHeaderContentView:(id)arg1;
- (void)setHeaderMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
