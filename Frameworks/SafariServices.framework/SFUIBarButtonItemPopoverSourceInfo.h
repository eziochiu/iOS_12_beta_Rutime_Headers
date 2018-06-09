/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFUIBarButtonItemPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _adjustments;
    UIView * _bar;
    UIBarButtonItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverSourceRect;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 inBar:(id)arg2 adjustments:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (id)popoverSourceView;

@end
