/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarItemDisplayState : NSObject {
    UIView * _containerView;
    unsigned long long  _displayMode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    <SVAccessoryItem> * _item;
}

@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) unsigned long long displayMode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) <SVAccessoryItem> *item;

- (void).cxx_destruct;
- (id)containerView;
- (unsigned long long)displayMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithItem:(id)arg1 containerView:(id)arg2 displayMode:(unsigned long long)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)isEqual:(id)arg1;
- (id)item;

@end
