/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayTimeContentView : UIView {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _hourRange;
    EKDayTimeView * _owner;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } hourRange;
@property (nonatomic) EKDayTimeView *owner;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hourRange;
- (id)owner;
- (void)setHourRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOwner:(id)arg1;

@end
